#include <stdio.h>
int main() {
    int n, i, target, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the integer to find: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    if (count > 0) {
        printf("The integer %d occurred %d time(s) in the array.\n", target, count);
    } else {
        printf("The integer %d is not present in the array.\n", target);
    }

    return 0;
}
