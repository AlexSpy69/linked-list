#include <stdio.h>
#include <linked_list.h>

void push(struct node *head, int value) {
	add_node(head, value);
}

void pop(struct node *head) {
	struct node *p = head;
	while (p->next->next != NULL) {
		p = p->next;
	}
	struct node *old = p->next;
	p->next = NULL;
	free(old);
}

int peek(struct node *head) {
	struct node *p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	return p->value;
}
