#include "main.h"
/**
 * main - print _putchar
 *
 * this program is written by nathan-88
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
