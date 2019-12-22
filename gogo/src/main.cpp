/*
 * main.cpp
 *
 *  Created on: 2019¦~11¤ë28¤é
 *      Author: eehua
 */

#include<iostream>
using namespace std;
int main(){
	int a;
	a = 8;
	cout<<a<<endl;

	int * p;
	p = &a;
	cout<<p<<endl;
	*p = 100;
	cout<<*p<<endl;

	int * n = new int;
	cout<<n<<endl;
	*n = 60;
	cout<<*n<<endl;

	int * s = n;
	cout<<s<<endl;
	cout<<*s<<endl;

	return 0;
}


