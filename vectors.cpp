#include <bits/stdc++.h>
using namespace std;

// int add1(int a){
	
// 	return a+1;
// }

int main() {
	

	vector<int> integer = {1,2,3,4,5};
	
	int a;
	cin>>a;
	
	
	// vector_name.insert(vector_name.begin() + 1, 500);
	
	
	integer.insert(integer.begin()+4,a);
	
	
	for(int i = 0 ; i<integer.size() ;i++){
		
		cout<<integer[i]<<endl;
		
	}
	
	integer.erase(integer.begin()+3);
	
	cout<<endl<<endl;
	
	for(int i = 0 ; i<integer.size() ;i++){
		
		cout<<integer[i]<<endl;
		
	}
	
	return 0;
}
