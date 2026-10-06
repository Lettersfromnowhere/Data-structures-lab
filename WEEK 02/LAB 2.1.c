#include <stdio.h>
#include <stdlib.h>

#define size 10

int queue_array[size];
int rear = -1;
int front = -1;

void insert();
void delete();
void display();

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

void insert()
{
    int add_item;

    if (rear == size - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        printf("Enter the element to queue: ");
        scanf("%d", &add_item);

        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue_array[front]);
        front = front + 1;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("Queue: ");

        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue_array[i]);
        }

        printf("\n");
    }
}
