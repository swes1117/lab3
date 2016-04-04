#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	ifstream fptr;
	int size,i,sum=0,j;
	fptr.open("file.in",ios::in);
	if(fptr==0)
		cout<<"Failure opening"<<endl;
	
	else{
		fptr>>size;
			vector<int>a(size);
		for(i=0;i<size;i++)
			fptr>>a.at(i);
				
		sort(a.begin(),a.end());
			//cout<<size<<endl;
		/*for(i=0;i<size;i++)
			cout<<a.at(i)<<endl;*/
		j=size-1;
		for(i=0;i<5;i++){
			sum=sum+a.at(j);
			j--;
					}
	}
cout<<sum<<endl;
}
	




	








