#include<iostream>
#include<cstdlib>
#define MAX 5
using namespace std;

void display();
void enqueue();
void dequeue();

int f=-1,r=-1,queue[MAX];

int main()
{
    int choice;

    while(1)
    {
        cout<<"\n1. Enqueue";
        cout<<"\n2. Dequeue";
        cout<<"\n3. Display";
        cout<<"\n4. Exit";

        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                cout<<"Invalid choice!";
        }
    }

    return 0;
}

void enqueue()
{
    int n;

    if(r==MAX-1)
        cout<<"Queue is full\n";

    else
    {
        cout<<"Enter value: ";
        cin>>n;

        if(f==-1)
            f=0;

        r++;
        queue[r]=n;

        cout<<n<<" inserted successfully\n";
    }
}

void dequeue()
{
    if(f==-1)
        cout<<"Queue is empty\n";

    else
    {
        cout<<"Deleted element: "<<queue[f]<<endl;

        if(f==r)
        {
            f=-1;
            r=-1;
        }
        else
            f++;
    }
}

void display()
{
    if(f==-1)
        cout<<"Queue is empty\n";

    else
    {
        cout<<"Queue elements are: ";

        for(int i=f;i<=r;i++)
            cout<<queue[i]<<" ";

        cout<<endl;
    }
}
