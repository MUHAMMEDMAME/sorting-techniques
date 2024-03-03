/*#include<iostream>
#include<vector>
using namespace std;
class Node {
public:
	int data;
	Node* next;
}*first;
class LinkedList {

public:
	LinkedList();
	LinkedList(vector <int> &A);

	void Display();
	void RDisplay(Node* p);
	void InsertingSort(Node *p);

};
LinkedList::LinkedList() {
	first = NULL;
}
LinkedList::LinkedList(vector <int>& A)
{
	first = new Node;
	Node* t, * last;
	first->data = A[0];
	first->next = NULL;
	last = first;
	for (int i = 1;i < A.size();i++) {
		t = new Node;
		t->data = A[i];
		last->next = t;
		t->next = NULL;
		last = t;
	}
}
void LinkedList::Display() {
	Node* p = first;
	while (p != NULL) {
		cout << p->data << " ";
		p = p->next;
	}

}

void LinkedList::RDisplay(Node* p) {

	if (p != NULL) {
		cout << p->data << " ";
		RDisplay(p->next);
	}
}
void LinkedList::InsertingSort(Node* p) {
	if (!p || !p->next)
		return; // No need to sort if the list is empty or has only one element

	for (int i = 0; i < 4; i++) { // Assuming you want to sort the list 4 times
		Node* current = p;
		Node* nextNode = nullptr;
		int temp;

		while (current->next) {
			nextNode = current->next;
			while (nextNode) {
				if (current->data > nextNode->data) {
					// Swap data
					temp = current->data;
					current->data = nextNode->data;
					nextNode->data = temp;
				}
				nextNode = nextNode->next;
			}
			current = current->next;
		}
	}
}

int main() {
	vector<int> A= { 8,5,7,3,2 };

	LinkedList l(A);
	l.RDisplay(first);
	cout << endl;
	l.InsertingSort(first);
	l.Display();
}
*/