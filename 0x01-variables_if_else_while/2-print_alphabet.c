#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 * Return: always 0 (success)
 *
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');

	return (0);
}
