#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next, * prev;
};

struct node *head = NULL;

int display()
{
    struct node *ptr = head;
    if (ptr == NULL)
        printf("list is empty......");
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }

    printf("\n");
}

void insertmid(int val, int pos)
{
    struct node *ptr = head;
    struct node *prev;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;

    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = temp;
    temp->next = ptr;
    return;
}
void deletemid(int val, int pos)
{
    struct node *ptr = head;
    struct node *prev;
    
    while (ptr->data != pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = ptr ->next;
    ptr ->prev=ptr->prev->prev;
    free(ptr);
    
    return;
}
void insertfirst(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    temp->next = head;

    head = temp;
    return;
}

void deletefirst()
{
    struct node *ptr = head;
    head = ptr->next;
    free(ptr);
    return;
}

void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }

    while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = temp;
    return;
}

void deleteend()
{
    struct node *ptr = head;
    struct node *prev;

    if (head == NULL)
        printf("list is alrady empty......\n");

    else if (ptr->next == NULL)

    {
        head = NULL;
        free(ptr);
    }

    else
    {
        while (ptr->next != NULL)

        {
            prev = ptr;
            ptr = ptr->next;
        }

        prev->next = NULL;
        free(ptr);
    }

    return;
}

int main()
{
    insertend(10);
    insertend(100);
    insertend(200);
    insertend(300);
    insertend(400);
    
    insertfirst(500);
    deletefirst();
    
    insertmid(1000,200);
    deletemid(1000,200);
    display();
}