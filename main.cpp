#include <iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;

public:
  Node(int data){
    this->data = data;
    this->next = nullptr;
  }
};

class Stack: public Node{
public:
  int size;
  Node* top;
public:
  Stack(int data) : Node(data){
    this->size = data;
    this->top = nullptr;
  }

  void push(int data){
    if(top == nullptr){
      top = new Node(data);
    }  
    else{
      Node* newNode = new Node(data);
      newNode->next = top;
      top = newNode;
    }
  }

  void pop(){
    if(top == nullptr){
      cout<<"Stack is empty"<<endl;
      return;
    }
    else{
      Node* temp = top;
      top = top->next;
      delete temp;
    }
  }

  int peek() const{
    if(top == nullptr){
      cout<<"Stack is empty"<<endl;
    }  
    return top->data;
  }

  bool isEmpty(){
    if(top == nullptr){
      return true;
    }
    else{
      return false;
    }
  }
  
};

int main() {
  Stack myStack(5); // Create a stack with a maximum size of 5
  myStack.push(42);
  myStack.push(17);
  cout << "Top element: " << myStack.peek() << endl;
  myStack.pop();
  
}