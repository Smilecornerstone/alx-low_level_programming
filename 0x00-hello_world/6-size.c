#include <stdio.h>

/**
 * main - this is the second programming shit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	long int l;
	long long int m;
	char n;
	float o;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(o));
	return (0);
}
