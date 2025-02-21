#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Create a new array to store the reversed elements
    int reversed[n];
    for (int i = 0; i < n; i++) {
        reversed[i] = arr[n - 1 - i];
    }
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", reversed[i]);
    }
    printf("\n");
    return 0;
}
