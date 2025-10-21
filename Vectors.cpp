#include <iostream>
#include <vector>  // Include header

using namespace std;

int main() {
    vector<int> myVector;  

    // Add elements 
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    cout << "Original vector: ";
    // Access and print elements: range-based for loop
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    // Change element
    myVector[1] = 40;

    cout << "Modified vector: ";
    // Print elements: iterative for loop
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Remove last element
    myVector.pop_back();

    cout << "Vector after removing last element: ";
    // Print elements: at() method
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector.at(i) << " ";
    }
    cout << endl;

    return 0;
}
