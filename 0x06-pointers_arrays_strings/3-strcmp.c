#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: If str1 < str2, the negative difference
 * 	   If str1 == str2, 0.
 * 	   if str1 > str2, the positive difference
 */
int _strcmp(char *s1, char *s2)
{
	while (s1 && *s2 && *s1 == *s2)
	{
		s1++:
		s2++;
	}

	return (*s1 - *s2);
}
