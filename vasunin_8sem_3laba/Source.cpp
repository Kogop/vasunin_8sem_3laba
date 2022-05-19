#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//int Fib_Num;
string Temp = "01";
string temp2 = "";
long int counter = 2;
int m;
int FIbbon(int n) {
    //cout << Temp[1] << endl;
    long long int num1 = 0;
    long long int num2 = 1;
   // long long int num_temp;
    long long int num_next = 1;
    
    
    if (n == 1)
        cout << 0 << endl;;
    if (n == 2)
        cout << 1 << endl;;
    for (long int  i = 0; i < n - 2; i++) {
        num_next = num1 + num2;
        temp2 = to_string(num_next);
        counter += temp2.length();
        //cout <<"counter "<< counter << endl;
        //cout << " length of number = " << temp2.length() << endl;
        if (counter == n)
        {
            cout << num_next << endl;
            cout << "nujnoe chislo = " << temp2[temp2.length()-1] << endl;
            break;
        }
        else if (counter > n) {
            cout << num_next << endl;
            cout << "nujnoe chislo = " << temp2[counter - n - 1] << endl;
            
           break;
        }
        cout << num_next << " ";
        num1 = num2;
        num2 = num_next;
    }
    cout << endl;
    return 0;
}



int main() {
	//delay cherez stroki. schitai chislo i zapisivay v end stroki. kak stroka perepolnyaetsya obnulyai ee, uvelichivai counter
	// i zapolnyai dalwe. ostanovis kogda doidew do iskomogo elemeta ravnogo polu4ennomu chislu - (counter * max dlinu stroki)
	// glavnaya problema v zapisi chisel v end stroki. Esli ostavshihsya svobodnih mest < razmera chisla
	cout << " vvedite nomer jelaemoy cifry" << endl;
	cin >> m;
    FIbbon(m);
	


	return 1;
}
