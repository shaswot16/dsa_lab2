#include "arraystack.h"
#include<iostream>
using namespace std;

bool Stack_Array::isEmpty(){
    return((indexoftop==-1)?1:0);
} 

bool Stack_Array::isFull(){
    int x=sizeof(arr)/sizeof(int);
    return((indexoftop==x-1)?1:0);

}
int Stack_Array::push(int data){

    if (isFull()){
        cout<<endl<<"Cannot push "<<data<<".Stack is full.";
        cout<<"The element at top is still : ";
    }
    else{
        indexoftop++;
        arr[indexoftop]=data;
        cout<<endl<<"Pushed the element :";
    }
    return top();
}
int Stack_Array::pop(){
    if(isEmpty()){
        cout<<"Cannot be popped. Stack is empty"<<endl;
    }
    else{
        indexoftop--;
        cout<<"Popped the element :"<<endl;
    }
    return arr[indexoftop+1];
}
int Stack_Array::top(){
    return arr[indexoftop];
}
void Stack_Array::display()
{
    for(int i=0;i<=indexoftop;i++){
        cout<<arr[i]<<endl;
    }
}
