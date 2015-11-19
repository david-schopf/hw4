#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>


int size;
int matrix[10][10];

bool isDiagonal() {
    int row = 0;
    int column = 0;
    int value;

    for (row = 0; row < size; row++) {
        for (column = 0; column < size; column++) {
            value = matrix[row][column];
            // Check every cell if its off-diagonal and not 0
            if (row != column && value != 0)
                return false;
        }
    }
    // No error until here: Matrix is diagonal!
    return true;
}

bool isSymmetric() {
    int row = 0;
    int column = 0;
    int value;

    for (row = 0; row < size; row++) {
        for (column = 0; column < size; column++) {
            value = matrix[row][column];
            int transposedValue = matrix[column][row];
            // Check every cell if its transposed cell has the same value
            if (value != transposedValue)
                return false;
        }
    }
    // No error until here: Matrix is symmetric!
    return true;
}

bool isSkewSymmetric() {
    int row = 0;
    int column = 0;
    int value;

    for (row = 0; row < size; row++) {
        for (column = 0; column < size; column++) {
            value = matrix[row][column];
            int transposedValue = matrix[column][row];
            // Check every cell if its transposed cell has the corresponding negative value
            if (value != (-1) * transposedValue)
                return false;
        }
    }
// No error until here: Matrix is skew-symmetric!
    return true;
}

int main() {

    printf("Enter the size of the matrix\n");
    // Size of the matrix
    scanf("%d", &size);

    if (!size || size < 1 || size > 10) {
        printf("INVALID MATRIX SIZE\n");
        // Error
        return -1;
    }

    int row = 0;
    int column = 0;

    // Fill with values
    for (row = 0; row < size; row++) {
        for (column = 0; column < size; column++) {
            printf("Enter element at index %i,%i\n", row, column);
            scanf("%d", &matrix[row][column]);
        }
    }

    printf("RESULT\n");

    if (isDiagonal()) {
        printf("The matrix is diagonal\n");
    }
    if (isSymmetric()) {
        printf("The matrix is symmetric\n");
    }

    if (isSkewSymmetric()) {
        printf("The matrix is skew - symmetric\n");
    }

    // Success
    return 0;
}

