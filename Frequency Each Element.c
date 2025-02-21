#include <stdio.h>
int main () {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[n], freq[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;             // Initialize the frequency array
    }
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;                      // Mark duplicate elements
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;                       // Store the frequency
        }    }
    printf("Element | Frequency\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d       | %d\n", arr[i], freq[i]);
        }   }
    return 0;
}
