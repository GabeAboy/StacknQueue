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
    stack1.push("Hello, World!");
    stack1.push("brackets");
    stack1.push("<>{}[]");
    stack1.push("rackets");
    stack1.push("ackets");
    stack1.findNode("ackets");
    cout << stack1.pop() << endl;
    cout << stack1.pop() << endl;
    cout << stack1.pop() << endl;
    cout << stack1.pop() << endl;
    cout << stack1.pop() << endl;
    cout << stack1.pop() << endl;

    return 0;
}
