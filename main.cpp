#include <iostream>


    int fibbo(int count, int* arr){//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
    if(count < 1) return 0;
    if(count == 1) return 1;
        //if(count == 2) return 1;
    arr[count] = fibbo(count - 1,arr) + fibbo(count - 2,arr);
    return arr[count];
}

//int fibbo_start_with_nomber(int number_start, int number, int* arr){//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
//    //if(number < 1) return 0;//number_start = 17
//    if(number == number_start) return 0;// number = 20
//    arr[number - 1] = fibbo(number - 1,arr) + fibbo(number - 2,arr);
//    return arr[number - 1];
//}

int main() {
    int number = 40;
    int *arr_Base = new int[number];//17
    fibbo(number, arr_Base);
    arr_Base[1] = 1;


    while (number != -1) {

        std::cout << "Input count ";
        std::cin >> number;


        std::cout << "Number of Fibbonacci " << arr_Base[number - 1] << "\n";
    }


    return 0;
}
