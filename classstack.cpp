#include<bits/stdc++.h>
using namespace std;
class Stack {
	//properties
	public:
		int *arr;
		int top;
		int size;
		
		//behaviour
		Stack (int size){
			this->size=size;
			arr=new int[size];
			top=-1;
		}
		
		void push(int element){
			if(size-top>1){
				top++;
				arr[top]=element;
			}
			else{
				cout<<"stack overflow "<<endl;
			}
		}
		void pop(){
		     if(top>=0){
		     	top--;
			 }
			 else{
			 	cout<<"stack underflow"<<endl;
			 }
		}
		int peek(){
			if(top>=0 && top<size)
			    return arr[top];
			else{
				cout<<"stack is empty "<<endl;
				return -1;
			}
			
		}
		bool empty(){
			if(top==-1){
				return true;
			}
			else{
				return false;
			}
		}
};
int main(){
	Stack st(5);
	st.push(22);
	st.push(43);
	st.push(44);
	st.push(33);
	st.push(42);
	//st.push(39);
	
	cout<<st.peek()<<endl;
	
	st.pop();
	
	cout<<st.peek()<<endl;
	
	st.pop();
	
	cout<<st.peek()<<endl;
	
	st.pop();
	
	cout<<st.peek()<<endl;
	
	if(st.empty()){
		cout<<"stack is empty mere dost "<<endl;
	}
	else{
		cout<<"stack is not empty mere dost "<<endl;
	}
}
