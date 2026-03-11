#include <iostream>

void printArray(int v[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

void troca(int v[], int i, int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}


void bloco1(int v[], int i, int n) {
    int min_idx = 0;
    for (int j = i + 1; j < n; j++)
        if (v[j] < v[min_idx])
            min_idx = j;
    troca(v, i, min_idx);
}

void bloco2(int v[], int i, int n) {
    int min_idx = i;
    for (int j = i; j < n; j++)
        if (v[j] < v[min_idx])
            min_idx = j;
    troca(v, i, min_idx);
}

void bloco3(int v[], int i, int n) {
    int min_idx = i;
    for (int j = i + 1; j < n; j++)
        if (v[j] < v[min_idx])
            min_idx = j;
    troca(v, i, i + 1); 
}

void bloco4(int v[], int i, int n) {
    int min_idx = i;
    for (int j = i + 1; j < n; j++) 
        if (v[j] < v[min_idx])
            min_idx = j;
    troca(v, i, min_idx);
}

void bloco5(int v[], int i, int n) {
    int min_idx = i;
    for (int j = i + 1; j < n; j++)
        if (v[j] < v[min_idx])
            min_idx = j;
    troca(v, i, min_idx);
}


int main() {
    int n = 5;
    int array[] = {64, 25, 12, 22, 11};

    std::cout << "Array original: ";
    printArray(array, n);

    std::cout << "\nExecutando Bloco 5:" << std::endl;
    for (int i = 0; i < n - 1; i++) {
        bloco5(array, i, n);
        printArray(array, n);
    }


    std::cout << "\nTestando Bloco 3:" << std::endl;
    bloco3(array, 0, n);
    printArray(array, n); 

    return 0;
}