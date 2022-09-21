#include <iostream>
#include <stack.h>
#include <arraystack.h>
#include <linkedList.h>
using namespace std;

int main()
{
    Stack *st;
    Stack *s_array = new Stack_Array;
    Stack *s_linkedlist = new Stack_Linked_List;

    st = s_array;
    cout << "Is it empty?" << st->isEmpty();
    cout << "Is it full?" << st->isFull();

    cout << st->pop();

    cout << st->push(5) << endl;
    cout << st->push(3) << endl;
    cout << st->push(9) << endl;
    st->display();

    cout << st->pop() << endl;
    st->display();

    cout << st->push(6) << endl;
    cout << st->push(8) << endl;
    st->display();

    cout << st->pop() << endl;
    cout << st->pop() << endl;
    st->display();

    cout << "Top Element:" << st->top();

    cout<<"-----------------------"<<endl;

    st = s_linkedlist;

    cout << "Is it empty?" << st->isEmpty();

    cout << "Is it full?" << st->isFull();

    cout << st->pop();

    cout << st->push(5) << endl;
    cout << st->push(3) << endl;
    cout << st->push(9) << endl;
    st->display();

    cout << st->pop() << endl;
    st->display();

    cout << st->push(6) << endl;
    cout << st->push(8) << endl;
    st->display();

    cout << st->pop() << endl;
    cout << st->pop() << endl;
    st->display();

    cout << "Top Element:" << st->top();
}