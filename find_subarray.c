#include <stdio.h>



int find_Sub_Array(int A[], int B[], int n, int m) {
	int cnt=1;
	for (int i = 0; i < n; i++) {
		int j;
		if(A[i]==B[0])
		for (j = 1; j < m; j++) 
		{ 
			if (A[i+j] == B[j]) {
				cnt++;
			}
		}
		if (m == cnt) { 
			return 1;
		}
	}
	return 0;
}


int main() {
	int A[] = { 1,1,0,0,1,1 };
	int n = sizeof(A) / sizeof(int);
	int B[] = { 0,0,0 };
	int m = sizeof(B) / sizeof(int);
	
	int index= find_Sub_Array(A,B,n,m);
	if (index)
		printf("yes");
	else
		printf("NO");

	return 0;
}


