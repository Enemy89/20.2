#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

int main() {
    std::srand(std::time(nullptr));
    int width, height;
    std::cout << "Width: ";
    std::cin>>width;
    std::cout << "Height: ";
    std::cin>>height;

    std::ofstream file("..\\pic.txt");


    int picture[height][width];
    for (int i=0; i<height;++i){
        for (int j=0; j<width;++j){
           picture[i][j]=std::rand()%2;
        }
    }
    for (int i=0; i<height;++i){
        for (int j=0; j<width;++j){
            file<<picture[i][j];
        }
        file<<std::endl;
    }

    file.close();
}
