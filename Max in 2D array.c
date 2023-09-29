#include <stdio.h>
int main()
{
    int matrix[3][4] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int rows = 3;
    int cols = 4;
    int max = matrix[0][0];  // Initialize max with the first element

    // Iterate through the array to find the maximum
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    printf("Maximum value in the array: %d\n", max);

    return 0;
}
