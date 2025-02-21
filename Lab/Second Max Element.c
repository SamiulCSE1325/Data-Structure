#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array size must be at least 2.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int second_max =-2147483648;  // Minimum possible value for an integer
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }
    printf("The second maximum element is: %d\n", second_max);
    if (second_max == -2147483648) {
        printf("There is no second maximum element (all elements might be the same).\n");
    } else {
        printf("The second maximum element is: %d\n", second_max);
    }
    return 0;
}
