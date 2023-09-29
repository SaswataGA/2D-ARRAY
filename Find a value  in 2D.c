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
    int targetValue = 7; // Change this to the value you want to count

    int count = 0; // Initialize a counter to zero

    // Iterate through the array to count occurrences of targetValue
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == targetValue)
            {
                count++;
            }
        }
    }

    printf("The value %d appears %d times in the array.\n", targetValue, count);

    return 0;
}

