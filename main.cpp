#include <iostream>
#include<stdlib.h>
#define MAXSIZE 5
using namespace std;
int ar[MAXSIZE],front=-1,rear=-1;
void insert()
{
    if(rear+1==front || rear==MAXSIZE-1){
        cout<<"\n !OVERFLOW\n";
    }
    else if(front ==-1 && rear==-1)
        {
           front=0;
           rear=0;
           cout<<"Enter value of element : ";
           cin>>ar[rear];
           cout<<"\nInserted successfully\n";
        }
    else if(rear==MAXSIZE-1 && front!=0)
    {
        rear=rear+1;
        cout<<"Enter value of element : ";
        cin>>ar[rear];
        cout<<"\nInserted successfully\n";
    }
    else
    {
        rear=rear+1;
         cout<<"Enter value of element : ";
        cin>>ar[rear];
        cout<<"\nInserted successfully\n";
    }
}
void deletes()
{
   if(front==-1){
        cout<<"\n  ! UNDERFLOW \n";
   }
   cout<<"\n Deleted element : "<<ar[rear];
   if(front==rear)
   {
       front=-1;
       rear=-1;
   }
   else if(front==MAXSIZE-1)
   {
       front=0;
   }
   else{
    front=front+1;
   }
   cout<<"\nDeleted successfully \n";
}
void display()
{
   if(front==-1)
   {
       cout<<"\n ! Underflow\n";
   }
   else{
        cout<<"\n Elements : \n";
   for(int i=front;i<=rear;i++)
   {
       cout<<" "<<ar[i];
   }
   cout<<"\n";
}
}
int main()
{
    int ch;
    while (1)
    {
        cout<<"\nCIRCULAR QUEUE OPERATION : "<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete "<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice - ";
        cin>>ch;
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: deletes();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: cout<<"\n !Wrong Input\n";
        }
    }
    return 0;
}
