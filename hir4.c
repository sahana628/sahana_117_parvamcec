#include <stdio.h>

// Function to calculate factorial using pointers
void calculateFactorial(int *n, long long *result) {
    *result = 1;
    for (int i = 1; i <= *n; i++) {
        *result *= i;
    }
}

int main() {
    int num;
    long long factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        calculateFactorial(&num, &factorial);
        printf("Factorial of %d is %lld\n", num, factorial);
    }

    return 0;
}