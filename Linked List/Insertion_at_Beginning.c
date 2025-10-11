#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
int main(){
struct node*head=(struct node*)malloc(sizeof(struct node));
struct node*second=(struct node*)malloc(sizeof(struct node));
struct node*third=(struct node*)malloc(sizeof(struct node));

head->data=10;
head->next=second;
second->data=30;
second->next=third;
third->data=78;
third->next=NULL;
printf("OG LINKEDLIST");
struct node* temp=head;
while(temp!=NULL){
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL\n");
int newdata;
printf("Enter the data to be inserted at the beginning:");
scanf("%d",&newdata);
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=head;
head=newnode;
printf("After insertion at the beginning :");
temp=head;
while(temp!=NULL){
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL\n");
return 0;
}