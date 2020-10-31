#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void setithbit(int &n,int i){
	int a = 1;
  // Creating the bitmask
	a = a<<i;
	// we are passing by reference so we don't need to return anythink we are pointing to same location as n;
	n = n | a;
}

int main(){
	int n = 5,i=1;
	setithbit(n,i);
	cout<<n<<endl;
	return 0;
}
