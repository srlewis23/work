#ifndef H_Queue
#define H_Queue

#include<iostream>
using namespace std;

template<class T>
class Queue{
	public:
		bool isEmpty() const;
		bool isFull() const;
		T front() const;
		T dequeue();
		void enqueue(const T& qElem);
		void print();
		int size();
		Queue(int qSize = 100);
		~Queue();
		
	private:
		int maxSize;
		int count;
		int qfront;
		int qback;
		T *qArray;
};

template<class T>
bool Queue<T>::isEmpty() const{
	return(count ==0);		
}
template<class T>
bool Queue<T>::isFull() const{
	return(count==maxSize);
}
template<class T>
T Queue<T>::front() const{
	return qArray[qfront];
}
template<class T>
T Queue<T>::dequeue(){
	if(count!=0){		
		count--;
		qfront = (qfront+1)%maxSize;
	}
	else{
		cout << "Can't remove from empty queue" << endl;
	}
	
}
template<class T>
void Queue<T>::enqueue(const T& qElem){
	if(count != maxSize){		
		qback = (qback+1)%maxSize;
		count++;
		qArray[qback]= qElem;
		//if(qfront<0)
			//qfront = 0;
	}
	else
		cout << "Cant add to full queue" << endl;
}
template<class T>
void Queue<T>:: print(){
	if(qfront<qback){	
	for(int i = qfront+1;i<qback;i++){
		cout << qArray[i] << " ";
	}
	}
	else if(qfront==qback)
		cout << qArray[qback];
	else if(qfront > qback){
		for(int i = qfront+1; i < maxSize; i++)
			cout << qArray[i] << " ";
		for(int i= 0; i<=qback;i++)
			cout << qArray[i] << " ";
		cout << endl;
	}
	cout << endl;
}
template<class T>
int Queue<T>::size(){
	return count;
}
template<class T>
Queue<T>::Queue(int qSize){
	maxSize = qSize;
	qArray = new T[maxSize];
	count = 0;
	qfront =-1;
	qback=(maxSize-1);
}
template<class T>
Queue<T>::~Queue(){
	delete [] qArray;
}
#endif