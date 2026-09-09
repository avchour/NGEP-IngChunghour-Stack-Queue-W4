#include <iostream>
using namespace std;

struct Node {
    int data = 0;
    Node* next = ___;
};

void push(Node*& head, int value) {

    //Implementation of push function here

}

void pop(Node*& head) {

    //Implementation of pop function here

}

int top(Node* head) {
    //Implementation of top function here
}

bool isEmpty(Node* head) {
    //Implementation of isEmpty function here
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