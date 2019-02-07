#include "Node.h"
#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
//    Node<string> node1("Hello");
//    cout << node1.getItem() << endl;
//    cout << node1.getNext() << endl;
//
//    Node<string> node2("World", node1);
//    cout << node2.getItem() << endl;
//    cout << node2.getNext()->getItem() << endl;

    Stack<string> stack1;
    stack1.push("Hello, World!");//0
    stack1.push("brackets");//1
    stack1.push("<>{}[]");//2
    stack1.push("rackets");//3
    stack1.push("ackets");//4
    stack1.getSize();
    stack1.getSize();
    cout << "can we find ackets? " <<stack1.findNode("ackets") <<endl;
    cout << stack1.pop() << endl;
    cout << "can we find ackets after pop? " <<stack1.findNode("ackets") <<endl;
    cout << "can we find Hello, World!? " <<stack1.findNode("Hello, World!") <<endl;
//    cout << stack1.pop() << endl;
//    cout << stack1.pop() << endl;
//    cout << stack1.pop() << endl;
//    cout << stack1.pop() << endl;
//    stack1.findNode("ackets");

    stack1.getSize();
//    cout << stack1.pop() << endl;

    return 0;
}
