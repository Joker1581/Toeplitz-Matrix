#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize){
    for (int i = 0; i < matrixSize - 1; i++)
    {
        /* code */
        for (int j = 0; j < *matrixColSize - 1; j++)
        {
            /* code */
            if (matrix[i][j] != matrix[i+1][j+1]) return false;
        }
        
    }
    return true;
}