#include<iostream>

using namespace std;

class ListNode {
public:

	int val;
	ListNode* next;

	ListNode(int val) {
		this->val = val;
		this->next = NULL;
	}

};

class forward_list {

	ListNode* head;
	int  count;

	public : 

		forward_list() {
			
		}

		void push_front(int val) {
		
		}

		void pop_front() {
			
		}

		int size() {
		
		}

		bool empty() {
		
		}

		int front() {
		
		}

		void traverse() {
		
		}

};

int main() {

	forward_list fw;

	fw.push_front(50);
	fw.push_front(40);
	fw.push_front(30);
	fw.push_front(20);
	fw.push_front(10);

	cout <<  "head->val : " << fw.front() << endl;

	fw.traverse();

	cout << "size : " << fw.size() << endl;

	fw.pop_front();
	fw.pop_front();

	cout <<  "head->val : " << fw.front() << endl;

	fw.traverse();

	cout << "size : " << fw.size() << endl;

	fw.pop_front();
	fw.pop_front();
	fw.pop_front();

	fw.empty() ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}


