#include<bits/stdc++.h>
using namespace std;
int main(){
	//creation of stack
	stack<int>s;
	
	s.push(1);
	s.push(2);
	s.pop();
	cout<<"pehla element hai ye "<<s.top()<<endl;
	
	if(s.empty()){
		cout<<"Stack empty hai "<<endl;
	}
	else{
		cout<<"stack empty nahi hai "<<endl;
	}
	cout<<"size of stack is now "<<s.size()<<endl;
	
}

