#include <bits/stdc++.h> 
using namespace std; 

void rearrange(vector<int> v) 
{ 
    for (int i = 0; i < v.size(); i++) { 
    
        v[v[i] % v.size()] += i * v.size(); 
    } 
  
    for (int i = 0; i < v.size(); i++) { 
        arr[i] /= v.size(); 
    } 
} 

int main() 
{ 
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
    }
    rearrange(v); 
    return 0; 
} 
