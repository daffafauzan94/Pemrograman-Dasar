/* Tampilan Segitiga Angka */
/* Daffa Fauzan Hadiansyah */
/* 20051397024 */
/* 2020B */


#include<iostream>
#include<conio.h>

using namespace std;

main()
{
int n,i,j;
cout<<"Program Segitiga Angka --> Angka Segitiga \n\n";
cout<<"Masukkan Segitiga Angka : ";
cin>>n;
cout<<"\n";
for (i=1; i<=n; i++)
{
 for (j=1; j<=i; j++)
{
  cout<<j;
}
cout<<" \n";
} 
for (i=n-1; i>=1; i--)
{
for(j=1; j<=i;j++)
{
 cout<<j;
}
cout<<" \n";
}
getch ();
    
}
