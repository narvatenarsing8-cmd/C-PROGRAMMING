#include <stdio.h>

int main() {
    int arr[5], i, j, count;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) {
        count = 1;

        if(arr[i] == -1)
            continue;

        for(j = i + 1; j < 5; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}