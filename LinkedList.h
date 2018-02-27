#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
using namespace std;

class LinkedList
{
    private:   
        Node* list;
        Node* createNode();
        Node* searchLocation(int);
    public:
        LinkedList();
        ~LinkedList();
        void insertNode();
        void deleteNode(int);
        void printList();
        Node* searchNode(int = -1);
};

#endif
