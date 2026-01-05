// Daniel Bustamante

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
    while (k--) {
        //modulo 10 nos da el ultimo digito del numero
        if (n%10 !=0 ) {
            n--;
        }
        else {
            n/=10;
        }
    }
    cout<<n;
}
