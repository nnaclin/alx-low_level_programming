#include "main.h"

/*
   * _strlen - Returns th length of a string
   * @str: string.
   * Returns: length.
   */

int _strlen(char *s)
{

	int len;

	for (len = 0; *s != '\0'; ++s)
		len++;

	return (len);
}
