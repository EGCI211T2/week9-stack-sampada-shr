
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
    new_node->set_next(top);
    top = new_node;
    size++;

            // link to the previous top
            //change the top
            //increase the size
   }
 
         // Left missing for exercises…
    
}

int Stack::pop(){
    if (top==NULL){
        cout<<"stack is empty."<<endl;
        return 1;
    }
        NodePtr t=top;
        int value;
        value=t->get_value();
    // Left missing part for exercises
    top= top->get_next();
    size --;
        delete t;
        return value;
	//be careful of the empty stack!!!
    }

Stack::Stack(){
    top=NULL;
    size=0;
    
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    while (top != NULL) {
            pop();
    }    
}


#endif
