#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	int *Pn = &n;
	*Pn = 98;
	printf("n=%d\n", n);
	return (0);
}
