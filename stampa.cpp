/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Leon Lo Preiato 14/05/2024
*/

# include <iostream>
using namespace std;
int main()
{
  int i=10 ,n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  for(i=0; i<n; i++){
   cout<<"Bada come la fuma"<<endl; 
  }
  system("pause");
}
