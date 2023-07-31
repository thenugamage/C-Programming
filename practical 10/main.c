#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int min, max, sum = 0;

    // Input values into the array
    printf("Enter 10 integer values:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Find minimum and maximum values
    min = max = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    // Calculate the average value
    float avg = (float)sum / 10;

    // Print results
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", avg);

    // Reverse order of values
    printf("Reversed order of values:\n");

    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n")
}
