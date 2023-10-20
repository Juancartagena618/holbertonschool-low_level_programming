#include "main.h"

/**
 * jack_bauer - Prinst every minute of the day
 * main - jackbauer return
 * Return: 0
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_printf("%02d:", hour);
			_printf("%02d\n", minute);
		}
	}
	return (0);
}
