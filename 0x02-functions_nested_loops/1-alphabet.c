#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
