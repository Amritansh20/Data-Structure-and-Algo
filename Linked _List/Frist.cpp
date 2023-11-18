#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
}

void insertAtEnd(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPos(Node* &head,int position, int data){
    Node* temp =head;
    int cnt =1;

    while(cnt<position-1){
        
        temp = temp->next;
        cnt++;
    }

    //creating new node to be inserted
    Node* nodeToInsert =  new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
    cout << temp->data << " ";
    temp = temp->next;
 } cout << endl;
}



int main(){
    //creating a node
    Node* node1 = new Node(10);

   //assigning head
   Node* head = node1;
   Node* tail = node1;
   print(head);

  

   insertAtEnd(tail,15);
   insertAtEnd(tail,20);
   print(head);
   insertAtHead(head,5);
   insertAtPos(head,3,12);
   print(head);

}