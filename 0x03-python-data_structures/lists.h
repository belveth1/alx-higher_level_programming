#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
listint_t *reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
/**
 * reverse_listint - Reverses a singly-linked listint_t list.
 * @head: A pointer to the starting node of the list to reverse.
 *
 * Return: A pointer to the head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
        listint_t *node = *head, *next, *prev = NULL;

        while (node)
        {
                next = node->next;
                node->next = prev;
                prev = node;
                node = next;
        }

        *head = prev;
        return (*head);
}
size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

int is_palindrome(listint_t **head);

#endif /* LISTS_H */
