#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		char num2;

		for (num2 = '0'; num2 <= '9'; num2++)
		putchar(num2);

		for (num2 = 'a'; num2 <= 'f'; num2++)
		putchar(num2);

		putchar('\n');

	return (0);
}


