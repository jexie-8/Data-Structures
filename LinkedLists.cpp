#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
    }
};

class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }

    void insertBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void insertAt(int index, int data) {
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        Node* newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void insertLast(int data) {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        Node* newNode = new Node(data);
        temp->next = newNode;
        newNode->next = NULL;
    }

    void Traverse() {
        cout << "Printing Linked List:\n";
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void deleteFirst() {
        Node* temp = head;
        head = temp->next;
    }

    void deleteAt(int index) {
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;
    }

    void deleteLast() {
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        temp->next = NULL;
    }
};

int main() {
    LinkedList llist;
    llist.insertBeginning(10);
    llist.insertBeginning(20);
    llist.insertBeginning(30);
    llist.insertBeginning(40);
    llist.Traverse();

    llist.insertAt(1, 2);
    llist.Traverse();

    llist.insertAt(3, 1);
    llist.Traverse();

    llist.insertLast(900);
    llist.Traverse();

    llist.deleteFirst();
    llist.Traverse();

    llist.deleteAt(2);
    llist.Traverse();

    llist.deleteLast();
    llist.Traverse();
}
