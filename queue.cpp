#include <iostream>
using namespace std;

struct Node {
    int data = 0;
    Node* next = nullptr;
};

struct Queue {
    Node* head = nullptr;
    Node* tail = nullptr;
};

void enqueue(Queue& queue, int value) {
    //implementation of enqueue function here
    Node * newNode = new Node{value};
    if (queue.tail == nullptr) {
        queue.head = newNode;
        queue.tail = newNode;
    }
    else {
        queue.tail->next = newNode ;
        queue.tail = newNode;
    }
}

void dequeue(Queue& queue) {
    //implementation of dequeue function here
    if (queue.head == nullptr) {
        return ;
    }
    Node *temp = queue.head;
    queue.head = queue.head->next;
    if (queue.head == nullptr)
    {
        queue.tail = nullptr ;
    }
    delete temp;
}

int peek(Queue& queue) {
    //implementation of peek function here
    if (queue.head == nullptr){
        std::cout <<" Queue is empty" ;
    }
    return queue.head->data ;
}

bool isEmpty(Queue& queue) {
    //implementation of isEmpty function here
    return queue.head == nullptr ;

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