#include <stdio.h>
/**
 * main - entry point of function
 *
 * Description - print 00, 01..89 skip duplicates
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a, b, c, d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					putchar(',');
					putchar(' ');
					
					
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
