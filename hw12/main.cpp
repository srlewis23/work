#include "Queue.h"
using namespace std;
int main(){
	Queue<int>  q1;
	Queue<double> q2;
	Queue<char> q3;
	
	cout << "First queue (INT)" << endl;
	
	q1.enqueue(1);
	q1.enqueue(2);
	q1.print();
	q1.enqueue(3);
	q1.print();
	q1.print();
	q1.enqueue(5);
	q1.print();
	q1.enqueue(6);
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();	
	q1.enqueue(7);
	q1.print();
	q1.enqueue(8);
	q1.print();
	q1.enqueue(9);
	q1.print();
	q1.enqueue(10);
	q1.print();
	q1.enqueue(11);
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	q1.dequeue();
	q1.print();
	cout <<"Front: " << q1.front() << endl;
	cout << "Is full: " << q1.isFull() << endl;
	cout << "Is empty: " << q1.isEmpty() << endl;
	cout << "Filling Queue" << endl;
	for(int i = 12;i<=107;i++)
		q1.enqueue(i);
	cout << "Is full: " << q1.isFull() << endl;
	cout << "Emptying queue" << endl;
	for(int i = 0; i <100;i++)
		q1.dequeue();
	cout << "Is empty: " << q1.isEmpty() << endl;
	
	cout << "Second queue (DOUBLE)" << endl;
	
	q2.enqueue(1);
	q2.print();
	q2.enqueue(2);
	q2.print();
	q2.enqueue(3);
	q2.print();
	q2.enqueue(4);
	q2.print();
	q2.enqueue(5);
	q2.print();
	q2.enqueue(6);
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();	
	q2.enqueue(7);
	q2.print();
	q2.enqueue(8);
	q2.print();
	q2.enqueue(9);
	q2.print();
	q2.enqueue(10);
	q2.print();
	q2.enqueue(11);
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();
	q2.dequeue();
	q2.print();
	cout <<"Front: " << q2.front() << endl;
	cout << "Is full: " << q2.isFull() << endl;
	cout << "Is empty: " << q2.isEmpty() << endl;
	cout << "Filling Queue" << endl;
	for(int i = 12;i<=107;i++)
		q2.enqueue(i);
	cout << "Is full: " << q2.isFull() << endl;
	cout << "Emptying queue" << endl;
	for(int i = 0; i <100;i++)
		q2.dequeue();
	cout << "Is empty: " << q2.isEmpty() << endl;
	
	cout << "Second queue (DOUBLE)" << endl;
	
	q3.enqueue('a');
	q3.print();
	q3.enqueue('b');
	q3.print();
	q3.enqueue('c');
	q3.print();
	q3.enqueue('d');
	q3.print();
	q3.enqueue('e');
	q3.print();
	q3.enqueue('f');
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();	
	q3.enqueue('g');
	q3.print();
	q3.enqueue('h');
	q3.print();
	q3.enqueue('i');
	q3.print();
	q3.enqueue('j');
	q3.print();
	q3.enqueue('k');
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();
	q3.dequeue();
	q3.print();
	cout <<"Front: " << q3.front() << endl;
	cout << "Is full: " << q3.isFull() << endl;
	cout << "Is empty: " << q3.isEmpty() << endl;
	cout << "Filling Queue" << endl;
	for(int i = 12;i<=107;i++)
		q3.enqueue(static_cast<char>(i));
	cout << "Is full: " << q3.isFull() << endl;
	cout << "Emptying queue" << endl;
	for(int i = 0; i <100;i++)
		q3.dequeue();
	cout << "Is empty: " << q3.isEmpty() << endl;
	return 0;
}