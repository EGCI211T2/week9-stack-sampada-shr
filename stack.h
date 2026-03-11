
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    int get_size(){return size;}
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
    new_node->set_next(top);
    top = new_node;
    size++;
   }    
   else {
    top= new_node; new_node->set_next(NULL); size++;
   }
}

int Stack::pop(){
    if (top==NULL){
        cout<<"stack is empty."<<endl;
        return 1;
    }
        NodePtr t=top;
        int value;
        value=t->get_value();

    top= top->get_next();
    size --;
        delete t;
        return value;
    }

Stack::Stack(){
    top=NULL;
    size=0;
    
}
Stack::~Stack(){
    while (top != NULL) {
            pop();
    }    
}


#endif
