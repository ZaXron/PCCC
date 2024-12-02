#pragma once
#include <string>
#include <iostream>
using namespace std;

class PC {
protected:
    string name;
    string gpu;
    string cpu;
    string ram;
    string ssd;
    double price;
public:
    PC() = default;
    PC(string _name, string _cpu, string _gpu, string _ssd, string _ram)
        :name(_name), cpu(_cpu), gpu(_gpu), ssd(_ssd), ram(_ram), price(0) {}
    virtual double getPrice();
    virtual void Print();
};

class OfficePC :public PC {
    string micro;
public:
    OfficePC() = default;
    OfficePC(string _name, string _cpu, string _gpu, string _ssd, string _ram, string _micro)
        :PC(_name, _cpu, _gpu, _ssd, _ram)
    {
        micro = _micro;
        price = 30000;
    }
    void Print() {
        PC::Print();
        cout << "Micro - " << micro << endl;
    }
    double getPrice() {
        cout << "Price of PC - 46 000" << endl;
        cout << "Price of Micro - 950" << endl;
        price += 1000;
        return price;
    }
};

class GameePC :public PC {
    string headphones;
    string keybutton;
public:
    GameePC() = default;
    GameePC(string _name, string _cpu, string _gpu, string _ssd, string _ram, string _headphones, string _keyb)
        :PC(_name, _cpu, _gpu, _ssd, _ram)
    {
        keybutton = _keyb;
        headphones = _headphones;
        price = 80000;
    }
    void Print() {
        PC::Print();
        cout << "Headphones - " << headphones << endl << "Keyboard" << keybutton;
    }
    double getPrice() {
        cout << "Price of PC - 93 000" << endl;
        cout << "Price of Headphones - 2 000" << endl;
        cout << "Price of keyboard - 3 000" << endl;
        price += 12000;
        return price;
    }
};

class HomePC :public PC {
    string webca;
public:
    HomePC() = default;
    HomePC(string _name, string _cpu, string _gpu, string _ssd, string _ram, string _webca)
        :PC(_name, _cpu, _gpu, _ssd, _ram)
    {
        webca = _webca;
        price = 40000;
    }
    void Print() {
        PC::Print();
        cout << "Web-Cam - " << webca << endl;
    }
    double getPrice() {
        cout << "Price of PC - 45 000" << endl;
        cout << "Price of Web-Cam - 1 000" << endl;
        price += 3000;
        return price;
    }
};
