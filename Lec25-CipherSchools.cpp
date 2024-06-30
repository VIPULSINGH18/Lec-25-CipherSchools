#include<iostream>
using namespace std;
int minandmax(*min,*max){
	int min;
	int max;
	cout<<"Value of min value: "<<*min<<endl;
	cout<<"Value of max value: "<<*max<<endl;
	return 0;
	
	
	
}

int main(){

	
	int a[5];
	int i;
	for(i=0;i<=5;i++){
		a[i]=i;
	}
	
	int min;
	int max;
	
	min=a[0];
	max=a[0];
	
	int j;
	for(j=0;j<=5;j++){
	if(a[j]>max){
		max=a[j];
		}
	if(a[j]<=min){
		min=a[j];
		}
	
	}
	
	
	
	minandmax( &min, &max);
	return 0;
	
	
	
}
