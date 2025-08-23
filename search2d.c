#include <stdio.h>
int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int key = 5, found = 0;
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            if (arr[i][j] == key) {
                printf("Element %d found at position [%d][%d]\n", key, i, j);
                found = 1;
            }
        }
    }
    if (!found) printf("Element not found");
    return 0;
}
