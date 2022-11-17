#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *add2empty(int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct node *Insert(struct node *head,int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
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
    struct node *head=NULL;
    head=add2empty(2);
    head=Insert(head,1);
    head=Insert(head,3);
    print(head);
}