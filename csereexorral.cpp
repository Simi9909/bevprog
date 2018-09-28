#include "std_lib_facilities.h"

int main()
{
  cout<<"Adja meg a szamokat!\n";
  int szam1;
  int szam2;

  cin>>szam1>>szam2;
  
	szam1=szam1^szam2;
	szam2=szam1^szam2;
	szam1=szam1^szam2;

 cout<<"A szamok csere utan:"<<szam1<<","<<szam2<<"\n";
}
