#include "lists.h"
#include <stddef.h>
/**
 * insert_node - Inserts a number into a sorted linked list.
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Return: 0 If the function fails or the new node's pointer.
 */
listint_t *insert_node(listint_t **head, int number)
{
  listint_t *current, *new_node;

  current = *head;
  new_node = malloc(sizeof(listint_t));
  if (new_node == NULL)
  {
    return (NULL);
  }
  new_node->n = number;

  if (current == NULL || current->n >= number) {
    new_node->next = current;
    *head = new_node;
    return (new_node);
  }

  while (current && current->next && current->next->n < number)
    current = current->next;

  new_node->next = current->next;
  current->next = new_node;

  return (new_node);
}
