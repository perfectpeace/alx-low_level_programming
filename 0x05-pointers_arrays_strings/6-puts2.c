#include "main.h"

/**
 * puts2 - functions that prints every other character of a string
 * starting wih the first character, followed by a new line
 * @str: char variable pointer
 * Return: nothing
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; j < i; j += 2)
	{

		_putchar(str[j]);
	}
	_putchar(10);
}



