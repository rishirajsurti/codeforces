#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;
#define gc getchar_unlocked
void scanint(int &x);

//add following when in windows or codeforces.com
inline int getchar_unlocked() { return getchar(); }

void scanint(int &x){
	register int c = gc();
	x = 0;
	int neg = 0;
	for(; ((c<48 || c>57) && c!='-'); c = gc());
	if(c=='-'){ neg = 1; c = gc();}
	for(; c>47 && c<58; c=gc()){ x = (x<<1)+(x<<3)+c-48; }
	if(neg)	x=-x;

}
int main(){
	int n,i,j,t=0,sum=0;
	vector<int> a;
	scanint(n);
	for(i=0;i<n;i++){
		scanint(j);
		if(j==4)
			t++;
		else{
			a.push_back(j);
		}
	}
	sort(a.rbegin(),a.rend());
	i=0;
	while(i<a.size()){
		sum +=a[i];
		//cout<<a[i]<<" "<<sum<<endl;
		if(sum >= 4){
			t++;
			sum = sum-4;
		}
		i++;
	}
	if(sum!=0){
		if(sum<=4)
			t++;
		else if(sum>=4)
			t=t+2;		
	}

	cout<<t<<endl;
	return 0;
}
