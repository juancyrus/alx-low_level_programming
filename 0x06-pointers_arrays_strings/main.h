#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * my prototypes for today
 */

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
void print_buffer(char *b, int size);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_number(int n);
char *rot13(char *);
char *leet(char *);

#endif /*MAIN_H*/
