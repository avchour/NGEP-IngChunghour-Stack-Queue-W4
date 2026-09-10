#include <iostream>
using namespace std;

struct Node {
    int data = 0;
    Node* next = nullptr;
};

void push(Node*& head, int value) {

    //Implementation of push function here
    Node* newNode = new Node{value};
    newNode->next = head ;// yok ktuy tv dak lek kbal
    head = newNode ; // dak kbal
}

void pop(Node*& head) {

    //Implementation of pop function here
    if ( head == nullptr){
        std::cout<<"Stack is Empty";
        return ;
    }
    Node *temp = head;
    head = head ->next ;
    delete temp;
}

int top(Node* head) {
    //Implementation of top function here
   if ( head == nullptr){
        std::cout<<"Stack is Empty";
        return -1 ;
    }
    return head->data;
}

bool isEmpty(Node* head) {
    //Implementation of isEmpty function here]
        return  head == nullptr;
}

int main() {
    Node* stack = nullptr;

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    cout << "Top: " << top(stack) << endl;

    pop(stack);

    cout << "Top after pop: " << top(stack) << endl;

    return 0;
}