#include <stdio.h>

int main()
{
    int originalMatrix[3][4] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int transposedMatrix[4][3];  // Resulting transposed matrix
    int rows = 3;
    int cols = 4;

    // Display the original matrix
    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d\t", originalMatrix[i][j]);
        }
        printf("\n");
    }

    // Transpose the matrix
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transposedMatrix[i][j] = originalMatrix[j][i];
        }
    }

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d\t", transposedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

