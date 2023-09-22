#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Define a 2D array to store the multiplication table
    int table[n][n];

    // Populate the multiplication table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            table[i - 1][j - 1] = i * j;
        }
    }

    // Display the multiplication table
    printf("Multiplication Table from 1 to %d:\n", n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", table[i][j]); // Adjust the width to align numbers
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}

