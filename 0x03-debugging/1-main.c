#include "main.h"

/**
 *  * main - Prints Holberton as a message.
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
		int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
			int count, sz;

				sz = sizeof(str) / sizeof(int);
					for (count = 0; count < sz; count++)
							{
										_putchar(str[count]);
											}
						_putchar('\n');
							return (0);
}

Task 1

#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase.
 * Return: On success 1.
 */
void print_alphabet(void)
{
		char i;

			for (i = 'a'; i <= 'z'; i++)
					{
							_putchar(i);
								}
				_putchar('\n');

}
i
