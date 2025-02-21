#include <stdio.h>

int main() {
    int arr[100], size, element, position;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Input position (0-based index)
    printf("Enter the position (0-based index): ");
    scanf("%d", &position);

    // Validate position
    if (position < 0 || position > size) {
        printf("Invalid position! Position should be between 0 and %d\n", size);
        return 1;
    }

    // Shift elements to the right
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element at the specified position
    arr[position] = element;
    size++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
