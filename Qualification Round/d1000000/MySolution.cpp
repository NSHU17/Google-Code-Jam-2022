#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  int x = 1;

  while (t--){
    int n;
    cin >> n;

    int s[n];

    for (int i = 0; i < n; ++i){
      cin >> s[i];
    }

    sort(s, s + n);

    int y = 0;

    for (int i = 0; i < n; ++i){
      if (s[i] > y){
	++y;
      }
    }

    cout << "Case #" << x << ": " << y << endl;
    ++x;
  }
}

