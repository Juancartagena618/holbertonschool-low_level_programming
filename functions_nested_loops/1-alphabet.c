#include "main.h"

/**
 * print_alphabet - Prints tha alphabet, in lowercase followed by new line
 * Return:0
 */

void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
