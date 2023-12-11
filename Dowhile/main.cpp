#include <iostream>
#include <time.h>

using namespace std;

int main() {
  setlocale(LC_ALL, "RU");
  srand(time(NULL));
  string yesno;
  int num;

  do {
    cout << "Введите целое число: ";
    cin >> num;

    cout << "Таблица умножения для числа " << num << ": " << endl;
    int i = 1;
    do {
      cout << num << " * " << i << "= " << num * i << endl;
      i++;
    } while (i <= num);
    cout << "Хотите ввести новое число? (да/нет): ";
    cin >> yesno;
  } while (yesno == "да");
  cout << "Программа завершена." << endl;
}
