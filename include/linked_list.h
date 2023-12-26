#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

void print_list(struct node *p) {
	while (p != NULL) {
		printf("%d ", p->value);
		p = p->next;
	}
	printf("\n");
}

void walk(struct node *p, int times) {
	for (int i = 0; i<times; i++) {
		p = p->next;
	}
}

int get_value(struct node *p, int index) {
	walk(p, index);
	return p->value;
}

int get_index(struct node *p, int value) {
	int i = 0;
	while (p->value != value) {
		p = p->next;
		i++;
	}
	return i;
}

int get_length(struct node *p) {
	int i;
	while (p != NULL) {
		p = p->next;
		i++;
	}
	return i;
}

void add_node(struct node *head, int value) {
	struct node *new_node;
	new_node = malloc(sizeof(struct node));
	if (new_node == NULL) {
		return;
	}
	
	new_node->value = value;
	new_node->next = NULL;

	if (head == NULL) {
		head = new_node;
		return;
	}

	struct node *p = head;
	while (p->next != NULL) {
		p = p->next;
	}

	p->next = new_node;
}

void remove_node(struct node *p, int index) {
	walk(p, index-1);
	struct node *old = p->next;
	p->next = p->next->next;
	free(old);
}

void set_value(struct node *p, int index, int value) {
	walk(p, index);
	p->value = value;
}
