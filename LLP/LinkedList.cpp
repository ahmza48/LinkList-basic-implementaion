#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList()
{
	head = nullptr;
}
//LinkedList();
void LinkedList::insertNode(int nodeData) 
{
	Node* newNode = new Node;
	newNode->data = nodeData;
	//if it is first node then pointing head node to itself because it is first Node
	//if there is no node in list then head is currentlty null.
	if (head == nullptr) 
	{
		head = newNode;
		return;
	}
	//if there is/are some node(s) in list then traversing the list till the end
	
	Node * temp;
	temp = head;	//point temp to where head is pointing that is start of list

	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->next = nullptr;

}
void LinkedList::printList() 
{
	Node* temp;
	temp = head;
	if (head == nullptr)
	{
		cout << "List is Empty!!!" << endl;
		return;
	}
	while (temp != nullptr)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	//cout << temp->data << " ";

}

void LinkedList::deleteNode(int index) 
{
	Node * temp;
	temp = head;
	int listLength=0;
	if (head==nullptr)
	{
		cout << "List is Empty\n";
		return;
	}
	while(temp != nullptr) 
	{
		temp= temp->next;
		listLength += 1;
	}
	// Check if the position to be
	// deleted is less than the length
	// of the linked list.
	if (listLength < index) 
	{
		cout << "Index out of range"<< endl;
		return;
	}
	if (index==0)
	{
		Node * temp = head;
		head = head->next;
		delete temp;
		return;
	}
	int checkIndex=0;

	Node * current = head;
	Node * tempX = head;

	while (checkIndex!=index)
	{
		tempX = current->next;
		current->next = current->next->next;
		//tempY = tempY->next;
		checkIndex++;
	}
	delete tempX;
	//Node * tempY = tempX->next;
	//delete tempX;


}












