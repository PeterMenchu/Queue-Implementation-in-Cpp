#include <iostream>
#include "Queue.h"
using namespace std;
int main() {
    Queue q;
    // indicates whether program should end
    bool inUse = true;
    // user menu selection
    int operation = -1;
    // user data for push function
    int data;
    // Run stack functionality until user exits or enters invalid input.
    cout << "Select stack operation by entering the corresponding number:\n";
    cout << "\t1. Enqueue\n";
    cout << "\t2. Dequeue\n";
    cout << "\t3. Print current Queue\n";
    cout << "\t4. Exit\n";
    do {
        cout << "Enter operation number: ";
        // read user selection
        cin >> operation;
        if (operation == 1){ // push
            cout << "Enter an integer to add to the end of the queue: ";
            cin >> data;
            q.enQueue(data);
        } else if (operation == 2){ // pop
            q.deQueue();
        } else if (operation == 3){ // print stack
            q.printQueue();
        } else { // exit
            cout << "Exiting Queue program.\n";
            inUse = false;
        }
    } while (inUse);

    return 0;
}
