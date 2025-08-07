#include <iostream>
#include<bits/stdc++.h>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
// 	priority_queue<int,vector<int> ,greater<int>> pq;
	map<int,int> mpp;
   
    int l=0;
    int r=0;
    vector<int> v;
    int cnt=0;
    while(r<n){
        // pq.push(arr[r]);
        mpp[arr[r]]++;
        cnt++;
        
        if(cnt==k){
            // int it=pq.top();
            // if(mpp[it]){
               
            // }
            auto it = mpp.rbegin();
             v.push_back(it->first);
            
            // pq.erase(pq.find(arr[l]));//make a function of it 
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0) mpp.erase(arr[l]);
            cnt--;
            ++l;
        }
        
        ++r;
    }
    for(int i=0 ; i<v.size() ;++i){
        cout<<v[i] <<" ";
    }
    cout<<endl;
}
    
    // deque<int> dq;
    // vector<int> v(n-k+1);
    // for(int i=0 ; i< n ;++i){
    //     //pop_back() pop_front push_back push_front
        
    //     if(!dq.empty() && dq.front()<=i-k){
    //         dq.pop_front();
    //     }
    //     while(!dq.empty() && arr[i]>arr[dq.back()]){
    //         dq.pop_back();
    //     }
        
    //     dq.push_back(i);
    //     if(i>=(k-1)){
    //         cout<<arr[dq.front()]<<" ";
    //     }
        
    // }
    // cout<<endl;
    


int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
