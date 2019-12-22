/*
 * 因數.cpp
 *
 *  Created on: 2019年10月22日
 *      Author: eehua
 */
#include <iostream>
using namespace std;

int main(){
	int a = 5;
	bool answer = false;
	double b;
	for( int c = 2 ; c<a ; c++){
		double b = a % c;
	}
	if(b==0){
		answer = true;
	}
	if(answer){
		cout<<a;
	}
	return 0;
}



