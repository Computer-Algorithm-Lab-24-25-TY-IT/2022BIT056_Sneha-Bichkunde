#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void generateRandomNumbers(int numbers[], int size) {
    for (int i = 0; i < size; ++i) {
        numbers[i] = rand() % 10000 + 1;
    }
}

bool isEven(int num) {
    return num % 2 == 0;
}

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

// Function to calculate the factorial of a number
unsigned long long factorial(int num) {
    if (num == 0 || num == 1) return 1;
    return num * factorial(num - 1);
}

int prefixSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        sum += arr[i];
    }
    return sum;
}

double average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (double)sum / n;
}

void printArray(int arr[]){
    printf("Generated Array:\n[");
    for (int i = 0; i < 100; i++) {
        printf("%d, ", arr[i]);
    }
    printf("]\n\n");
  }

int main() {
    int size = 100;
    int numbers[size];
    
    srand(time(0));
    
    // Generate random numbers
    generateRandomNumbers(numbers, size);
    
    printArray(numbers);
    
   
    for (int i = 0; i < size; ++i) {
        printf("Number: %d\n", numbers[i]);
        printf("%s\n", isEven(numbers[i]) ? "Even" : "Odd");
        printf("%s\n", isPrime(numbers[i]) ? "Prime" : "Not Prime");
        printf("Factorial: %llu\n", factorial(numbers[i] % 20)); 
        printf("\n");
    }
    
         printf("Prefix Sum: %d\n", prefixSum(numbers, size));
    printf("Average: %.2f\n", average(numbers, size));
    
    
    
 
    
    return 0;
}

