#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
	putchar(number);
	if (number == 57)
	{
	continue;
	}
	putchar(44);
	putchar(32);
	}
	putchar(10);
	return (0);
}
