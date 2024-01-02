#include <stdio.h>
#include <stdlib.h>

#include <stack.h> // stack.h already includes
		   // linked_list.h

int main(int argc, char *argv[]) {
	// STANDARD LINKED LIST
	printf("STANDARD LINKED LIST\n");

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


	// STACK
	printf("\nSTACK\n");
	
	// the head / first element
	struct node *head1;
	head1 = malloc(sizeof(struct node));
	head1->value = 69;

	printf("Created the head node\n");

	// push elements
	push(head1, 420);
	push(head1, 1337);
	push(head1, 58008);
	
	// peek most recently added element
	printf("Full stack: "); print_list(head1);
	printf("Most recently added element: %d\n", peek(head1));

	// pop some elements
	pop(head1);
	pop(head1);

	printf("Full stack: "); print_list(head1);
	printf("Most recently added element: %d\n", peek(head1));

	return 0;
}
