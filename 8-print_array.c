#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
* Write a fnction who printed N elements of an array
** @a: pointer to the array
* @n: number of elements to print
*/
void print_array(int *a, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(", ");
    }
    printf("\n");
}
