//
// Created by Peter Menchu on 2/29/20.
//

#include "Queue.h"

Queue::Queue() {
    // init to -1 instead of 0 when empty since 0 is an index
    firstNode = -1;
    lastNode = -1;
}

void Queue::enqueue(int data) {
    // might change to bool
    if(firstNode == -1){
        firstNode++;
    }
    queue[++lastNode] = value;
}
