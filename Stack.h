#pragma once
#include <iostream>
#include "LinkedList.h"
#include "StackExceptions.h"

using namespace std;

template <class T>
class Stack
{
 public:
  Stack();
  ~Stack();
  
  void push(const T& elem);
  void pop(T& elem);
  void top(T& elem);

  bool isEmpty();
  int size();
  void print();
 private:
  LinkedList <T> list;
};

//ctor
template <class T>
Stack <T> :: Stack()
{
  //does anything need to happen here?
  

}

//dtor
template <class T>
Stack <T> :: ~Stack()
{


}

//push
template <class T>
void Stack <T> :: push(const T& elem)
{
  //insert element at front of linked list
  list.insert(elem);
}

//pop
template <class T>
void Stack <T> :: pop(T& elem)
{
  if(list.isEmpty()){
    StackUnderflowException error;
    throw error;
  }
  else{
    list.removeFromFront(elem);
  }
}

//top
template <class T>
void Stack <T> :: top(T& elem)
{
  //set elem equal to list head if it exists
  if(!list.isEmpty()){
     //return the top element of stack
    elem = list[0];
  }
  else{
    StackUnderflowException error;
    throw error;
  }
}

//isEmpty
template <class T>
bool Stack <T> :: isEmpty()
{
  bool retVal = false;
  
  retVal = list.isEmpty();

  return retVal;

}

//size
template <class T>
int Stack <T> :: size()
{
  int size;

  size = list.size();

  return size;

}

//print
template <class T>
void Stack <T> :: print()
{
  //print contents of list
  list.print();
}
