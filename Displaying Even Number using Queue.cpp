 //a queue of first 15 even numbers, display the queue, deleteing/dequeueing the first four even numbers, and displaying the queue again.
#include <iostream>
using namespace std;
#define SIZE 15
int arr[SIZE];
int front=-1;
int rear=-1;

bool isempty(){
	if(front==-1)
	return true;
	else
     return false;
}
bool isfull(){
	if(front==0 && rear==SIZE-1){
		return true;
	}
		else
		{
		return false;
	}
}
 void enqueue(int val){
		if(front==-1)
			front=0;
			rear++;
			arr[rear]=val;	
	
}
void dequeue(){
	if(isempty()){
		cout<<"Your Queue Is Empty :'("<<endl;
	}
	else {
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else
		rear--;
	}
}
void display(){
	if(isempty()){
	cout<<"Your Queue Is Empty :'("<<endl;
	}
	else {
	for(int i=front; i<=rear;i++){
		cout<<arr[i]<<endl;
	}
}
}
int main(){
	int n=0;
	for(int i=0;i<=30;i++){
		if(n%2==0)
		enqueue(n);
		n++;
	}
	cout<<"FIRST 15 EVEN NATURAL NUMBERS ARE:"<<endl;
	display();
	
	for(int i=0;i<=4;i++){
		dequeue();
	}
	cout<<"Queue After Deleting first four natural number is:"<<endl;
	display();
	
	return 0;
}

