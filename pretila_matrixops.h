#ifndef PRETILA_MATRIXOPS_H
#define PRETILA_MATRIXOPS_H

void matrix_addition(int A[][100], int B[][100], int result[][100], int rows, int cols);

void matrix_subtraction(int A[][100], int B[][100], int result[][100], int rows, int cols);

void matrix_multiplication(int A[][100], int B[][100], int result[][100], int rows_A, int cols_A, int cols_B);

void matrix_transpose(int A[][100], int result[][100], int rows, int cols);

#endif

