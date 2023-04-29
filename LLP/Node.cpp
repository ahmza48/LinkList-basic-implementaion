#include "Node.h"
#include <iostream>
using namespace std;

Node::Node() {
	this->data = 0;
	this->next = nullptr;
}
Node::Node(int nodeData) {
	this->data = nodeData;
	this->next = nullptr;
}