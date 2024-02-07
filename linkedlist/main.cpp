/*
* A simple program to illustrate Linked List Operations
*/

#include <iostream>

using namespace std;

/*
* The simplest structure, that holds an int and a next pointer
*/
struct Node {
    int value;
    Node * next;
};

class LinkedList {
    private:
        Node * head;
    public:

        // A Default Constructor
        LinkedList() {
            head = nullptr;
        }

        /*
        * Helper function
        * Returns a pointer to a node in the list
        */
        Node * findByValue(int val) {
            Node *temp = head;
            while (temp != nullptr && temp->value != val) {
                temp = temp->next;
            }
            return temp;
        }

        /*
        * Helper function
        * Displays the list
        */
        void display() {
            // This is the most basic way to iterate a linked list
            // Compare it with how you might iterate an array!
            cout << "The list: " << endl;
            Node *temp = head;
            while (temp != nullptr) {
                cout << temp->value << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        void insert(Node * prev_node, int new_value) {
            // First create space on the heap for the new_value
            Node * new_node = new Node {new_value, nullptr}; // A short-hand notation

            // Before everything else, check if we are inserting the first element
            if (head == nullptr) {
                // TODO
            }

            // 1. Scenario 1 - Insert at the beginning
            if (prev_node == nullptr) {
                // TODO
            }

            // 2. Scenario 2 - Insert somewhere in the middle
            else {
                // TODO
            }
        }

        void del(Node * node) {
            if (node == nullptr || head == nullptr) {
                return;
            }

            // Scenario 1 - Are we deleting the first element?
            if (node == head) {
                // TODO
            }

            // Scenario 2 - Maybe an element somewhere else..
            else {
                // TODO
            }

            delete node;
        }
};

int main() {
    LinkedList list;

    // Insertion
    list.insert(nullptr, 1);
    list.display();
    list.insert(nullptr, 0);
    list.display();
    list.insert(list.findByValue(1), 3);
    list.display();

    list.insert(list.findByValue(1), 2);
    list.display();

    list.insert(nullptr, -1);
    list.display();

    list.insert(list.findByValue(3), 4);
    list.display();

    // Deletion
    list.del(list.findByValue(3));
    list.display();

    list.del(list.findByValue(0));
    list.display();

    list.del(list.findByValue(-1));
    list.display();

    return 0;
}