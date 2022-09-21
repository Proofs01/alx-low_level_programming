#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;


	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++:
	}

	return (s1[i] - s2[i]);
}
