#include<iostream>
using namespace std;
int findGrade(){
 int x;
 cout << "Please input your score: ";
  cin >> x;
  if(x > 90){
    return 'A' ; 
  }
//   else if(x>75 && x<=90){
//   cout << "B";  
//   }
//   else if(x>60 && x<=75){
//   cout << "C";  
//   }
  return 0;
 }