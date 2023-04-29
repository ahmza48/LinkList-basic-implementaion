#ifndef LinkedList_h
#define LinkedList_h
#include "Node.h"

class LinkedList {
private:
	Node* head;
public:
	LinkedList();
	void insertNode(int);
	void printList();
	void deleteNode(int);
};

#endif // !LinkedList
