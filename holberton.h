#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#define NULL_PTR -1
#define WRONG_SPECIFIER -2

/**
 * get_char - put a character into a memory block allocated using malloc
 * The allocated memory should has two bytes: the character, and the
 * terminating null byte.
 *
 * @c: character
 *
 * Return: pointer to that memory block, NULL if error
 */
char *get_char(char c);

/**
 * get_string - put a string into a memory block allocated using malloc
 * @s: string
 *
 * Return: pointer to that memory block, NULL if error
 */
char *get_string(char *s);

/**
 * put_number - put an integer into a block of memory
 * @n: integer
 *
 * Return: pointer to that memory block, NULL if error
 */
char *get_number(int n);

/**
 * print_arg - put one passed in parameter into a block of memory
 * @type: type of the parameter
 *
 * Return: pointer to the memory block, NULL if error
 */
char *get_arg(char type, ...);

/**
 * get_binary - converts an unsigned int to binary
 * @n: integer
 *
 * Return: pointer to binary
 */
char *get_binary(unsigned int n);

/**
 * get_rev - reverse a string
 * @s: string
 * Return: string reversed
 */
char *get_rev(char *s);

/**
 * get_rot13 - rot13 as a string
 * @s: string
 * Return: rot13
 */
char *get_rot13(char *s);

/**
 * update_buffer - update the output buffer
 * concatenate format string and arg string to the output buffer
 * new memory will be allocated to the buffer, and old memory will be free
 * @buffer: address to the buffer pointer
 * @format: current position of the format string from printf
 * @high: index of buffer string
 * @low: index of buffer string
 * @arg: arg string
 */
void update_buffer(char **buffer, char *format, int high, int low, char *arg);

char *str_concat(char *, char *);

char *string_nconcat(char *, char *, unsigned int);

int _strlen(char *);

int _printf(const char *, ...);

#endif
