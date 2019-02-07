//
// Created by gabea on 2/7/2019.
//

#ifndef STACKNQUEUE_QUEUE_H
#define STACKNQUEUE_QUEUE_H
#include <iostream>
#include "Node.h"
#include <string>
#include <winnt.h>

using namespace std;
template<typename Object>
class Queue{
    private:
        Node<Object> *front;
        Node<Object> *tail;
        int size = 0;
    public:
    // Default Constructor
        Queue() {
        // Create a ghost Node at the bottom of the Stack
            front = new Node<Object>(Object());
            tail = new Node<Object>(Object());
        }
        void push(Object data){
//             new Node<Object>(data, *front);
            Node<Object> *ptr = new Node<Object>(data);
            if(size==0){
                front=ptr;
                tail=ptr;
                size++;
            } else{
                tail->setNext(*ptr);
                tail=ptr;
                size++;
            }
        }
        void pop(){
            if(size==0){
                cout<<"Queue is empty"<<endl;
            } else {
                if (front == tail){
                    // Should return object not pointer
                    Node<Object> temp = *front;

                    delete(front);
                    //TODO Deconstruct everything
                    cout<<"I just popped "<<temp.getItem()<<endl;
                    Node<Object> *defaultNode =new Node<Object>(Object());
                    front = defaultNode;
                    tail = defaultNode;
                    size--;
                } else{
                    // Memory dereference case
                    Node<Object> *ptr = front;
                    // Return case
                    Node<Object> popNode = *front;
                    cout << "I popped " <<popNode.getItem()<<endl;
                    front = front->getNext();
                    delete(ptr);
                    size--;

                }
            }
        }
        void printQueue(){

        if(size==0){
            cout << "Queue is empty, points to null ptr" << endl;
        } else{
            Node<Object> *tempTop = front;
            for(int i = 0; i < size; i++ ){
               cout <<"ITEM "<< tempTop->getItem()  << endl;
               if(tempTop->getNext()!= nullptr){
                   tempTop=tempTop->getNext();
               }
            }
        }
    }

    // Deconstructor / Destructor
    // This will automatically be called when the object
    // is deleted

};
#endif //STACKNQUEUE_QUEUE_H
