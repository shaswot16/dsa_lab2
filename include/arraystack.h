#ifndef __ArrayStack__
#define __ArrayStack__

#include "stack.h"
#include <iostream>

class Stack_Array:public Stack
{
    public: 
        
        int indexoftop=-1;
        int arr[5];
        int push(int data);
        int pop();
        bool isEmpty();
        bool isFull();
        int top();
        void display();
};


#endif