#include <string.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = strtol(argv[1], NULL, 10);
	y = strtol(argv[2], NULL, 10);
	printf("%d\n", x * y);
	return (0);
}
