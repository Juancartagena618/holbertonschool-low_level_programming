#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @num: The number to extract the last digit from.
 *
 * Return: last digit of the number
 */
int print_last_digit(int num)
{
	int lastDigit = (num % 10);

	if (lastDigit < 0)
	{
		lastDigit = -lastDigit;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
