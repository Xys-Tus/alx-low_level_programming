#include "main.h"

/**
 * print_numbers - print numbers 0-9
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
