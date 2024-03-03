/*
#include<iostream>
#include <vector>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};

class HashTable {
private:
	Node** hash;
public:
	HashTable() {
		hash = new Node*[10];
		for (int i = 0;i < 10;i++)
			hash[i] = NULL;
	}
	int hashMode(int key);
	Node* search(int key);
	void Insert(int key);
};
int HashTable::hashMode(int key) {
	return key % 10;
}

void HashTable::Insert(int key) {
	int hashIndex = hashMode(key);
	Node* t = new Node;
	t->data = key;
	t->next = NULL;
	if (hash[hashIndex] == NULL)
		hash[hashIndex] = t;
	else {

	Node* p = hash[hashIndex];
	Node* q = hash[hashIndex];

	while (p && p->data < key) {
		q = p;
		p = p->next;
	}
	if (q == hash[hashIndex])
	{
		t->next = q;
		hash[hashIndex] = t;
	}
	else
	{
		q->next = t;
		

	}

	}

}

Node* HashTable::search(int key) {
	int searchIndex = hashMode(key);
	Node* p = hash[searchIndex];
	while (p) {
		if (p->data == key)
			return p;
		p = p->next;
	}
	return NULL;
}
int main() {
	vector<int>keys = { 16,12,25,39,6,122,5,68,75 };
	HashTable h;
	for (int i = 0;i < keys.size();i++)
		h.Insert(keys[i]);

	Node* search = h.search(1);
	if (search)
		cout << "number is found:" << search->data;
	else
		cout << "Number isn't found\n";
}
*/