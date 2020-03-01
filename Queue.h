// Created by Peter Menchu on 2/29/20.
//
#ifndef CPP_QUEUE_QUEUE_H
#define CPP_QUEUE_QUEUE_H
#include <iostream>
using namespace std;

class Queue {
    private:
        // might change first to in-use bool
        int firstNode;
        int lastNode;
        int queueArray[100];

    public:
        Queue();
        void enqueue(int data);
        void printQueue();
};


#endif //CPP_QUEUE_QUEUE_H
