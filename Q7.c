#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int count[size];
    for (int i = 0; i < size; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    printf("Numbers that occur more than once: ");
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("No duplicates found.");
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    
    for (int i = 0; i < size; i++) {
        printf("Element %d = ", i + 1);
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, size);
    
    return 0;
}

