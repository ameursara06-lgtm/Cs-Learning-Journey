#include <stdio.h>
#define ROWS 3
#define COLS 3

int sumColumn(int mat[ROWS][COLS], int colIndex) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        sum += mat[i][colIndex];
    }
    return sum;
}
int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int j;
    printf("Enter the column index (0 to %d): ", COLS - 1);
    scanf("%d", &j);
    if (j >= 0 && j < COLS) {
        int result = sumColumn(matrix, j);
        printf("The sum of elements in column %d is: %d\n", j, result);
    } else {
        printf("Invalid column index\n");
    }
    return 0;
}