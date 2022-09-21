#ifndef __LinkedList__
#define __LinkedList__

#include "stack.h"
#include <iostream>

class Node
{
    public:
        int data;
        Node *next;
        Node(int data=0,Node *next=NULL);
}; 


class Stack_Linked_List:public Stack
{
    public:
        Node * HEAD;
        int no_of_Nodes=5;
        int no_of_Nodes_present=0;

        Stack_Linked_List(){
            HEAD=NULL;
            
        };
        int push(int data);
        int pop();
        bool isEmpty();
        bool isFull();
        int top();
        void display();

};


#endif