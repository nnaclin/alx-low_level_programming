#include <stdio.h>

/** 
  * main - this is a function that prints its own name
  * @agrgc: argc
  * @argv: an array of a command listed
  * Return: 0 for succes
  **/

int main (int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
