#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word Hello, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char word[6] = "Hello";
	int i;

	for (i = 0; i < 6; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
