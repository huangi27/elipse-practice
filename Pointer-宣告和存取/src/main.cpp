/*
 * main.cpp
 *
 *  Created on: 2019年11月27日
 *      Author: eehua
 */

#include <iostream>
using namespace std;

int main(){
	int a;
	a = 8
	cout<<a<<endl;

	int * p;//宣告了一個指標 叫做p
	p = &a;//p等於a的記憶體位置
	cout<<p<<endl;
	cout<<*p<<endl;
    *p = 20;
    cout<<a<<endl;

	return 0;
}


