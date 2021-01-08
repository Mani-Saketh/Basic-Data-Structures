#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

void printList(struct Node* head)
{
	struct Node* ptr = head;
	while (ptr)
	{
		printf("%d -> ", ptr->data);
		ptr = ptr->next;
	}

	printf("NULL\n");
}


void push(struct Node** head, int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = *head;
	*head = newNode;
}


struct Node* ShuffleMerge(struct Node* a, struct Node* b)
{
	struct Node dummy;
	struct Node* tail = &dummy;
	dummy.next = NULL;

	while (1)
	{
		
		if (a == NULL)
		{
			tail->next = b;
			break;
		}

		else if (b == NULL)
		{
			tail->next = a;
			break;
		}

		
		else
		{
			tail->next = a;
			tail = a;
			a = a->next;

			tail->next = b;
			tail = b;
			b = b->next;
		}
	}

	return dummy.next;
}



int main(void)
{
	
	int keys[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(keys)/sizeof(keys[0]);

	struct Node *a = NULL, *b = NULL;
	for (int i = n - 1; i >= 0; i = i - 2)
		push(&a, keys[i]);

	for (int i = n - 2; i >= 0; i = i - 2)
		push(&b, keys[i]);

	
	printf("First List  :  ");
	printList(a);

	printf("Second List : ");
	printList(b);

	struct Node* head = ShuffleMerge(a, b);
	printf("After Merge : ");
	printList(head);

	return 0;
}
