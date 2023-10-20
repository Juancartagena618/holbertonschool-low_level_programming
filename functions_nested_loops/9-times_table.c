#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void
 */
void times_table(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 < 9; n1++)
	{
		for (n2 = 0; n2 < 9; n2++)
		{
			n3 = n1 * n2;

			if (n2 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (n3 < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((n3 / 10) + '0');
				}
				_putchar((n3 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
