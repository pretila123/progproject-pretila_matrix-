#include <stdio.h>
#include "pretila_matrixops.h"

int main() {
    int A[][100] = {{1, 2, 3}, {4, 5, 6}};
    int B[][100] = {{7, 8, 9}, {10, 11, 12}};
    int result_addition[100][100];
    int result_subtraction[100][100];
    int result_multiplication[100][100];
    int result_transpose[100][100];

    int rows_A = 2, cols_A = 3;
    int rows_B = 2, cols_B = 3;
    int rows_result = 2, cols_result = 3;
   
    printf("Matrix Addition:\n");
    matrix_addition(A, B, result_addition, rows_A, cols_A);
    for (int i = 0; i < rows_result; ++i) {
        for (int j = 0; j < cols_result; ++j) {
            printf("%d ", result_addition[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Subtraction:\n");
    matrix_subtraction(A, B, result_subtraction, rows_A, cols_A);
    for (int i = 0; i < rows_result; ++i) {
        for (int j = 0; j < cols_result; ++j) {
            printf("%d ", result_subtraction[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix Multiplication:\n");
    matrix_multiplication(A, B, result_multiplication, rows_A, cols_A, cols_B);
    for (int i = 0; i < rows_A; ++i) {
        for (int j = 0; j < cols_B; ++j) {
            printf("%d ", result_multiplication[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose of Matrix A:\n");
    matrix_transpose(A, result_transpose, rows_A, cols_A);
    for (int i = 0; i < cols_A; ++i) {
        for (int j = 0; j < rows_A; ++j) {
            printf("%d ", result_transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

