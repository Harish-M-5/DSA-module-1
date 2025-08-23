#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int pos = 3, val = 99;  
    arr[pos] = val;
    printf("Array after update: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
