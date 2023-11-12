#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");

    int dano;
    int posled = 1;    

    string start = "0";        // Начальное число
    cout << "[+] Введите ограничение:";
    cin >> dano;                // Кол-во действий
    system("cls");
    for (int i = 0;i < dano;i++) {   
        string numpl = start;              // Назначение кол-во символа 
        for (int j = 0;j < start.size();j++) {
            if (start[j] == '0') {
                numpl[j] = '1';
            }
            if (start[j] == '1') {
                numpl[j] = '0';
            }
        }
        start = start+numpl;  // Прибавление чаин к плюсу
        cout << "Последовательность числа " << posled++ << endl;
        cout << start << endl << endl;;
    }

    return 0;
}
// 0