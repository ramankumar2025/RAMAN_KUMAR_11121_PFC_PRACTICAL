#include <stdio.h>

int main() {
    int arr[10][10];
    int i, j, row, col, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);
    printf("Enter number of columns: ");
    scanf("%d", &col);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];  
        }
    }

    printf("Sum of all elements = %d", sum);

    return 0;
}
