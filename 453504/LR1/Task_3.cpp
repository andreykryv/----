#include <iostream>
#include <cmath>    

  int main() {
double start, end, step;
  while (true){
std::cout << "Введите начальное значение x: ";
  if (std::cin >> start){ // Задаем исходное значение переменной
   break;}
    else {std::cout << "Ошибка! Введите числовое значение повторно" <<std::endl;
          std::cin.clear();}
      while (std::cin.get() != '\n') {continue;}}
  while (true){
std::cout << "Введите конечное значение x: ";
  if (std::cin >> end){ // Задаем конечно значение переменной
   break;}
    else {std::cout << "Ошибка! Введите числовое значение повторно" <<std::endl;
          std::cin.clear();}
      while (std::cin.get() != '\n') {continue;}}
  while (true){
 std::cout << "Введите шаг: ";
  if (std::cin >> step){ // Задаем шаг, с которым с которым будет изменяться аргумент
   break;}
    else {std::cout << "Ошибка! Введите числовое значение повторно" <<std::endl;
          std::cin.clear();}
      while (std::cin.get() != '\n') {continue;}}
  for (double x = start; x <= end; x += step) {
 double y = sin(x); // функция y = sin(x) 
 std::cout << x << " | " << y << std::endl; // Выводим значения функции для каждого аргумента (x | y)
}
 return 0;
}   