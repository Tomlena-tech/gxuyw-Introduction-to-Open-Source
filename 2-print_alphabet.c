#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet - Print Alphabet in order
 *
 * Description: Prints the alphabet from a to z in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }
    putchar('\n');
}
