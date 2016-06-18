#include <bits/stdc++.h>
using namespace std;
int main(){
	int a1, a2;
	scanf("%d %d",&a1, &a2);
	int t = 0;
	while(a1 > 0 && a2 > 0){
		
		if(a1 < a2){
			a1 += 1;
			a2 -= 2;
			if(a1 >= 0 && a2 >= 0) t++;
		} else{
			a1 -= 2;
			a2 += 1;
			if(a1 >= 0 && a2 >= 0) t++;
		}
	}
	printf("%d\n", t);
	return 0;
}