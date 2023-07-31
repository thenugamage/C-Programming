#include <stdio.h>

int main() {
    int size;
    int i;

    // Input the size of the arrays
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    // Declare the two arrays and third array for vector sum, product, and scalar product
    int array1[size], array2[size], vectorSum[size], vectorProduct[size], scalarProduct[size];
    int scalarSum = 0;

    // Input values for the first array
    printf("Enter values for the first array:\n");

    for (i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    // Input values for the second array
    printf("Enter values for the second array:\n");

    for (i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    // Calculate scalar sum
    for (i = 0; i < size; i++) {
        scalarSum += array1[i] + array2[i];
    }

    // Calculate vector sum and vector product
    for (i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
        vectorProduct[i] = array1[i] * array2[i];
    }

    // Calculate scalar product and sum of scalar product
    int scalarProductSum = 0;
    for (i = 0; i < size; i++) {
        scalarProduct[i] = array1[i] * array2[i];
        scalarProductSum += scalarProduct[i];
    }

    // Display results
    printf("Scalar Sum: %d\n", scalarSum);

    printf("Vector Sum: ");

    for (i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    printf("Vector Product: ");

    for (i = 0; i < size; i++) {
        printf("%d ", vectorProduct[i]);
    }
    printf("\n");

    printf("Scalar Product: ");

    for (i = 0; i < size; i++) {
        printf("%d ", scalarProduct[i]);
    }
    printf("\n");

    printf("Sum of Scalar Product: %d\n", scalarProductSum);
}
