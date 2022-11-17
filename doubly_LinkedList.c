#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *Add2empty(int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->prev=newnode->next=NULL;
    return newnode;
}
struct node* InsertAtHead(struct node *head,int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    newnode->prev=NULL;
    if(head!=NULL){
        (head)->prev=newnode;
    }
    head=newnode;
    return head;
}
struct node* InsertLast(struct node *head,int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    struct node *temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    return head;
}
void print(struct node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head=head->next;
    }
    printf("\n");
}
int main(){
    struct node *head=NULL;//Add2empty(2);
    head=InsertAtHead(head,1);
    head=InsertLast(head,3);
    head=InsertLast(head,4);
    print(head);
}