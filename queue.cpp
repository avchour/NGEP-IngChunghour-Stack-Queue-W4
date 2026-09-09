#include <iostream>
using namespace std;

struct Node {
    int data = 0;
    Node* next = ___;
};

struct Queue {
    Node* head = ___;
    Node* tail = ___;
};

void enqueue(Queue& queue, int value) {
    //implementation of enqueue function here
}

void dequeue(Queue& queue) {
    //implementation of dequeue function here
}

int peek(Queue& queue) {
    //implementation of peek function here
}

bool isEmpty(Queue& queue) {
    //implementation of isEmpty function here
}

int main() {
    Queue queue;

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);

    cout << "Front: " << peek(queue) << endl;

    dequeue(queue);

    cout << "Front after dequeue: " << peek(queue) << endl;

    return 0;
}