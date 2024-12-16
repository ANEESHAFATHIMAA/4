#include <stdio.h>
int main() {
    int n, sum, i, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the sum to find the pair for: ");
    scanf("%d", &sum);
    int found = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    if (!found) {
        printf("No pair found with the given sum %d\n", sum);
    }
    return 0;
}

