#include <bits/stdc++.h>
using namespace std;
class Node {
   public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};




Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newnode = new Node(data);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}


Node *reverseLinkedList(Node *head) {
    // Write your code here
    Node *previous=NULL;
    Node* following=head;
    Node*current=head;
    while(current!=NULL)
    {
        if(following!=NULL)
        {
            
        
        following=current->next;
        current->next=previous;
        previous=current;
        current=following;
        }
        
    }
    return previous;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        Node *head = takeinput();
        head = reverseLinkedList(head);
        print(head);
    }

    return 0;
    
    
    
}

/*
Input 
First line coantians the test case 
Second line coantaisn the node to be inverted terminated by -1
Sample Input
1
1 2 3 4 5 6 7 8 9 -1
Output
1
1 2 3 4 5 6 7 8 9 -1

*/
