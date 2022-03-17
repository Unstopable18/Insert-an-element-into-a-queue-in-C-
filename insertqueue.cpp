#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void Insert() 
{
    int val;
    if (rear == n - 1)
    cout<<"Queue is Overflow"<<endl;
    else 
    {
        if (front == - 1)
        front = 0;
        cout<<"\nEnter element to insert in Queue : "<<endl;
        cin>>val;
        rear++;
        queue[rear] = val;
    }
}

void Display() 
{
    if (front == - 1)
    cout<<"  ***Queue is Empty***"<<endl;
    else 
    {
        for (int i = front; i <= rear; i++)
        cout<<queue[i]<<" ";
        cout<<endl;
    }
}
int main() 
{
    int ch;
    cout<<"\n*******************************************\n";
    cout<<"1. Insert\n2. Exit"<<endl;
    do 
    {
        cout<<"*******************************************\n";
        cout<<"Enter your choice : ";
        cin>>ch;
        switch (ch) 
        {
            case 1: 
            cout<<"\n***Queue Before Insertion***\n"; 
            Display();
            Insert();
            cout<<"\n***Queue After Insertion***\n"; 
            Display();
            break;
            case 2: cout<<"\t*** Exit ***"<<endl;
            break;
            default: cout<<"Invalid choice"<<endl;
        }
    } while(ch!=2);
    cout<<"\n*******************************************\n";
    return 0;
}