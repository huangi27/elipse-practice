/*
 * main.cpp
 *
 *  Created on: 2019�~11��27��
 *      Author: eehua
 */

#include <iostream>
using namespace std;

int main(){
	int a;
	a = 8;
	cout<<a<<endl;

	int * p;//�ŧi�F�@�ӫ��� �s��p
	p = &a;//p����a���O�����m
	cout<<p<<endl;
	cout<<*p<<endl;
    *p = 20;
    cout<<a<<endl;

	return 0;
}


