#include "main.h"

/**
 * jack_bauer - Prints event in this format: HH:MM
 *
 *Return: the sum of two numbers.
 */
void jack_bauer(void)
{
	int Hours, minutes;

	for (hour = 0; hour < 23; hour++)
	{
	for (minute = 0; minute <= 59; minute++)
	{
	_putchar((hour / 10) + '0');
	_putchar((hour % 10) + '0');
	_putchar(':');
	_putchar((minute / 10) + '0');
	_putchar((minute % 10) + '0');
	_putchar('\n');
	}
	}
}
