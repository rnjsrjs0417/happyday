#include <iostream>
using namespace std;

int main() {
    int n;  
    char input;

    cin >> n;
    int start_x=1, start_y=1;

    while(1){
        cin >> input;
        if(input == EOF) break;

        switch(input)
        { 
            case 'L' : 
                if(start_x > 1)
                    start_x --;
                break;
            case 'U' :
                if(start_x > 1)
                    start_y --;
                break;
            case 'R' :
                if(start_x < n)
                    start_x++;
                break;
            case 'D' : 
                if(start_y < n)
                    start_y++;
                break; 
        }

    }
    // 입력받은 값 출력하기
    cout << start_x << " " << start_y << endl;

    return 0;
}