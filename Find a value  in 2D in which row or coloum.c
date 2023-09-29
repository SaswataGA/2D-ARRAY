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
    int valueToFind = 7;  // The value you want to find

    int count = 0;       // Initialize count to 0
    int rowFound = -1;   // Initialize rowFound to -1 (not found)
    int colFound = -1;   // Initialize colFound to -1 (not found)

    // Iterate through the array to find the value and its location
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == valueToFind)
            {
                count++;
                rowFound = i;
                colFound = j;
            }
        }
    }

    if (count > 0)
    {
        printf("The value %d was found %d times.\n", valueToFind, count);
        printf("It was found in Row %d and Column %d.\n", rowFound + 1, colFound + 1);
    }
    else
    {
        printf("The value %d was not found in the array.\n", valueToFind);
    }

    return 0;
}

