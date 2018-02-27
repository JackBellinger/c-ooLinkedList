#ifndef NODE_H
#define NODE_H

using namespace std;

class Node
{
    friend class LinkedList;
    private:
        char firstName[20];
        char lastName[20];
        int idNumber;
        
        Node* next;
    public:
        Node();
        void printNode();


};

#endif
