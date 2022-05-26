/*Завдання №3
Створити абстрактний базовий клас «Транспортний
засіб» і похідні класи «Автомобіль», «Велосипед», «Віз».
Підрахувати час і вартість перевезення пасажирів і
вантажів кожним транспортним засобом.*/

#include <iostream>
#include <string>
using namespace std;

class Transport{public: virtual void HowMuch(double distance) = 0;};

class Car:public Transport {
private: 
    int speed = 80;//середня швидкість 
    int fuel = 8;   //розхід пального на 100км
    int priceFuel = 51; //ціна пального
public: 
    
    void HowMuch(double distance) override{
        double t = distance / speed*60;
        cout << "Car " << endl;
        cout << "Time = " <<(int)t<<"min"<<endl;
        cout << "Price = "<<distance / fuel * priceFuel <<"UAH" << endl;
        cout << endl;
    }
};

class Bicycle :public Transport {
private:
    int speed = 25;//середня швидкість km/hod
public:

    void HowMuch(double distance) override{
        cout << "Bicycle " << endl;
        double t = distance / speed * 60;
        cout << "Time = " << (int)t << "min" << endl;
        cout << "Price = 0,00 UAH, but only one human and baggage allowance only 20kg" << endl;
        cout << endl;
    }
};

class Cart :public Transport {
private:
    int speed = 10;//середня швидкість km/hod
public:

    void HowMuch(double distance)override {
        cout << "Cart " << endl;
        double t = distance / speed * 60;
        cout << "Time = " << (int)t << "min" << endl;
        cout << "Price = 0,00 UAH, but you will be very tired" << endl;
        cout << endl;
    }
};
class Player{
public:
    void HowMuch(int distance, Transport* transport) {
        transport->HowMuch(distance);
    }
};

int main()
{

    int distance;
    cout << "Enter distance = ";
    cin >> distance;
    
    Car car;
    Bicycle bicycle;
    Cart cart;
    Player player;
    player.HowMuch(distance, &car);
    player.HowMuch(distance, &bicycle);
    player.HowMuch(distance, &cart);

   
    


    
}

