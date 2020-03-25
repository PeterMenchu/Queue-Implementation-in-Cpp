//
// Created by Peter Menchu on 2/29/20.
//

#include "Queue.h"

Queue::Queue() {
    // init to -1 instead of 0 when empty since 0 is used as an index
    // these track first and last nodes in array implementation
    firstNode = -1;
    lastNode = -1;
}

void Queue::enQueue(int data) {
    // might change to bool
    if(firstNode == -1){
        firstNode++;
    }
    queueArray[++lastNode] = data;
}

void Queue::printQueue() {
    if (firstNode != -1){
        cout << "Current Queue:\n";
        // print stack from top down
        cout << "\t- Last -\n";
        for (int i = lastNode; i >= firstNode; i--){
            cout << "\t";
            cout << queueArray[i] << endl;
        }
        cout << "\t- First -\n";
    } else {
        cout << "The Queue is empty.\n";
    }
}

void Queue::deQueue() {
    if (firstNode == -1){
        cout << "Queue is empty, no nodes are available for dequeue.\n";
        return;
    } else if (firstNode == lastNode){
        cout << queueArray[firstNode] << " has exited the queue, queue is now empty\n";
        // last node is up for dequeue, set to -1 to indicate empty queue
        firstNode = -1;
        lastNode = -1;
    } else {
        // lose the first node to dequeue
        cout << queueArray[firstNode] << " has exited the queue.\n";
        firstNode++;
    }
}
