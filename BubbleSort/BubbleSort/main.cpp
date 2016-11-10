//
//  main.cpp
//  BubbleSort
//
//  Created by Michelle Chen on 11/9/16.
//  Copyright © 2016 com.michellechen. All rights reserved.
//

#include <iostream>

void sort(int input[], int inputLen) {;
    
    for (int i = inputLen; i > 1; i--) {
        for (int j = 0; j < i; j++) {
            if (input[j] > input[j+1]) {
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }
    
}

int main(int argc, const char * argv[]) {
    int input[] = {3, 45, 23, 77, 43, 7, 10, 16, 39};
    int inputLen = sizeof(input) / sizeof(input[0]);
    
    sort(input, inputLen);
    
    for (int i = 0; i < inputLen; i++) {
        std::cout << input[i] << " ";
    }
    return 0;
}
