#include <iostream>

using namespace std;

int main()
{
 float a, b, hasil;
 char op;

 cout << "Selamat datang di program kalkulator sederhana" << endl << endl;
 cout << "Masukan angka pertama: ";
 cin >> a;
 cout << "Pilih operator (+, -, x, atau :) : ";
 cin >> op;
 cout << "Masukan angka kedua: ";
 cin >> b;

 switch (op)
 {
  case '+':
   hasil = a + b;
   cout << "Hasil Perhitungan: " << endl;
   cout << a << " " << op << " " << b << " = " << hasil << endl;
   break;
  case '-':
   hasil = a - b;
   cout << "Hasil Perhitungan: " << endl;
   cout << a << " " << op << " " << b << " = " << hasil << endl;
   break;
  case 'x':
   hasil = a * b;
   cout << "Hasil Perhitungan: " << endl;
   cout << a << " " << op << " " << b << " = " << hasil << endl;
   break;
  case '/':
   hasil = a / b;
   cout << "Hasil Perhitungan: " << endl;
   cout << a << " " << op << " " << b << " = " << hasil << endl;
  default:
   cout << "Operasi tidak bisa dijalankan." << endl;
 }


  cin.get();
  return 0;
}
