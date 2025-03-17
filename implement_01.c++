#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;  
    string str;
    char input;

    cin >> n;
     
    int start_i=1, start_j=1;

    cin.ignore();
    getline(cin, str);  // 한 줄 전체를 입력 받음

    for (char input : str) {

        switch(input)
        { 
            case 'L' : 
                if(start_j > 1)
                    start_j --;
                break;
            case 'U' :
                if(start_i > 1)
                    start_i --;
                break;
            case 'R' :
                if(start_i < n)
                    start_j++;
                break;
            case 'D' : 
                if(start_i < n)
                    start_i++;
                break; 
        }

    }
    // 입력받은 값 출력하기
    cout << start_i << " " << start_j << endl;

    return 0;
}