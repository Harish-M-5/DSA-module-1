#include <stdio.h>
int main() {
    int arr[2][2] = {{1,2},{3,4}};
    arr[1][0] = 99;  // update
    printf("Updated 2D Array:\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
