// MIT License
// Copyright 2018 linrongbin16@gmail.com

#include "BubbleSort.h"
#include "Util.h"
#include <iostream>
#include <cstdlib>
using namespace std;

#define TEST_MAX 1024
#define MAX 64

void AssertBubbleSort(int *s, int n) {
    AssertNotAscend(s, n);
    BubbleSort(s, 0, n);
    AssertAscend(s, n);
}

int main(void) {
    int s[MAX];
    for (int i = 0; i < TEST_MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            s[j] = rand() % TEST_MAX;
        }
        AssertBubbleSort(s, MAX);
    }
    return 0;
}
