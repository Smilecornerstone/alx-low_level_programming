#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, follow by a new line.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
