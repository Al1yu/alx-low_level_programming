#include "main.h"

/**
 * _isupper - A function that checks for uppercase letter
 * @c: An input character
 * Return: 1 if c is uppercase or 0 (not uppercase)
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
