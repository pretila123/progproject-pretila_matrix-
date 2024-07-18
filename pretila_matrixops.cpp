#include "pretila_matrixops.h"

void matrix_addition(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

void matrix_subtraction(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

void matrix_multiplication(int A[][100], int B[][100], int result[][100], int rows_A, int cols_A, int cols_B) {
    for (int i = 0; i < rows_A; ++i) {
        for (int j = 0; j < cols_B; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols_A; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void matrix_transpose(int A[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = A[i][j];
        }
    }
}

