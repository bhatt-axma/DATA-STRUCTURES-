pte#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
int main(){
struct node*head=(struct node*)malloc(sizeof(struct node));
struct node*second=(struct node*)malloc(sizeof(struct node));
struct node*third=(struct node*)malloc(sizeof(struct node));

head->data=90;
head->next=second;
second->data=50;
second->next=third;
third->data=88;
third->next=NULL;
printf("OG LINKEDLIST\n");
struct node* temp=head;
while(temp!=NULL){
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL\n");
int newdata;
printf("Enter the data to be inserted at the end:");
scanf("%d",&newdata);
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=newdata;
newnode->next=NULL;
temp=head;
while(temp->next!=	NULL){
temp=temp->next;
}
temp->next=newnode;
printf("After insertion at the end:");
temp=head;
while(temp!=NULL){
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL\n");
return 0;
}