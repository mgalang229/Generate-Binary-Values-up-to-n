#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  vector<int> v;
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++){
    v.push_back(1 << i);
  }
  for(auto x : v){
    cout << x << " ";
  }
  cout << "\n";
  return 0;
}