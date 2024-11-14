//Створити лінійний двозв’язний список з цілих чисел. Вставити в список число 11 після кожного елемента, рівного 9.
//

#include <iostream>
#include <list>  
#include <windows.h>


using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    list<int> numberList = { 1, 9, 3, 9, 5, 7, 9 };

    cout << "Початковий список: ";
    for (int number : numberList) {
        cout << number << " ";
    }
    cout << endl;

    for (auto it = numberList.begin(); it != numberList.end(); ++it) {
        if (*it == 9) {
            it = numberList.insert(next(it), 11);
        }
    }

    cout << "Список після вставки числа 11 після 9: ";
    for (int number : numberList) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
