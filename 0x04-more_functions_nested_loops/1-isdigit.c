#include "main.h"
#include <stdio.h>

/**
 * print_character - print uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    for("%c: %d\n", c, _isupper(c));
    c = 'a';
    for("%c: %d\n", c, _isupper(c));
    {
	    _putchar(c);
    }
    _putchar('\n');

    return (0);
}
