#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList* list;
int menu()
{
    int response = 0;
    
    cout << "Menu:" << endl;
    cout << "1. Add a student to the list" << endl;
    cout << "2. Delete a student from the list" << endl;
    cout << "3. Print the list" << endl;
    cout << "4. Search for a student in the list" << endl;
    cout << "5. Quit the program" << endl;
    cout << "Please input the option you would like: ";
    cin >> response;
    cout << "---------------------------------------" << endl;
    return response;
}
bool validateInput(int response)
/* returns a bool determining if the program should quit or not, 
 * true if the program should quit
*/
{
    bool quit = false;
    if(response >= 1 && response <= 5)
    {
        switch(response)
        {
            case 1:
            {
                cout << string(100, '\n');
                list->insertNode();//creates a node and inserts it
                //cout << "list : ";
                //printList(list);
                //cout << "node : ";
                //printList(ins);
                break;
            }
            case 2:
            {
                int deleteId = 0;
                cout << "Which student id would you like to delete? : ";
                cin >> deleteId;
                cout << string(100, '\n');
                list->deleteNode(deleteId);
                break;
            }
            case 3:
            {
                cout << string(100, '\n');
                list->printList();
                break;
            }
            case 4:
            {
                int searchId = 0;
                cout << "Which student id would you like to search for? : ";
                cin >> searchId;
                cout << string(100, '\n');
                list->searchNode(searchId);
                break;
            }
            case 5:
            {
                cout << "Quitting";
                quit = true;
                break;
            }
            
        }//end switch
    }
    else
        cout << string(100, '\n') << "Please enter a valid integer" << endl << endl;
      return quit;          
}
int main()
{
    list = new LinkedList();
    cout << string(100, '\n');
    bool quit = false;
    while(!quit)
    {
     quit = validateInput(menu());//menu asks for which option, which returns the choice into validateInput, which returns if the program should quit
    }
    return 0;
}
