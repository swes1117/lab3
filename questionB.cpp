#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include<fstream>
#include "Clock.cpp"
using namespace std;
  void insertion_sort(vector<int>&v)
  {int insert, moveItem;
  for(int next=0;next<v.size();next++)
  {
  insert = v.at(next);
  moveItem = next;
  while((moveItem>0) &&
 (v.at(moveItem-1) > insert))
  {
  v.at(moveItem) = v.at(moveItem-1);
  --moveItem;
  }
  v.at(moveItem) = insert;
  }
  }
 

  int main(){
	ifstream fptr;
	int size1,i,sum=0,j;
	fptr.open("file.in",ios::in);
	if(fptr==0)
		cout<<"Failure opening"<<endl;
	
	else{
		fptr>>size1;
			vector<int>a(size1),a2(size1);
		for(i=0;i<size1;i++)
			fptr>>a.at(i);
  	 a2=a;
  Clock clk;
  int size =a.size();
  /*vector<int> v1(size),v2;
  srand(time(NULL));
  for(int i=0; i<size; ++i)
  v1.at(i) = rand();
  v2 = v1; */ 
  
  
  clk.start();
  sort(a.begin(), a.end());
  cout << "sort(): " <<clk.getElapsedTime() << " seconds\n";
  //cout<<"v1/v2 are "<<((v1==v2)?"the same.\n":"different.\n");
  clk.start();
/*for(i=0;i<8;i++)
			cout<<a.at(i)<<" "<<endl;*/

  insertion_sort(a2);
 j=size1-1;
 for(i=0;i<5;i++){
			sum=sum+a.at(j);
			j--;
					}


  cout << "insertion_sort(): "<<clk.getElapsedTime() << " seconds\n";
  //cout << "v1/v2 are "<<((v1==v2)?"the same.\n":"different.\n");
	cout<<endl<<sum;
  return 0;
  }
}
  /*int i,j,buffer;
	for(i=0;i<v.size()-1;i++){
		for(j=i;j<v.size();j++){
			if(v.at(i)>v.at(j))
			{buffer=v.at(i);
			 v.at(i)=v.at(j);
			 v.at(j)=buffer;	
			}
}
}*/
