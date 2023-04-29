#include <iostream>
using namespace std;
#include "Node.h"
#include "LinkedList.h"


int main() 
{
	LinkedList list;

	// Inserting nodes
	list.insertNode(1);
	list.insertNode(2);
	list.insertNode(3);
	list.insertNode(4);

	cout << "Elements of the list are: ";

	// Print the list
	list.printList();
	cout << endl;

	// Delete node at position 2.
	list.deleteNode(2);

	cout << "Elements of the list are: ";
	list.printList();
	cout << endl;
	return 0;


	return 0;
}