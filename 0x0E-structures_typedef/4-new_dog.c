#include "dog.h"
#include <stdllib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - makes a new dog, memory and etc
 * @name: name to create and assign to for dog
 * @age: age to assign to for dog
 * @owner: owner to create and assign to for  dog
 *
 * Return: pointer to new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	if (name == NULL)
		new_d->name = NULL;
	else
	{
		new_d->name = malloc(_strlen(name) + 1);
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d-> name = _strcpy(new_d->name, name);
	}
	if (owner == NULL)
		new_d->owner = NULL;
	else
	{
		new_d->owner = malloc(_strlen(owner) + 1);
		if (new_d->owner == NULL;
		{
			free(new_d->name;)
			free(new_d);
			return(NULL);
		}
		new_d->owner = _strcpy(new_d->owner, owner);
	}
	new_d->age = age;
	return (new_d);
}
/**
 * _strlen - gets length of string
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(*s)
{
	int i = 0;
	for (i = 0; s[i];i++)
		;
	return (i);
}
/**
 * _strcpy - copies string from src to dest
 *
 * @dest: pointer to destination of string
 * @src: pointer to source of string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;
	while (*src)
		*temp++ = *src++;
	*temp = '\0';
	return(dest);
}
