#include <iostream>

using namespace std;

struct Address
{
    string city;
    string street;
    string homeNum;
    string apartamentNum;
    string index;
};

void struct_output(Address out)
{
    cout << "Город: "          << out.city          << "\n" << 
            "Улица: "          << out.street        << "\n" << 
            "Номер дома: "     << out.homeNum       << "\n" << 
            "Номер квартиры: " << out.apartamentNum << "\n" << 
            "Индекс: "         << out.index         << "\n\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Address out1{ "Москва", "Арбат", "12", "8", "123456" };

    struct_output(out1);

    Address out2{ "Ижевск", "Пушкина", "59", "143", "953769" };

    struct_output(out2);
}