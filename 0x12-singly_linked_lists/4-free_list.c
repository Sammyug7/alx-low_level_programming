#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list
 * @head: A pointer to the linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
