#include <stdio.h>
long long factorial(int n) 
{
    if (n == 0 || n == 1)
     {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
 {
    int num;
    long long result;
    printf("Enter a positive integer:");
    scanf("%d", &num);
    if (num < 0)
     {
        printf("Factorial of a negative number doesn't exist.\n");
    } 
    else 
    {
    
        result = factorial(num);
        printf("The factorial of %d is: %lld\n", num, result);
    }

    return 0;
}
