#include <unistd.h>

/**
* _putchar - writes the charachter c to stdout
*@c: the character to print'8
*
* Return: On success 1.
* On error, -1 is returnedand error no is set appropriately.
*/

int _putchar(char c)
{
	return(write(1, &c, 1)):
}
