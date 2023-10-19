#include "fastmemset.hpp"
#include<bits/stdc++.h>
using namespace std;
fastmemset<int,10> a;
fastmemset<string,2> b("test");
int main(){
	a.set(5);
	(a[3]=5)=10;
	a[4]=a[6]=7;
	for(int i=0;i<10;++i) cout<<a[i]<<" ";cout<<"\n";
	a[5]=4;
	a.set(2).set(3)[3]=7;
	a[2]=8;
	for(int i=0;i<10;++i) cout<<a[i]<<" ";cout<<"\n";
	for(int i=0;i<2;++i) cout<<(string)b[i]<<" ";cout<<"\n";
	b.set("hello");
	for(int i=0;i<2;++i) cout<<(string)b[i]<<" ";cout<<"\n";
	b[1]="world";
	for(int i=0;i<2;++i) cout<<(string)b[i]<<" ";cout<<"\n";
	return 0;
}
