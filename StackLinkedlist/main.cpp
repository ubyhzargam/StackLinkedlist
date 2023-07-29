//
//  main.cpp
//  StackLinkedlist
//
//  Created by Uby H on 29/07/23.
//

#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
}*top=NULL;
void push(int x)
{
    struct Node *t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
        cout<<"Stack overflow"<<endl;
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}
int pop()
{
    struct Node *p=top;
    int x=-1;
    if(top==NULL)
        cout<<"Stack is empty"<<endl;
    else
    {
        top=top->next;
        x=p->data;
        delete p;
        p=NULL;
    }
    return x;
}
void Display()
{
    struct Node *p=top;
    while(top!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
int peek(int pos)
{
    struct Node *p=top;
    for(int i=0;i<pos-1&&p!=NULL;i++)
        p=p->next;
    if(p!=NULL)
        return p->data;
    else
        return -1;
}
