#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int isFull()
{
    if (front == 0 && rear == SIZE - 1)
        return 1;

    if (rear + 1 == front)
        return 1;

    return 0;
}

int isEmpty()
{
    if (front == -1)
        return 1;

    return 0;
}

void insert()
{
    int value;

    if (isFull())
    {
        printf("Queue is full\n");
        return;
    }

    printf("Enter the value: ");
    scanf("%d", &value);

    if (front == -1)
        front = 0;

    rear = (rear + 1) % SIZE;
    queue[rear] = value;

    printf("Value inserted\n");
}

void delete()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Deleted value: %d\n", queue[front]);

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}

void display()
{
    int i;

    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements are: ");

    i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
    }

    printf("\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
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
