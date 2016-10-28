#include<iostream>
#include<thread>
using namespace std;
void son(){
	cout<<"son: give me some money\n";
}
void daughter(int x){
	cout<<"daughter: I'm moving out in \n"<<x<<" days\n";
} 
int main(){
	thread child1(son);
	thread child2(daughter,2);
	
	cout<<"dad: hi kids\n";

	child1.join();
	child2.join();

	cout<<"dad: I hate you all\n";
}
