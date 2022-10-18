#include <bits/stdc++.h>
using namespace std;


int main() {
	
	vector<int>a={1,2,3,4,5};
	
	bool check=false;
	int c;
	cin>>c;
	
	
	for(int i=0;i<a.size();i++){
		
		if(c==a[i]) check=true;
		
	}
	
	if(check==true) cout<<"found";
	else cout<<"not Found";
	
	return 0;
}
