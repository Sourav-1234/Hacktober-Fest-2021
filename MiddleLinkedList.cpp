#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};




Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}
Node *midPoint(Node *head)
{
    // Write your code here
    if(head==NULL)
        return NULL;
    Node *slow=head;
    Node *fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        
    }
    return slow;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
		cout << endl;
	}
	return 0;
  }
  
  /* Input 
  
  First line of input contains only test cases .
  Second line input contains the input to the linked list teminated by -1 
  
  Sample Input :
  1
1 2 3 4 5 6 7 -1

Sample Ouput: 
4
  */
  
  
  
  
