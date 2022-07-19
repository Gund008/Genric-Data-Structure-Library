#include<iostream>
using namespace std;

template<class T>
struct node
{
   T data;
   struct node *next;
   struct node *prev;

};

template<class T>
class DoublyLL
{
  public:
  struct node<T> *head;
  int Count;

  DoublyLL();
  void InsertFirst(T);
  void InsertLast(T);
  void Display();
  int CountNode();
  void DeleteFirst();
  void DeleteLast();
  void InsertAtPos(T);
  void DeleteAtPos(T);


};



template<class T>
DoublyLL<T>::DoublyLL()
{
 head=NULL;
 Count=0;
}

template<class T>
void DoublyLL<T>::InsertFirst(T no)
{
  struct node<T> *newn=NULL;
 newn=new struct node<T>;

newn->data=no;
newn->next=NULL;
newn->prev=NULL;


if(head==NULL)
{
  head=newn;
}
else
{
  newn->next=head;
  head->prev=newn;
  head=newn;
}
Count++;
}

template<class T>
void DoublyLL<T>::InsertLast(T no)
{
  struct node<T> *newn=NULL;
  newn=new struct node<T>;

newn->data=no;
newn->next=NULL;
newn->prev=NULL;


if(head==NULL)
{
  head=newn;
}
else
{
struct node<T>*temp=head;
while(temp->next!=NULL)
{
  temp=temp->next;
}
temp->next=newn;
newn->prev=temp;
}
Count++;
}

template<class T>
void DoublyLL<T>::DeleteFirst()
{
struct node<T>*temp=head;
if(head==NULL)
{
  return;

}
else
{
 head=head->next;
head->prev=NULL;
 delete(temp);
}
Count--;
}

template<class T>
void DoublyLL<T>::DeleteLast()
{
struct node<T>*temp=head;
if(head==NULL)
{
  return;

}
else if(head->next==NULL)
{
 delete head;
 head=NULL;
}
else
{
struct node<T>*temp1=head;
struct node<T>*temp2=NULL;
while(temp1->next->next!=NULL)
{
 temp1=temp1->next;
}
temp2=temp1->next;
temp1->next=NULL;
delete(temp2);
}
Count--;
}

template<class T>
void  DoublyLL<T>::InsertAtPos(T pos)
{
if((head==NULL)||(pos>Count()+1)||(pos<=0))
{
  return ;
}
else if(pos==1)
{
 return(InsertFirst());
}
else if(pos==(Count()+1)
{
 return(InsertLast());
}
else
{
struct node<T>*newn=NULL;
struct node<T>*temp=head;
newn=new NODE<T>;

newn->next=NULL;
newn->prev=NULL;
newn->data=no;

for(int i=1;i<=(pos-2);i++)
{
  temp=temp->next;
}
newn->next=temp->next;
temp->next->prev=newn;
newn->prev=temp;
temp->next=newn;
}
Count++;
}

template<class T>
void SinglyLL<T>::DeleteAtPos(T pos)
{
if((head==NULL)||(pos>Count())||(pos<=0))
{
  return ;
}
else if(pos==1)
{
 return(DeleteFirst());
}
else if(pos==(Count())
{
 return(DeleteLast());
}
else
{
struct node<T>*newn=NULL;
struct node<T>*temp=head;

for(int i=1;i<=(pos-2);i++)
{
  newn=newn->next;
 ++i;
}
temp=newn->next;
newn->next=temp->next;
delete temp;
}
Count--;
}


template<class T>
void DoublyLL<T>::Display()
{
cout<<"elements from linked list are:"<<endl;
struct node<T>*temp=head;
while(temp!=NULL)
{
cout<<temp->data<<"<=>";
temp=temp->next;
}
cout<<endl;
}

template<class T>
int DoublyLL<T>::CountNode()
{
  return Count;
}

int main()
{
  DoublyLL <int>obj1;
  DoublyLL <float>obj2;

obj1.InsertFirst(21);
obj1.InsertFirst(11);
obj1.InsertLast(51);
obj1.InsertLast(101);

obj1.Display();
cout<<"number of nodes are:"<<obj1.CountNode()<<endl;

obj1.DeleteFirst();
obj1.Display();
cout<<"number of nodes are:"<<obj1.CountNode()<<endl;

obj1.DeleteLast();
obj1.Display();
cout<<"number of nodes are:"<<obj1.CountNode()<<endl;

obj1.InsertAtPos(4);
obj1.Display();
cout<<"number of nodes are:"<<obj1.CountNode()<<endl;

obj1.DeleteAtPos(4);
obj1.Display();
cout<<"number of nodes are:"<<obj1.CountNode()<<endl;


obj2.InsertFirst(21);
obj2.InsertFirst(11);
obj2.InsertLast(51);
obj2.InsertLast(101);

obj2.Display();
cout<<"number of nodes are:"<<obj2.CountNode()<<endl;

obj2.DeleteFirst();
obj2.Display();
cout<<"number of nodes are:"<<obj2.CountNode()<<endl;

obj2.DeleteLast();
obj2.Display();
cout<<"number of nodes are:"<<obj2.CountNode()<<endl;

obj2.InsertAtPos(4);
obj2.Display();
cout<<"number of nodes are:"<<obj2.CountNode()<<endl;

obj2.DeleteAtPos(4);
obj2.Display();
cout<<"number of nodes are:"<<obj2.CountNode()<<endl;
return 0;
}


