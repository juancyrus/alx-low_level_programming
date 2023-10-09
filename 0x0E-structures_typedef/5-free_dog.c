#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - set dogs free
 * @d: struct dog.
 *
 * Return: no return.
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
