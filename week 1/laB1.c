#include <stdio.h>
# include <conio.h>
#include <stdlib.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE],top=-1;

void main()
{
    int value,choice;
    while(1){
    printf("\n menu \n");
    printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    printf("\nEnter your choice(1-4)");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Enter the value to push:  ");
        scanf("%d",&value);
        push(value);
        break;

        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("invalid number");

            }

    }
}
    void push(int value){
    if(top == SIZE-1)
    printf("\nStack is Full!!! Insertion is not possible");
    else{
    top++;
    stack[top] = value;
    printf("\nInsertion success!!!");
    }
    }
    void pop(){
    if(top==-1)
        printf("stack is empty");
    else {
        printf("deleted ,%d",stack[top]);
    top--;
    }

}
    void display(){
    if(top==-1)
        printf("stack is empty");
    else{
        int i;
        printf("stack elements are");
        for(i=top;i>=0;i--)
            printf("\n%d",stack[i]);
    }
    }


