//
//  main.cpp
//  tarea 1 estructura
//
//  Created by Pepe Hdez hdez on 8/7/18.
//  Copyright © 2018 Pepe Hdez hdez. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int mat[4][4];
    int x, n, r;
    cin >> n;
    for(int i=0; i<4; i++){
        for(int c=0; c<4; c++){
            cin >> x;
            mat[i][c]=x;
        }
    }
    r = n%4;
    if(r<0){
        r+=4;
    }
    switch (r){
        case 0:
            for(int i=0; i<4; i++){
                for(int c=0; c<4; c++){
                    if (c==3){
                        cout << mat[i][c];
                    }
                    else
                        cout << mat[i][c] << " ";
                }
                cout << endl;
            }
            break;
        case 1:
            for(int i=0; i<4; i++){
                for(int c=3; c>=0; c--){
                    if (c==0){
                        cout << mat[c][i];
                    }
                    else
                        cout << mat[c][i] << " ";
                }
                cout << endl;
            }
            break;
        case 2:
            for(int i=3; i>=0; i--){
                for(int c=3; c>=0; c--){
                    if (c==0){
                        cout << mat[i][c];
                    }
                    else
                        cout << mat[i][c] << " ";
                }
                cout << endl;
            }
            break;
        case 3:
            for(int i=3; i>=0; i--){
                for(int c=0; c<4; c++){
                    if (c==3){
                        cout << mat[c][i];
                    }
                    else
                        cout << mat[c][i] << " ";
                }
                cout << endl;
            }
            break;
    }
    return 0;
}
