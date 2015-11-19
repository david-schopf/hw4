#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>


int size;
int matrix[10][10];

int main() {

    printf("Enter the size of the matrix\n");
    // Size of the matrix
    scanf("%d", &size);

    if (size < 1 || size > 10) {
        printf("INVALID MATRIX SIZE\n");
        // Error
        return -1;
    }

    int row = 0;
    int column = 0;

    // Fill with values
    for (row = 0; row < size; row ++) {
        for (column = 0; column < size; column ++) {
            printf("Enter element at index %i,%i\n",row,column);
            scanf("%d",&matrix[row][column]);
        }
    }

    printf("RESULT\n");

    // Success
    return 0;


}