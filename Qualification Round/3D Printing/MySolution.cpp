#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;

  int x = 1;

  while (t--){
    
    unsigned int
      c1, m1, y1, k1,
      c2, m2, y2, k2,
      c3, m3, y3, k3;

    unsigned int cmin, mmin, ymin, kmin;

    cin >>
      c1 >> m1 >> y1 >> k1 >>
      c2 >> m2 >> y2 >> k2 >>
      c3 >> m3 >> y3 >> k3;

    cmin = min(c1, min(c2, c3));
    mmin = min(m1, min(m2, m3));
    ymin = min(y1, min(y2, y3));
    kmin = min(k1, min(k2, k3));
    

    int total = cmin + mmin + ymin + kmin;

    string r;
    if (total < pow(10, 6)){
      r = "IMPOSSIBLE";
      cout << "Case #" << x << ": " << r << endl;
    } else {
      unsigned int minus = (total - pow(10,6));
      
      if (cmin>minus){
	cmin = (cmin - minus);
	minus = 0;

      } else {
	minus = minus - cmin;
	cmin = 0;
      }

      if (mmin>minus){
	mmin = (mmin - minus);
	minus = 0;
	
      } else {
	minus = minus - mmin;
	mmin = 0;
      }

      if (ymin>minus){
	ymin = (ymin - minus);
	minus = 0;
      } else {
	minus = minus - ymin;
	ymin = 0;
      }

      if (kmin>minus){
	kmin = (kmin - minus);
	minus = 0;
      } else {
	minus = minus - kmin;
	kmin = 0;
      }

      cout << "Case #" << x  << ": " << cmin << " " << mmin << " " << ymin << " " << kmin << endl;
    }


    ++x;
  }

}
