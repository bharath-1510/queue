#include <bits/stdc++.h>
using namespace std;
#define max 5
class Queue
{
	int front,rear,c;
public:
	int a[max];
	Queue()
	{
		front=-1;
		rear=-1;
		c=0;
	}
	bool isEmpty();	
	int size();
	void enqueue(int x);
	int dequeue();	
	void print();
};
int Queue::size()
{
	return c;
}
void Queue::print()
{
	if(isEmpty())
		cout<<"Queue is Empty";
	else
		{
			for(int i=front;i<=rear;i++)
				cout<<a[i]<<" ";
		}
		cout<<endl;
}
void Queue::enqueue(int x)
{
	if((rear+1)%max==front)
		cout<<"Queue is Full";
	else
	{
		rear=(rear+1)%max;
		a[rear]=x;
		if(front==-1)
			front=rear;
			c++;
	}
}
int Queue::dequeue()
{
	if(isEmpty())
		cout<<"Queue is Empty";
	else
	{
		int data=a[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
			front=(front+1)%max;
		c--;
		return data;		
	}
	return 0;	
}
bool Queue::isEmpty()
{
	if(front==-1)
		return true;
	else
		return false;
}
int main()
{
	class Queue q;
	cout<<"Firt inserting ";
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.print();
	cout<<q.size()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	q.print();
	cout<<q.size()<<endl;
	return 0;
}

