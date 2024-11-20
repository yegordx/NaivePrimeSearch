#include <iostream> 
#include <vector> 
#include <cmath> 
#include <chrono> 
 
// Неоптимізований пошук простих чисел 
void naivePrimeSearch(int limit) { 
    for (int num = 2; num <= limit; ++num) { 
        bool isPrime = true; 
        for (int div = 2; div <= std::sqrt(num); ++div) { 
            if (num % div == 0) { 
                isPrime = false; 
                break; 
            } 
        } 
    } 
} 
 

 
int main() { 
    int limit = 10000000;  // Задайте межу для пошуку простих чисел 
 
    // Вимірювання часу для неоптимізованого алгоритму 
    naivePrimeSearch(limit);
 
    
    return 0; 
}