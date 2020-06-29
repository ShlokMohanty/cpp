#include<iostream>
using namespace std;
class node{
public:
    int data;
    node * next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
node* midpoint_linkedlist(node *head)
{
   
    if(head == NULL || head->next == NULL)
            return head;
        node *ptr1 = head;  // Will move 1 node frwd
        node *ptr2 = head;  // Will move 2 nodes frwd
        // we don't need to check for ptr1. because ptr2 ahead of ptr1
        while(ptr2->next!= NULL && ptr2->next->next != NULL)
        {
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
        return ptr1;
}
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL,*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL)                  {
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
void print(node *head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
node*head=takeinput();
    node* mid=midpoint_linkedlist(head);
    cout<<mid->data;
    return 0;
    }
