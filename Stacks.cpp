#include <iostream>
#include <stack>  // Include header

using namespace std;

int main() {
    stack<int> myStack;  

    // Push operations
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Stack elements: ";

    // Print all elements 
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();  // Remove top element 
    }
    cout << endl;

    cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;

    myStack.push(40);  // Add element
    cout << "Top element: " << myStack.top() << endl;
    cout << "Stack size: " << myStack.size() << endl;

    return 0;
}
