#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always success
 */

int main(void)
{
	int e = 0, n;

	while (e <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			if (e != n && e < n)
			{
				putchar(e + 48);
				putchar(n + 48);
			if (e + n != 17)
			{
				putchar(',');
				putchar(' ');
			}
			}
		n++;
		}
		++e;
	}
	putchar('\n');

return (0);

}
