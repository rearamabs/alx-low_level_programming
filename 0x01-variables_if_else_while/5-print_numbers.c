#include <stdio.h>
/**
 * main - print numbers of base ten
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	int base_ten = 0;

	while (base_ten <= 10)
	{
		putchar(base_ten);
		base_ten++;
	}
	putchar('\n');
	return (0);
}
