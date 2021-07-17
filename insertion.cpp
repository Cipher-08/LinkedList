#include <iostream>
using namespace std;

// here we are going to create a class of named node in which the following nodes form a linked list

class Node
{
public:
    int data;
    Node *next; //here we have created a next data to be transferred so it is of the data type node
};

void insertionAtHead(Node **head, int new_value) //here we are taking the pointer of pointer for the head term and a new value which would be taken by the first node
{
    Node *new_user = new Node(); ///created a new_user of Node class and stored it in a heap
    new_user->data = new_value;  ///assigning the value
    new_user->next = *head;      //// assigning the adress for the next value
    *head = new_user;            ////now the head is the new_user
}

void insertAfter(Node *prev_node, int new_data)
{
    if (prev_node == NULL) ////if previous node next step is Null then its the last of the list which is not possible in this case
    {
        cout << "Previous node cannot be 0";
        return;
    }
    Node *new_user = new Node();      ////creating a new Node
    new_user->data = new_data;        ///assigning the data to the new_user
    new_user->next = prev_node->next; ////the next location for the new_user would be the next whcih was of the prev node
    prev_node->next = new_user;       ///now the next for the previous would be the new_user
}

void InsertionAtLast(Node **head, int new_value)
{
    Node *new_user = new Node(); ///created new user
    Node *last = *head;          ////created last as we can not utter direct at the last so we have to go through the head until the NULL comes

    new_user->data = new_value; ///assigning value
    new_user->next = NULL;      ////as it would be the last or going to be

    if (*head == NULL) ///if the list is empty so its last would be ita head
    {
        *head = new_user;
        return;
    }

    while (last->next != NULL) //now we iterate to the last value
    {
        last = last->next;
    }
    last->next = new_user; ////as we find the last value we assign the next value to the new user
}

void deletionANode(Node* &head, int val){
    Node*temp =head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
}

    //now we are going to make a fucntion for the input






    void printInfo(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << endl;
        n = n->next; ///we have assigned the n value to the next
    }
}

int main()
{
    Node *head;
    Node *second;
    Node *tail;
    //here we have created three nodes which will create a link among them

    // here we have to give them there loc to heap

    head = new Node();
    second = new Node();
    tail = new Node();

    //now we have assigned the memory to heap

    // now we have to give data and to allot the nest value to each node

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = tail;

    tail->data = 30;
    tail->next = NULL; //this NULL denotes that the list is at the end

 
    deletionANode(head, 20);
    printInfo(head);
}
