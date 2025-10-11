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
    head->data=100;
    head->next=second;
    second->data=150;
    second->next=third;
    third->data=200;
    third->next=NULL;
    printf("OG LINKED LIST");
   
printf("NULL\n");
    struct node*temp=head;
    int newdata,position;
    printf("\n enter the data to be inserted");
    scanf("%d",&newdata);
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->next=NULL;
    printf("ENTER THE POSITION TO BE INSERTED");
    scanf("%d",&position);
    if(position==1){
    newnode->next=head;
    head=newnode;
    }
    else{
        temp=head;
        int i;
        for(i=1;i<position-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    printf("After insertion");
    temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    return 0;
    
}