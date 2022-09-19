#include "main.h"

/*
   * _strlen - Returns th length of a string
   * @str: string.
   * Returns: length.
   */

size_t _strlen(char *s)
{

	size_t len;

	for (len = 0; *s != '\0'; ++s)
		len++;

	return (len);
}
