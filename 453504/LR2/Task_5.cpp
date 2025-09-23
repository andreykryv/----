git #include <iostream>        // ВЕРСИЯ С ТЕРНАРНОЙ ОПЕРАЦИЕЙ
int main() {
 double x, y, max;
    
    std::cout << ("Введите два вещественных числа X и Y: ");
    std::cin >> x >>y;
    
   


    max = (x > y) ? x : y;
    
    std::cout << ("Максимальное число: " << max);
    return 0;
}