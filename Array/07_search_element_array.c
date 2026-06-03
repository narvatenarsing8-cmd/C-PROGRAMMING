#include <stdio.h>

int main() {
    int arr[5], i, element, found = 0;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    for(i = 0; i < 5; i++) {
        if(arr[i] == element) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Element found");
    else
        printf("Element not found");

    return 0;
}