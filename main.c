#include <stdio.h>

#define N 3  // ukuran matrix

void read_matrix(int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Masukkan elemen [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);  // gunakan %d karena M bertipe int
        }
    }
}

void multiply(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int sum = 0;  // harus deklarasikan variabel sum
            for (int k = 0; k < N; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

void print_matrix(int M[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", M[i][j]);  // gunakan %d karena M bertipe int
        }
        printf("\n");
    }
}

int main(void) {
    int A[N][N], B[N][N], C[N][N];

    printf("Masukkan matriks A:\n");
    read_matrix(A);

    printf("Masukkan matriks B:\n");
    read_matrix(B);

    multiply(A, B, C);

    printf("Hasil Kali Matrix:\n");
    print_matrix(C);

    return 0;
}

    printf("Hasil Kali matrix: \n");
    print_matrix(C);
    return 0;
}
