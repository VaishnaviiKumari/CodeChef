#include <bits/stdc++.h>
using namespace std;

int main() {  
	int t;   
	cin>>t;  
	while(t--){ 
	    int n; 
	    cin>>n; 
	    
	    int ans=0; 
	    while(n != 50){
	        if(n<50){
	            n+=2;
	        }
	        else if (n>50){
	            n=(n-3);
	        }
	        ans += 1;
	    }
	    cout<<ans<<endl;
	}
    return 0;
}
