#include <stdio.h>

int main() {
    int arr[100], size, position;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position (0-based index) to delete
    printf("Enter the position (0-based index) to delete: ");
    scanf("%d", &position);

    // Validate position
    if (position < 0 || position >= size) {
        printf("Invalid position! Position should be between 0 and %d\n", size - 1);
        return 1;
    }

    // Shift elements to the left to overwrite the deleted element
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--; // Decrease the size of the array

    // Print the updated array
    printf("Array after deletion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
