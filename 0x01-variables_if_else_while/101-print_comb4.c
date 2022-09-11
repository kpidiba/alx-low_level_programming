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
	int e = 0, n, f;

	while (e <= 9)
	{
		n = 0;
		while (n <= 9)
		{
			f = 0;
			while (f <= 9)
			{
				if (e != n && e < n && n != f && n < f)
				{
				putchar(e + 48);
				putchar(n + 48);
				putchar(f + 48);
				if (e + n + f != 24)
				{
					putchar(',');
					putchar(' ');
				}
				}
				f++;
			}
			n++;
		}
		++e;
	}
	putchar('\n');

return (0);

}
