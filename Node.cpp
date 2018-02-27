#include <iostream>
#include "Node.h"

using namespace std;

Node::Node()
{
    cout << "Student's First Name: ";
    cin >> firstName;
    cout << "Student's Last Name: ";
    cin >> lastName;
    cout << "Student's ID: ";
    cin >> idNumber;
}

void Node::printNode()
{
    cout << "ID: " << idNumber << ", First Name: " << firstName << ", Last Name: " << lastName << endl;
}
