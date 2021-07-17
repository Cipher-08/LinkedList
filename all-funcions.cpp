#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node headAdder(Node **head, int data)
{ ////send them through the pointerts otherwise it will only change inside the function

    Node *target;
    target = new Node();
    target->data = data;
    target->next = *head;
    *head = target;

    return *target;
}

void endAdrrer(Node *head, int data)
{
    Node *target;
    target = new Node();

    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = target;

    target->data = data;
    target->next = NULL;
}

void insertion(Node *head, int data, int retd)
{
    Node *target;              //////assigning a node target for
    target = new Node();       /////in dynammic memory
    while (head->data != retd) /////as it becomes same it should be broken
    {
        head = head->next; /////proceeding further
    }
    target->next = head->next; ////the next for the target would be the main targetted next
    target->data = data;

    head->next = target;
}
///10 20 30 40 50

void deletion(Node* head,int tar)
{
    while(head->next->data!=tar)
    {
        head=head->next;
    }
    head->next=head->next->next;
}

void display(Node *head)
{ ///display
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout<<endl;
}

Node* add(Node* head1,Node*head2)
{
  while(head1!=NULL)
  {
      head1->data=head1->data+head2->data;
      head1=head1->next;
      head2=head2->next;
  }
}

void deletewithoutHead(Node* del){
    if (del == NULL)
        return;

    Node *target;
    target = new Node();
    target = del->next;
    del->data = del->next->data;
    del->next = del->next->next;
    free(target);
}


void merging(Node* head1,Node* head2){
    while(head1->next!=NULL){
       head1=head1->next;
    }
    head1->next = head2;

 
}

int main()
{

    Node *head;
    Node *second;
    Node *third;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

  
    Node* head1;
    Node* second1;
    Node* third1;

    head1=new Node();
    second1=new Node();
    third1= new Node();

    head1->data =200;
    head1->next=second1;

    second1->data=300;
    second1->next=third1;

    third1->data=400;
    third1->next=NULL;
    // headAdder(&head1, 10);
    // endAdrrer(head1, 500);
    // endAdrrer(head1, 5000);

    // insertion(head1, NULL, 30);
    // deletion(head1, 5000);
    // deletion(head1, 500);
    

    //    Node* trial ;

    //    trial=new Node();
    //    tria1->next
    merging(head,head1);
   
    display(head);
    return 0;
}
