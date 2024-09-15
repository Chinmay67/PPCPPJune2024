#include<iostream>

using namespace std;

class ListNode {

public :

	int val;
	ListNode* next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}

};


void insertAtHead(ListNode*& head, int val) {

	ListNode* n = new ListNode(val);
	n->next = head;
	head = n;

}

void printLinkedList(ListNode* head) {

	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}

	cout << endl;
}

void deleteAtHead(ListNode*& head) {

	if (!head) { // head == NULL
		// linkedList is empty
		return;
	}

	ListNode* temp = head;
	head = head->next;
	delete temp;
}

ListNode* getNode(ListNode* temp, int j) {

	int k = 1;

	while (temp != NULL and k <= j) {
		temp = temp->next;
		k++;
	}

	return temp; // temp is pointing to the node at index j i.e. i-1

}

// time : O(n)

void deleteAtIndex(ListNode*& head, int i) {

	if (i == 0) {
		deleteAtHead(head);
		return;
	}

	ListNode* prev = getNode(head, i - 1); // linear
	if (prev == NULL) {
		// i > n i.e. i is invalid
		return;
	}
	ListNode* cur = prev->next; // getNode(head, i)
	if (cur ==  NULL) {
		// i >= n i.e. i is invalid
		return;
	}
	prev->next = cur->next;
	delete cur;

}

int main() {

	ListNode* head = NULL; // initially, linkedList is empty

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	deleteAtIndex(head, 2);

	printLinkedList(head);

	return 0;
}