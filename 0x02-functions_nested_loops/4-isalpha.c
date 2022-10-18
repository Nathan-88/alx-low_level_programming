#include "main.h"

/**
 * _isalpha - checks for alphabetical characters
 * @c: the char to be checked
 * Return: 1 if c is a letter, lowercase or uppercase returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'))
		return (1);
	else
		return (0);
}

