#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* reverse(Node* head)
{

    //// here we are taking three var;
    Node* prev=NULL;//this will show the previous of the nodes which in reverse will become the next
    Node* curr=head;///this will be the current node in which it is iterating
    Node* nextptr;///prev for the answer

    while(curr!=NULL)/////. to the end of the linked list
    {
        nextptr=curr->next;///to give the adress without this it would not be able to find the next
        curr->next=prev;/// here we are changing the links in reverse order

        prev=curr;///and further exploding this by transferring the valuess of each by inc;
        curr=nextptr;///same here for the curr one !!

    }
    return prev;
}


Node* reverserr(Node* head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    Node* newhead = reverserr(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;

}

void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


int main(){
 
/* Code here  */
Node*head;
Node *second;
Node* third;

head= new Node();
second=new Node();
third= new Node();

head->data=10;
head->next=second;

second->data=20;
second->next=third;

third->data=30;
third->next=NULL;

Node* newhead = reverserr(head);//// here we have created a new head for the reverse link as it would have a new head after the reversing
display(newhead);///10 20 30 -> 30 20 10 

return 0;
}


