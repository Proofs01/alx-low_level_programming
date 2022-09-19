#include "main.h"

/**
 * _strcpy - Copies a string pointed by @src.
 * @odest: A buffer to copy the string to.
 * @src: A source string to copy.
 *
 * Return: A pointer to the destination string @odest.
 */
char *_strcpy(char *odest, char *src)
{
	int index = 0;


	for (index = 0;  src[index] != '\0'; index++)
	{
		dest [index] = src [index];
	}
	dest [index] = '\0';


	return (dest);
}
