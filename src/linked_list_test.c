#include <stdio.h>
#include <stdlib.h>

#include <linked_list.h>

int main(int argc, char *argv[]) {
	// the head / first element
	struct node *head;
	head = malloc(sizeof(struct node));
	head->value = 69;

	printf("Created the head node\n");
	
	// new elements
	add_node(head, 420);
	add_node(head, 1337);
	add_node(head, 58008);
	print_list(head);

	// get length
	printf("Length of list: %d\n", get_length(head));

	// get value by index
	printf("Value of index 2: %d\n", get_value(head, 2));

	// get index by value
	printf("Index of value 420: %d\n", get_index(head, 420));

	// remove element
	remove_node(head, 2);
	printf("Removed 2nd node: ");
	print_list(head);

	// change value
	set_value(head, 2, 5318008);
	printf("Changed value of 2nd node: ");
	print_list(head);

	// insert node
	insert_node(head, 2, 7353);
	printf("Inserted new value at index 2: ");
	print_list(head);

	return 0;
}
