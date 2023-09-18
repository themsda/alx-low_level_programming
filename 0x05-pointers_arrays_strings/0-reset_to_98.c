#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, *Pn;

	n = 402;
	printf("n=%d\n", n);
	Pn = &n;
	*Pn = 98;
	printf("n=%d\n", n);
	return (0);
}
