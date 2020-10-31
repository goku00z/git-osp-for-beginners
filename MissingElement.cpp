#include <bits/stdc++.h> 
using namespace std; 
  
int search(vector<int> v) 
{ 
    int size = v.size();
    int a = 0, b = size - 1; 
    int mid; 
    while ((b - a) > 1) { 
        mid = (a + b) / 2; 
        if ((v[a] - a) != (v[mid] - mid)) 
            b = mid; 
        else if ((v[b] - b) != (v[mid] - mid)) 
            a = mid; 
    } 
    return (v[mid] + 1); 
} 
  
int main() 
{ 
    int n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
    }
    cout << "Missing number:" << search(v); 
} 
