#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  int x = 1;

  while (t--){
    
    int r, c;
    cin >> r >> c;

    int r1 = 0, c1 = 0;

    cout << "Case #" << x << ":" << endl;

    char a, b;

    while (r1 < ((r*2) + 1)){
      c1 = 0;

      if (r1%2 == 0){
	a = '+';
	b = '-';
      } else {
	a = '|';
	b = '.';
      }
 
      while (c1 < ((c*2) + 1)) {

	if ((c1 < 2) && (r1 < 2)){
	  cout << "."; 
	} else {
	  if (c1%2 == 0){
	    cout << a;
	  } else {
	    cout << b;
	  }
	  
	}
	++c1;
      }
      ++r1;
      cout << endl;
    }
    ++x;
    cout << endl;
  }
}
