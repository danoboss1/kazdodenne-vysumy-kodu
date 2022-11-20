#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int tmb = *a;
    *a = *b;
    *b = tmb;

    return;
}

int main()
{
    int a = 19;
    int b = 3;

    printf("Cislo a: %d, cislo b: %d", a, b);
    printf("\n");

    swap(&a, &b);

    printf("Po otoceni cisiel! \n");
    printf("Cislo a: %d, cislo b: %d", a, b);

    return 0;    
}