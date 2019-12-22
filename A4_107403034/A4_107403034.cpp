#include <iostream>
using namespace std;

void find_f(int a);

int main(){
	find_f(100);
	return 0;
}

void find_f(int a){
	for(int t=1 ; t<=a ; t++){
		int answer = a % t;
		if(answer==0){
			cout<<t<<endl;
		}
	}
}

