#include "linkedlist.h"
#include<iostream>
using namespace std;
Node::Node(int data,Node *next)
{ 
    this->data=data;
    this->next=NULL;
}
bool Stack_Linked_List::isEmpty()
{
    return((HEAD==NULL)?1:0);

}
bool Stack_Linked_List::isFull()
{
    return((no_of_Nodes_present>=no_of_Nodes)?1:0);
    
}
int Stack_Linked_List::pop()
{
    Node* nodeToDel=HEAD;
    if(isEmpty()){
        cout<<endl<<"Stack is empty";
    }
    else{
        HEAD=HEAD->next;
        cout<<endl<<"Popped the element :";
        no_of_Nodes_present--;
        return nodeToDel->data;

    }
    return 0;

}
int Stack_Linked_List::push(int data)
{  
    if(isFull())
    {
        cout<<"Stack is full"<<endl;
       
    }
    else{
        Node *newNode=new Node;
        newNode->data=data;
        newNode->next=HEAD;
        HEAD=newNode;
        no_of_Nodes_present++;
        cout<<"Pushed the element :";
    }
    return HEAD->data;
}
int Stack_Linked_List::top()
{
    return HEAD->data;
}
void Stack_Linked_List::display()
{
    for(Node *x=HEAD;x!=NULL;x=x->next){
        cout<<x->data<<endl;
    }
    
}