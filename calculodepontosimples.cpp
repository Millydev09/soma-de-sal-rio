//calculodepontosimples.cpp

#include <iostream>
# include <cwchar>
#include <locale>

using namespace std;
int main(void){
  setlocale(LC_ALL, "Portuguese_Brazil.1252");

  float ht,vh,pd,td,sb,sl;

  cout << "entre com o numero de horas trabalhadas:";
  cin >> ht;
  cin.ignore(80,'\n');

  cout << "entre com o valor das horas trabalhadas:";
  cin >> vh;
  cin.ignore (80,'\n');

  cout << "entre com  valor do percentual de desconto:";
  cin >> pd;
  cin.ignore (80,'\n');

  sb = ht *vh;
  td = (pd/100) * sb;
  sl= (sb - td);

  cout << "\n";
  cout << "salário bruto :" << sb << endl;
  cout << "desconto:" << pd << endl;
  cout << "salário liquido" << sl << endl;

  cout << endl;
  cout << "tecle <enter> para encerrar " ;
  cin.get ();
  return 0;
  }
