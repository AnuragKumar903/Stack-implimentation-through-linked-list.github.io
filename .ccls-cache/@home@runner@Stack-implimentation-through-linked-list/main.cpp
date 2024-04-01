#include <iostream>

class Node{
public:
  int data;
  Node* curr;
  Node* next;
  Node* prev;

  public:
  Node(int data){
    this->data = data;
    this->curr = NULL;
    this->next = NULL;
    this->prev = NULL;
  }
  
};
class Stack : public Node{
  public:
    int* arr;
    int size;
    int top;
  public:
    Stack(int size){
      this->size = size;
      arr = new int[size];
      top = -1;
    }

    void push(int element){
      if(size - top > 1){
        top++;
        arr[top] = element;
      }
      else{
        cout<<"stack overflow";
      }
    }

    void pop(){
      if(top > -1){
        top--;
      }
      else{
        cout<<"stack uderflow";
      }
    }

    int peek(){
      if(top > -1){
        return arr[top];
      }
      else{
        cout<<"stack is empty";
        return -1;
      }
    }

    bool isEmpty(){
      if(top == -1){
        return true;
      }
      else{
        return false;
      }
    }

};


int main() {
  
}