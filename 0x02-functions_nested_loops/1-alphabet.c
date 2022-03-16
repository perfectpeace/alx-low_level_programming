#include "main.h"

/**
 * main - Entry point
 * print_alphabet - print alphabet in lowercase.
 */
void print_alphabet(void)
{
char letters;
letters = 'a';
while (letters <= 'z')
{
_putchar(letters);
letters++;
}
_putchar('\n');
}
