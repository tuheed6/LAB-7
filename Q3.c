#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: \n", n);
    
    for (i = 0; i < n; i++) {
     printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

