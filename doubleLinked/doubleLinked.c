#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;


struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}


void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}


void Print() {
	struct Node* temp = head;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void delete()
{
    int i = 1, pos;struct Node* temp2=head;

    printf("\n Enter position to be deleted : ");
    scanf("%d", &pos);

    if (head == NULL)
    {
        printf("\n Error : Empty list no elements to delete");
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->next;
            i++;
        }
        if (i == 1)
        {
            if (temp2->next == NULL)
            {
                printf("Node deleted from list");
                free(temp2);
                temp2 = head = NULL;
                return;
            }
        }
        if (temp2->next == NULL)
        {
            temp2->prev->next = NULL;
            free(temp2);
            printf("Node deleted from list");
            return;
        }
        temp2->next->prev = temp2->prev;
        if (i != 1)
            temp2->prev->next = temp2->next;
            head = temp2->next;
        printf("\n Node deleted");
        free(temp2);
    }

}
int main()
{
        int choice;  int x;
        while(1){
                printf("\n\n\n 1.Create\n");
                printf("\n 2.Display\n");
                printf("\n 3.Insert at head\n");
                printf("\n 4.delete at position\n");
                printf("\n 5.Exit\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:        printf("Enter an element");
                                       scanf("%d",&x);head=GetNewNode(x);

                                        break;
                        case 2:
                                        Print();
                                        break;
                        case 3:         printf("Enter an Element");
                                        scanf("%d",&x);InsertAtHead(x);
                                        break;
                        case 4:         delete();

                                        break;

                        case 5:
                                        exit(0);
                                        break;

                        default:
                                        printf("n Wrong Choice:n");
                                        break;
                }
        }
        return 0;
}
