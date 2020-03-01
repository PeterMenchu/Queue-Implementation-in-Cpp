//
// Created by Peter Menchu on 2/29/20.
//

#include "Queue.h"

Queue::Queue() {
    // init to -1 instead of 0 when empty since 0 is used as an index
    firstNode = -1;
    lastNode = -1;
}

void Queue::enqueue(int data) {
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
        for (int i = lastNode; i >= 0; i--){
            cout << "\t";
            cout << queueArray[i] << endl;
        }
        cout << "\t- First -\n";
    } else {
        cout << "The Queue is empty.\n";
    }
}