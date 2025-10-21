#include <iostream>
#include <queue>  // Include header

using namespace std;

int main() {
    queue<int> myQueue; 

    // Push operation
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    cout << "Queue elements: ";

    // Print all elements 
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();  // Remove front element 
    }
    cout << endl;

    cout << "Is queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    myQueue.push(40);  // Add element
    cout << "Front element: " << myQueue.front() << endl;
    cout << "Back element: " << myQueue.back() << endl;
    cout << "Queue size: " << myQueue.size() << endl;

    return 0;
}
