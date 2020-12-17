#include <iostream>
#include <stdlib.h>

using namespace std;

class product {
    public:
        string name;
        string description;
        float prize;

        void buy(float payment);

    private:
};

class client {
    public:
        string id; 
        string name;
        float money;

        void buy(float user_money);
        

    private:

};

void product::buy(float user_money){
    float result = user_money - prize;

    if(result < 0){
        std::cout << "You do not have money";
    }
    else if(result > 0){
        std::cout << "Your change is here $" << result;
    }
    else if(result == 0){
        std::cout << "Thank's for buy in this store";
    }


}

int main(){
    
    string username;
    float user_money;
    string productForUser;

    product *Computer = new product();
    Computer->name = "Dell Intel Core I5";
    Computer->description = "This computer is essencial for developers";
    Computer->prize = 2500.00;

    product *Console = new product();
    Console->name = "Playstation 5";
    Console->description = "this console is perfect for exclusive games";
    Console->prize = 5000.00;

    product *Smart_phone = new product();
    Smart_phone->name = "Xiaomi";
    Smart_phone->description = "this smart phone is pratical and a lot of essencial hahaha";
    Smart_phone->prize = 2000.00;
  

    cout << "Whats's your name: ";
    cin >> username;
    cout << "How much money do you have? ";
    cin >> user_money;

    client *user = new client(); 

    int id = rand() + 1000;

    user->name = username;
    user->money = user_money;
    user->id = id;

    cout << "Which product do you want?: ";
    cin >> productForUser;

    if(productForUser == "Computer"){
       Computer->buy(user->money);
    }

    else if(productForUser == "Xiaomi"){
       Smart_phone->buy(user->money);
    }

    else if(productForUser == "Console"){
       Console->buy(user->money);
    }


    return 0;
}

