#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 through 9,
 * followed by a new line.
 * Return: Always 0
 */
void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
