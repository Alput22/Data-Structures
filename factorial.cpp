#include <iostream>
using namespace std;

int factorial(int n){//recursion version
	if (n == 1){
		return 1;
	}
	else{
		return n * factorial(n-1);
	}
}
int main(){
	//int factorial = 1;
	int i, n;
	cin >> n; //iteration
	//for(i=1; i<= n; i++){
	//	factorial = factorial * i;
	//}
	cout << factorial(n);
}


