//
// Created by Lisa Dion on 1/25/19.
//

#ifndef NODEA_STACK_H
#define NODEA_STACK_H
#include <iostream>
#include "Node.h"
#include <string>
using namespace std;
/*
 * Stack class
 * Uses Node class with links pointing down the Stack
 * We will keep track of which Node is at the top of the Stack
 */

template<typename Object>
class Stack {
private:
    // Store a pointer to where the top Node is located
    Node<Object> *top;

public:
    // Default Constructor
    Stack() {
        // Create a ghost Node at the bottom of the Stack
        top = new Node<Object>(Object());
    }

    // Deconstructor / Destructor
    // This will automatically be called when the object
    // is deleted
    ~Stack() {
        // Call pop() until the Stack is empty
        while (top->getNext() != nullptr) {
            // There is still a Node on the Stack
            pop();
        }
        // Manually delete the ghost Node
        delete top;
        top = nullptr;
    }

    // Input an Object to be added to the Stack
    void push(Object item) {
        // Create a Node in heap memory so that it exists
        // outside this method. Have top point to the Node.
        // The * dereferences the pointer (goes to the
        // memory address the pointer stores).
        top = new Node<Object>(item, *top);
    }

    // TODO: Need to deallocate all of the Nodes from the Stack

    Object pop() {
        // Make sure we do not pop off the ghost Node
        if (top->getNext() == nullptr) {
            // There is nothing to pop.
            // TODO: refine this
            return Object();
        }
        Node<Object> *temp = top;
        // Update top to point to its next Node
        top = top->getNext();
        // Delete/deallocate the Node being popped
        Object returnVal = temp->getItem();
        // This deallocates the heap memory that the pointer
        // references
        delete temp;
        // Make sure the pointer is not storing a stale address
        temp = nullptr;
        // Return the Object that was stored in the Node
        return returnVal;
    }
    void findNode(string thing){
        cout<<"Here"<<thing<<endl;
        for(var i = 0;)
    }
};

#endif //NODEA_STACK_H


