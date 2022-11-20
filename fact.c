#include <stdio.h>

unsigned int fact(unsigned int n)
{
    if(n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    unsigned int n, result;

    printf("Enter a positive number for a factorial function: ");
    scanf("%d", &n);

    result = fact(n);

    printf("Result of the factorial function is: %d", result);

    return 0;
}