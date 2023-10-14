#include <iostream>
#include <chrono>
#include <thread>
#include<unordered_map>
#include<conio.h>
#include<vector>
using namespace std;

void menu()
{
         system("Color BD");

        cout<<" _______________________________________________________________________________________"<<endl;
    cout<<"|    "<<"                                                                                   |"<<endl;
    cout<<"|    "<<"Banana Milkshake....................................................... Rs 80      |"<<endl;
    cout<<"|    "<<"Bhel Puri.............................................................. Rs 25      |"<<endl;
    cout<<"|    "<<"Butter Naan............................................................ Rs 35      |"<<endl;
    cout<<"|    "<<"Chat...................   ______________________________  ............. Rs 20      |"<<endl;
    cout<<"|    "<<"Cheese Sandwich........  (______________________________)  ............ Rs 40      |"<<endl;
    cout<<"|    "<<"Cheese Grill Sandwich...  ||                          ||  ............. Rs 80      |"<<endl;
    cout<<"|    "<<"Cheese Naan.............  ||__________________________||  ............. Rs 60      |"<<endl;
    cout<<"|    "<<"Chinese Bhel............  //^^^^^^^^^^^^^^^^^^^^^^^^^//\\\\  ............ Rs 25      |"<<endl;
    cout<<"|    "<<"Dhokla.................  //_________________________//--\\\\  ........... Rs 25      |"<<endl;
    cout<<"|    "<<"Dahi Wada.............  //_________________________//__ _\\\\  .......... Rs 30      |"<<endl;
    cout<<"|    "<<"Dahi Puri.............  |-----------//||\\\\----------|  |  |  .......... Rs 30      |"<<endl;
    cout<<"|    "<<"Frooti................  |==========/(o..o)\\=========|  |  |  .......... Rs 10      |"<<endl;
    cout<<"|    "<<"Gulab Jamun...........  | * * * * // \\../ \\\\ * * * *|  |  |  .......... Rs 20/pc   |"<<endl;
    cout<<"|    "<<"Idli Sambar...........  |========//___\\/___\\\\=======|  |  |  .......... RS 50      |"<<endl;
    cout<<"|    "<<"Jalebi................  |                           |  |  |  .......... Rs 40      |"<<endl;
    cout<<"|    "<<"Jeera Rice............  |                           |  |  |  .........  Rs 60      |"<<endl;
    cout<<"|    "<<"Kofta.................  |                           |  |  |  .......... Rs 100     |"<<endl;
    cout<<"|    "<<"Lemon Tea.............  |  __        ___ __ __      |  |  |  .........  Rs 50      |"<<endl;
    cout<<"|    "<<"Lime Juice............  | |   /\\ |\\ | | |_ |_ |\\ |  |  |  |  .........  Rs 50      |"<<endl;
    cout<<"|    "<<"Mango Milkshake.......  | |__/--\\| \\| | |__|__| \\|  |  |  |  .......... Rs 70      |"<<endl;
    cout<<"|    "<<"Maaza.................  \\___________________________\\__|__/  .......... Rs 20      |"<<endl;
    cout<<"|    "<<"Orange juice..........                                       .......... Rs 30      |"<<endl;
    cout<<"|    "<<"Pasta.................................................................. Rs 45      |"<<endl;
    cout<<"|    "<<"Paneer Tikka Masala.................................................... Rs 100     |"<<endl;
    cout<<"|    "<<"Paneer Chilli.......................................................... Rs 90      |"<<endl;
    cout<<"|    "<<"Poha................................................................... Rs 25      |"<<endl;
    cout<<"|    "<<"Samosa pav............................................................. Rs 17      |"<<endl;
    cout<<"|    "<<"Sada Dosa.............................................................. Rs 45      |"<<endl;
    cout<<"|    "<<"Schezwan Rice.......................................................... Rs 80      |"<<endl;
    cout<<"|    "<<"Tandoor Roti........................................................... Rs 25      |"<<endl;
    cout<<"|    "<<"Vada pav............................................................... Rs 16      |"<<endl;
    cout<<"|    "<<"Veg. Sandwich.......................................................... Rs 60      |"<<endl;
    cout<<"|_______________________________________________________________________________________|"<<endl;
    cout<<endl<<endl<<endl<<endl<<endl;
    system("pause");
    system("cls");
}


void check_order_contents(unordered_map<string,int>&m,unordered_map<string,int>::iterator it,unordered_map<string,int>umm,unordered_map<string,int>::iterator it2)
{
      int total=0;
    cout<<"  ________________________________________________________________"<<endl<<endl;

    cout<<"     ITEM NAME           QUANTITY         RATE       SUB TOTAL "<<endl;
    cout<<"  ________________________________________________________________"<<endl<<endl;

    for(it=m.begin(),it2=umm.begin();it!=m.end(),it2!=umm.end();++it,++it2){
        if(it->second!=0){
            total=total+(it->second)*(it2->second);
            cout<<"   "<<it->first<<"     "<<it->second<<"             "<<it2->second<<"           "<<(it->second)*(it2->second)<<endl;
        }
    }
    cout<<"  ________________________________________________________________"<<endl<<endl;

    system("pause");
    system("cls");
    }







class Guest                                         //variables: num
{
    protected:
        int num_guests;
        int id;
        string address;
        long long phone;
        int number_of_days;
        double adv_pay;
        string gnames[340];
    public:
        vector<int>food_cost;
        void get_food_cost(int cost)
        {
            food_cost.push_back(cost);
        }

        int return_food_cost()
        {
            int total = 0;
            int s = food_cost.size();
            for(int i = 0; i<s; ++i)
            {
                total = total + food_cost[i];
            }
            return total;
        }
        void clear_food_cost()
        {
            food_cost.clear();
        }

        void createGuest(double gtotal)
        {
            do
            {
                cout<<"Enter number of guests   : ";
                cin>>num_guests;
                if(num_guests<1)
                {
                    cout<<endl;
                    cout<<"Invalid Input"<<endl;
                    cout<<"Number of guests should be greater than 0"<<endl;
                    cout<<endl;
                }
            }while(num_guests<1);

            for(int i = 0 ; i < num_guests ; i++)
            {
                cout<<"Enter guest "<<i+1<<" name       : ";
                if(i ==0)
                {
                    cin.ignore();
                }
                getline(cin,gnames[i]);
            }
            cout<<"Enter the Address        : ";
               cin.ignore();
               getline(cin,address);
               do
            {
                cout<<"Enter the Number of Days : ";
                cin>> number_of_days;
                if(number_of_days<1)
                {
                    cout<<endl;
                    cout<<"Invalid Input"<<endl;
                    cout<<"Number of  days should be greater than 0"<<endl;
                    cout<<endl;
                }
            }while(number_of_days<1);
            int check;
            do{

                   check = 0;
            cout<<"Enter the Phone Number   : ";

            cin>>phone;
            if(phone<1000000000 || phone>9999999999)
            {
                check = 1;
            }
            if(check==1)
            {
                cout<<endl;
                cout<<"Please enter a 10 digit phone Number"<<endl;
                cout<<endl;
            }
            }while(check==1);
            int check98;
            do
            {
                check98 = 0;
                cout<<"Enter Advance Payment Amount (minimum Rs. 500) : ";
                cin>>adv_pay;
                if(adv_pay > gtotal*number_of_days)
                {
                    check98 = 1;
                    cout<<endl;
                    cout<<"Advance exceeds total payable amount"<<endl;
                    cout<<endl;
                }
                else if(adv_pay<500)
                {
                    check98 = 1;
                    cout<<endl;
                    cout<<"Minimum Advance to Check-In is Rs. 500"<<endl;
                    cout<<endl;
                }
            }while(check98 == 1);
            cout<<"Advance payment of "<<adv_pay<<" received, thank you !"<<endl;

        }


        int get_number_of_days()
        {
            return number_of_days;
        }


        long long get_phone()
        {
            return phone;
        }


        int get_adv_pay()
        {
            return adv_pay;
        }

        void change_phone(long long x)
        {
            phone = x;
        }
};

class Room : public Guest
{
    protected:
        string rtype;
        string rsize;
        int ac;
        int rno;
        double rent;
        int status;
        int total;
        int pricetype;
        int pricesize;
        int priceac;

        int count110 = 10;
        int count111 = 20;
        int count120 = 5;
        int count121 = 10;
        int count131 = 5;
        int count210 = 5;
        int count211 = 10;
        int count220 = 5;
        int count221 = 5;
        int count231 = 5;
        int count310 = 5;
        int count311 = 5;
        int count320 = 2;
        int count321 = 3;
        int count331 = 5;
        int totalcount = 100;

    public:
        Room()
        {
            rno = 101;
            rsize = "small";
            rtype = "comfort";
            ac = 1;
            status = 0;
            priceac = 1000;
            pricesize = 1000;
            pricetype = 1000;
            total = priceac + pricesize + pricetype;
        }

        Room(Room &obj, int s, int t, int a)
        {
            if(obj.rno % 100 == 10)
            {
                rno = obj.rno + 91;
            }
            else
            {
                rno = obj.rno + 1;
            }
            if(s == 1)
            {
                rsize = "small";
                pricesize = 1000;
            }
            else if (s == 2)
            {
                rsize = "medium";
                pricesize = 1500;
            }
            else if (s == 3)
            {
                rsize = "large";
                pricesize = 2000;
            }

            if(t == 1)
            {
                rtype = "comfort";
                pricetype = 1000;
            }
            else if (t == 2)
            {
                rtype = "deluxe";
                pricetype = 1500;
            }
            else if (t == 3)
            {
                rtype = "premium";
                pricetype = 2000;
            }

            if(a == 0)
            {
                ac = 0;
                priceac = 0;
            }
            else if(a == 1)
            {
                ac = 1;
                priceac = 1000;
            }
            total = pricesize + pricetype + priceac;
        }
        int checkStatus()
        {
            if(status==0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }

        /*double know_rsize()
        {
            double rs;
                if(rsize == "small")
                {
                    rs = 1;
                }
                else if(rsize == "medium")
                {
                    rs = 1.5;
                }
                else if(rsize == "large")
                {
                    rs = 2;
                }
                return rs;
        }

        double know_rtype()
        {
            double rt;
                if(rtype == "comfort")
                {
                    rt = 1;
                }
                else if(rtype == "deluxe")
                {
                    rt = 1.5;
                }
                else if(rtype == "premium")
                {
                    rt = 2;
                }
                return rt;
        }



        double know_ac()
        {
            double ra;
                if(ac == 0)
                {
                    ra = 0;
                }
                else if(ac == 1)
                {
                    ra = 1;
                }
                return ra;
        } */

        double calc_total(double rumsize, double rumtype, double rumac)
        {
            double totalam = 1000*rumsize + rumtype*1000 + 1000*rumac;
            return totalam;
        }

        void display()
        {
            cout<<"Guest ID : "<<rno<<endl;
            cout<<"Guest Names "<<endl;
            for(int i = 0 ; i < num_guests ; i++)
            {
                cout<<"  Guest "<<i+1<<" Name : "<<gnames[i]<<endl;
            }
            cout<<"Guest Address : "<<address<<endl;
            cout<<"Phone number : "<<phone<<endl;
            cout<<"Number of Days booked : "<<number_of_days<<endl;
            cout<<"Advance Payment : "<<
            adv_pay<<endl;
            cout<<"Room Number : "<<rno<<endl;
            string str;
            if(ac==1)
            {
                str="AC";
            }
            else
            {
                str="Non-AC";
            }
            cout<<"Room Details : "<<rsize<<" "<<rtype<<" "<<str<<endl;
            cout<<"Room cost : Rs. "<<total<<endl;
        }

        void rcheckout()
        {
            status = 0; //available now
            phone = 0;
            num_guests = 0;
            address.clear();
            number_of_days = 0;
            adv_pay = 0;
            for(int j = 0 ; j < 340 ; j++)
            {
                gnames[j].clear();
            }
        }

        void changeStatus()
        {
            if(status==1)
            {
                status=0;
            }
            else
            {
                status=1;
            }
        }

        string iwantroomsize()
        {
            string roomsize = rsize;
            return roomsize;
        }
        string iwantroomtype()
        {
            string roomtype = rtype;
            return roomtype;
        }
        int iwantac()
        {
            int iwantac = ac;
            return iwantac;
        }
        int get_rno()
        {
            int iwantrno = rno;
            return iwantrno;
        }
        int get_total()
        {
            int iwanttotal = total;
            return iwanttotal;
        }

};

class Guest_in_room : public Room
{
    public:

        int smallCheck(Room objarr[])
        {
            int i = 0;
            int found = 0;
            while(i < 100 && found == 0)
            {
                if(objarr[i].iwantroomsize() == "small" && objarr[i].checkStatus() == 0)
                {
                    found = 1;
                }
                i++;
            }
            if(found == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        int mediumCheck(Room objarr[])
        {
            int i = 0;
            int found = 0;
            while(i < 100 && found == 0)
            {
                if(objarr[i].iwantroomsize() == "medium" && objarr[i].checkStatus() == 0)
                {
                    found = 1;
                }
                i++;
            }
            if(found == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        int largeCheck(Room objarr[])
        {
            int i = 0;
            int found = 0;
            while(i < 100 && found == 0)
            {
                if(objarr[i].iwantroomsize() == "large" && objarr[i].checkStatus() == 0)
                {
                    found = 1;
                }
                i++;
            }
            if(found == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

    int comfortCheck(Room objarr[])
    {
        int i = 0;
        int found = 0;
        while(i < 100 && found == 0)
        {
            if(objarr[i].iwantroomtype() == "comfort" && objarr[i].checkStatus() == 0)
            {
                found = 1;
            }
            i++;
        }
        if(found == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }


    int deluxeCheck(Room objarr[])
    {
        int i = 0;
        int found = 0;
        while(i < 100 && found == 0)
        {
            if(objarr[i].iwantroomtype() == "deluxe" && objarr[i].checkStatus() == 0)
            {
                found = 1;
            }
            i++;
        }
        if(found == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }


    int premiumCheck(Room objarr[])
    {
        int i = 0;
        int found = 0;
        while(i < 100 && found == 0)
        {
            if(objarr[i].iwantroomtype() == "premium" && objarr[i].checkStatus() == 0)
            {
                found = 1;
            }
            i++;
        }
        if(found == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
        void checkin(Room objarr[]) //if multiple peeps come together but they want diff rooms then they are considered seperate guests.
        {

            string rumsize;
            int ihavefoundroom = 0;
            int check1;
            int check2;
            int check3;
            string rumtype;
            int airconditioner;
            double rs, rt, ra;


            cout<<"Small comfort AC      : Rs. 3000"<<endl;
            cout<<"Small comfort Non-AC  : Rs. 2000"<<endl;
            cout<<"Small deluxe AC       : Rs. 3500"<<endl;
            cout<<"Small deluxe Non-AC   : Rs. 2500"<<endl;
            cout<<"Small premium AC      : Rs. 4000"<<endl;
            cout<<"Medium comfort AC     : Rs. 3500"<<endl;
            cout<<"Medium comfort Non-AC : Rs. 2500"<<endl;
            cout<<"Medium deluxe AC      : Rs. 4000"<<endl;
            cout<<"Medium deluxe Non-AC  : Rs. 3000"<<endl;
            cout<<"Medium premium AC     : Rs. 4500"<<endl;
            cout<<"Large comfort AC      : Rs. 4000"<<endl;
            cout<<"Large comfort Non-AC  : Rs. 3000"<<endl;
            cout<<"Large deluxe AC       : Rs. 4500"<<endl;
            cout<<"Large deluxe Non-AC   : Rs. 3500"<<endl;
            cout<<"Large premium AC      : Rs. 5000"<<endl;
            cout<<endl;
            do
            {
                check1=0;
                cout<<"Enter Room size (small / medium / large) : ";
                cin>>rumsize;


                if(rumsize == "small")
                {
                    rs = 1;
                }
                else if(rumsize == "medium")
                {
                    rs = 1.5;
                }
                else if(rumsize == "large")
                {
                    rs = 2;
                }
                else if(rumsize != "small" && rumsize != "medium" && rumsize != "large")
                {
                    check1 = 1;
                    cout<<endl;
                    cout<<"Invalid input"<<endl;
                    cout<<endl;
                }
            }while(check1 == 1);
            do
            {
                check2=0;
                cout<<"Enter Room Type (comfort / deluxe / premium) : ";
                cin>>rumtype;


                if(rumtype == "comfort")
                {
                    rt = 1;
                }
                else if(rumtype == "deluxe")
                {
                    rt = 1.5;
                }
                else if(rumtype == "premium")
                {
                    rt = 2;
                }
                else if(rumtype != "comfort" && rumtype != "deluxe" && rumtype != "premium")
                {
                    check2 = 1;
                    cout<<endl;
                    cout<<"Invalid input"<<endl;
                    cout<<endl;
                }
            }while(check2 == 1);

            int check8 = 7;

            do
            {
                check3=0;
                if(rumtype == "comfort" || rumtype == "deluxe")
                {
                        cout<<"Do you want AC ? (0 : Non-AC / 1 : AC) : ";
                        cin>>airconditioner;
                }

                if(rumtype == "premium")
                {
                    airconditioner = 1;
                }

                if(airconditioner == 0)
                {
                    ra = 0;
                    check8 = 0;
                }
                else if(airconditioner == 1)
                {
                    ra = 1;
                    check8 = 0;
                }
                else if(check8 == 7)
                {
                    check8 = 1;
                    cout<<endl;
                    cout<<"Invalid input"<<endl;
                    cout<<endl;
                }
            }while(check8 == 7);
            double total1;
            total1 = calc_total(rs, rt, ra);
            cout<<"Room cost per day = "<<total1<<endl;


            if(rumsize == "small"  && rumtype == "comfort" && airconditioner == 1)
            {
                for(int i=0; i<=19; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count111--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;

                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }

            }
            else if(rumsize == "small"  && rumtype == "comfort" && airconditioner == 0)
            {
                for(int i=20; i<=29; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count110--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;

                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "small"  && rumtype == "deluxe" && airconditioner == 1)
            {
                for(int i=30; i<=39; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count121--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;

                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "small"  && rumtype == "deluxe" && airconditioner == 0)
            {
                for(int i=40; i<=44; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count120--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "small"  && rumtype == "premium" )
            {
                for(int i=45; i<=49; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count131--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "medium"  && rumtype == "comfort" && airconditioner == 1)
            {
                for(int i=50; i<=59; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count211--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "medium"  && rumtype == "comfort" && airconditioner == 0)
            {
                for(int i=60; i<=64; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count210--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "medium"  && rumtype == "deluxe" && airconditioner == 1)
            {
                for(int i=65; i<=69; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count221--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "medium"  && rumtype == "deluxe" && airconditioner == 0)
            {
                for(int i=70; i<=74; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count220--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "medium"  && rumtype == "premium" )
            {
                for(int i=75; i<=79; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count231--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "large"  && rumtype == "comfort" && airconditioner == 1)
            {
                for(int i=80; i<=84; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count311--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "large"  && rumtype == "comfort" && airconditioner == 0)
            {
                for(int i=85; i<=89; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count310--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "large"  && rumtype == "deluxe" && airconditioner == 1)
            {
                for(int i=90; i<=92; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count321--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "large"  && rumtype == "deluxe" && airconditioner == 0)
            {
                for(int i=93; i<=94; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count320--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else if(rumsize == "large"  && rumtype == "premium" )
            {
                for(int i=95; i<=99; i++)
                {
                    if(objarr[i].checkStatus() == 0)
                    {
                        objarr[i].changeStatus();
                        objarr[i].createGuest(total1);
                        count331--;
                        id = objarr[i].get_rno();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        ihavefoundroom = 1;
                        break;
                    }
                }
                if(ihavefoundroom == 0)
                {
                    cout<<endl;
                    cout<<"Sorry, your Desired Room is unavailable"<<endl;
                    cout<<"Please try some different type of room"<<endl;
                    cout<<endl;
                }
            }
            else
            {
                cout<<"Invalid Input"<<endl;
            }

        }


        void checkout(Room objarr[])
        {
            int gid;
            cout<<"Enter guest ID : ";
            cin>>gid;
            int check7 = 0;
            for(int i=0;i<100;i++)
            {
                if(objarr[i].get_rno() == gid && objarr[i].checkStatus() == 1)
                {
                    int j = objarr[i].get_total();
                    int d = objarr[i].get_number_of_days();
                    int p = objarr[i].get_adv_pay();
                    int f = objarr[i].return_food_cost();
                    cout<<"Number of days stayed  : "<<d<<endl;
                    cout<<"Room cost per day      : "<<j<<endl;
                    cout<<"Total cost of stay     : "<<(j*d)<<endl;
                    cout<<"Food Cost              : "<<f<<endl;
                    cout<<"Advance Paid           : "<<p<<endl;
                    cout<<"Payable Amount         : "<<(j * d) - p + f<<endl;
                    objarr[i].rcheckout();
                    objarr[i].clear_food_cost();
                    string rumsize = objarr[i].iwantroomsize();
                    string rumtype = objarr[i].iwantroomtype();
                    int airconditioner = objarr[i].iwantac();

                    if(rumsize == "small"  && rumtype == "comfort" && airconditioner == 1)
                    {
                        count111++;
                    }
                    else if(rumsize == "small"  && rumtype == "comfort" && airconditioner == 0)
                    {
                        count110++;
                    }
                    else if(rumsize == "small"  && rumtype == "deluxe" && airconditioner == 1)
                    {
                        count121++;
                    }
                    else if(rumsize == "small"  && rumtype == "deluxe" && airconditioner == 0)
                    {
                        count120++;
                    }
                    else if(rumsize == "small"  && rumtype == "premium" )
                    {
                        count131++;
                    }
                    else if(rumsize == "medium"  && rumtype == "comfort" && airconditioner == 1)
                    {
                        count211++;
                    }
                    else if(rumsize == "medium"  && rumtype == "comfort" && airconditioner == 0)
                    {
                        count210++;
                    }
                    else if(rumsize == "medium"  && rumtype == "deluxe" && airconditioner == 1)
                    {
                        count221++;
                    }
                    else if(rumsize == "medium"  && rumtype == "deluxe" && airconditioner == 0)
                    {
                        count220++;
                    }
                    else if(rumsize == "medium"  && rumtype == "premium" )
                    {
                        count231++;
                    }
                    else if(rumsize == "large"  && rumtype == "comfort" && airconditioner == 1)
                    {
                        count311++;
                    }
                    else if(rumsize == "large"  && rumtype == "comfort" && airconditioner == 0)
                    {
                        count310++;
                    }
                    else if(rumsize == "large"  && rumtype == "deluxe" && airconditioner == 1)
                    {
                        count321++;
                    }
                    else if(rumsize == "large"  && rumtype == "deluxe" && airconditioner == 0)
                    {
                        count320++;
                    }
                    else if(rumsize == "large"  && rumtype == "premium" )
                    {
                        count331++;
                    }

                    check7 = 1;
                    break;
                }
            }
            if(check7 == 1)
            {
            cout<<endl;
            cout<<"Check Out Successful"<<endl;
            cout<<"We hope you enjoyed your Stay"<<endl;
            cout<<"Please Visit Again :)"<<endl;
            cout<<endl;
            }
            else
            {
            cout<<endl;
            cout<<"Guest not found !"<<endl;
            cout<<endl;
            }
        }

        void summary(Room objarr[])
        {
            int ihavefoundguest = 0,gid;
            cout<<"Enter guest ID : ";
            cin>>gid;
            for(int i=0;i<100;i++)
            {
                int q = objarr[i].get_rno();
                int p = objarr[i].get_phone();
                if(q == gid && p != 0)
                {
                    cout<<endl;
                    cout<<"GUEST DETAILS "<<endl<<endl;
                    objarr[i].display();
                    ihavefoundguest = 1;
                    break;
                }
            }

            if(ihavefoundguest == 0)
            {
                cout<<endl<<"Guest not found !"<<endl<<endl;
            }
        }


        void showroomstatus(Room objarr[])
        {
            for(int i=0;i<100;i++)
            {
                int n;
                if(objarr[i].checkStatus()==0)
                {
                    n=0;
                }
                else
                {
                    n=1;
                }
                if(n==0)
                {
                int k = objarr[i].get_rno();
                cout<<"Room Number "<<k<<" : Available"<<endl;
                }
                else
                {
                int h = objarr[i].get_rno();
                cout<<"Room Number "<<h<<" : Unavailable"<<endl;
                }
            }
        }

        void countRooms(Room objarr[])
        {
            cout<<endl;
            cout<<"Number of available rooms : "<<endl;
            cout<<endl;

            cout<<"Small comfort AC      : "<<count111<<endl;
            cout<<"Small comfort Non-AC  : "<<count110<<endl;
            cout<<"Small deluxe AC       : "<<count121<<endl;
            cout<<"Small deluxe Non-AC   : "<<count120<<endl;
            cout<<"Small premium AC      : "<<count131<<endl;
            cout<<"Medium comfort AC     : "<<count211<<endl;
            cout<<"Medium comfort Non-AC : "<<count210<<endl;
            cout<<"Medium deluxe AC      : "<<count221<<endl;
            cout<<"Medium deluxe Non-AC  : "<<count220<<endl;
            cout<<"Medium premium AC     : "<<count231<<endl;
            cout<<"Large comfort AC      : "<<count311<<endl;
            cout<<"Large comfort Non-AC  : "<<count310<<endl;
            cout<<"Large deluxe AC       : "<<count321<<endl;
            cout<<"Large deluxe Non-AC   : "<<count320<<endl;
            cout<<"Large premium AC      : "<<count331<<endl;
        }
};











    int food_service(Room objarr[])
    {
    int x;
    unordered_map<string,int>m;
    unordered_map<string,int>::iterator it;
    unordered_map<string,int>umm;
    unordered_map<string,int>::iterator it2;



    umm["Banana Milkshake     "]=80;
    umm["Bhel Puri            "]=25;
    umm["Butter Naan          "]=35;
    umm["Chat                 "]=20;
    umm["Cheese Sandwich      "]=40;
    umm["Cheese Grill Sandwich"]=80;
    umm["Cheese Naan          "]=60;
    umm["Chinese Bhel         "]=25;
    umm["Dhokla               "]=25;
    umm["Dahi Wada            "]=30;
    umm["Dahi Puri            "]=30;
    umm["Frooti               "]=10;
    umm["Gulab Jamun          "]=20;
    umm["Idli Sambar          "]=50;
    umm["Jalebi               "]=40;
    umm["Jeera Rice           "]=60;
    umm["Kofta                "]=100;
    umm["Lemon Tea            "]=50;
    umm["Lime Juice           "]=50;
    umm["Mango Milkshake      "]=70;
    umm["Maaza                "]=20;
    umm["Orange juice         "]=30;
    umm["Pasta                "]=45;
    umm["Paneer Tikka Masala  "]=100;
    umm["Paneer Chilli        "]=90;
    umm["Poha                 "]=25;
    umm["Samosa pav           "]=17;
    umm["Sada Dosa            "]=45;
    umm["Schezwan Rice        "]=80;
    umm["Tandoor Roti         "]=25;
    umm["Vada pav             "]=16;
    umm["Veg. Sandwich        "]=60;







    m["Banana Milkshake     "]=0;
    m["Bhel Puri            "]=0;
    m["Butter Naan          "]=0;
    m["Chat                 "]=0;
    m["Cheese Sandwich      "]=0;
    m["Cheese Grill Sandwich"]=0;
    m["Cheese Naan          "]=0;
    m["Chinese Bhel         "]=0;
    m["Dhokla               "]=0;
    m["Dahi Wada            "]=0;
    m["Dahi Puri            "]=0;
    m["Frooti               "]=0;
    m["Gulab Jamun          "]=0;
    m["Idli Sambar          "]=0;
    m["Jalebi               "]=0;
    m["Jeera Rice           "]=0;
    m["Kofta                "]=0;
    m["Lemon Tea            "]=0;
    m["Lime Juice           "]=0;
    m["Mango Milkshake      "]=0;
    m["Maaza                "]=0;
    m["Orange juice         "]=0;
    m["Pasta                "]=0;
    m["Paneer Tikka Masala  "]=0;
    m["Paneer Chilli        "]=0;
    m["Poha                 "]=0;
    m["Samosa pav           "]=0;
    m["Sada Dosa            "]=0;
    m["Schezwan Rice        "]=0;
    m["Tandoor Roti         "]=0;
    m["Vada pav             "]=0;
    m["Veg. Sandwich        "]=0;

            long long total =0;
            int gid;
            system("cls");
            cout<<"Enter guest ID : ";
            cin>>gid;
            int check11 = 0;
            for(int i=0;i<100;i++)
            {
                int p = objarr[i].get_phone();

                if(objarr[i].get_rno() == gid && objarr[i].checkStatus() == 1 && p!=0)
                {
                    objarr[i].get_food_cost(total);
                    check11 = 1;
                }
            }
            if(check11 == 1)
            {
                system("cls");
            }
            if(check11 == 0)
            {
                cout<<endl;
                cout<<"Guest not found !"<<endl;
                cout<<endl;
                x = 0;
                return x;

            }



                cout<<"Loading Menu Please wait.........."<<endl;
    this_thread::sleep_for(chrono::seconds(2));

    menu();


    cout<<"PLEASE SELECT YOUR ORDER FROM THE MENU"<<endl<<endl;


    string s;
    do{
    int quantity;
    cout<<endl;
    cout<<"Press M to View Menu Again"<<endl;
    cout<<"Press C to check items in Your Cart"<<endl;
    cout<<"Press E to Finish the Order"<<endl;
    cin>>s;
    if(s=="C"){
    system("cls");
    check_order_contents(m,it,umm,it2);
    }
    else if(s=="M"){
    system("cls");
            menu();
    }
    else if(s=="Banana Milkshake" || s=="banana milkshake" ||s=="Bananamilkshake" ||  s=="bananamilkshake" || s=="BananaMilkshake"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
        m["Banana Milkshake     "]= m["Banana Milkshake     "]+quantity;
    }
    else if(s=="Bhel Puri" || s=="Bhelpuri"||s=="bhelpuri"||s=="BhelPuri"|| s=="bhel puri"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Bhel Puri            "]= m["Bhel Puri            "]+quantity;
    }
    else if(s=="Butter Naan"|| s=="ButterNaan"|| s=="butternaan"||s=="butter naan"||s=="Butternaaan"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Butter Naan          "]= m["Butter Naan          "]+quantity;
    }
    else if(s=="Chat" || s=="chat"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Chat                 "]= m["Chat                 "]+quantity;
    }
    else if(s=="Cheese Sandwich" || s=="Cheesesandwich" || s=="cheesesandwich" || s=="CheeseSandwich" || s=="cheese sandwich"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Cheese Sandwich      "]= m["Cheese Sandwich      "]+quantity;
    }
    else if(s=="Cheese Grill Sandwich" || s=="cheesegrillsandwich" || s=="CheeseGrillSandwich" || s=="Cheesegrillsandwich" || s=="cheese grill sandwich"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Cheese Grill Sandwich"]= m["Cheese Grill Sandwich"]+quantity;

    }
    else if(s=="cheese naan" || s=="Cheese Naan"|| s=="CheeseNaan" || s=="Cheesenaan" || s=="cheesenaan"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Cheese Naan          "]= m["Cheese Naan          "]+quantity;
    }
    else if(s=="Chinese Bhel" || s=="Chinesebhel"|| s=="chinese bhel" || s=="chinesebhel"||s=="ChineseBhel"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Chinese Bhel         "]= m["Chinese Bhel         "]+quantity;
    }
    else if(s=="Dhokla"||s=="dhokla"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Dhokla               "]= m["Dhokla               "]+quantity;
    }
    else if(s=="Dahi Wada"|| s=="dahiwada"||s=="DahiWada"||s=="Dahiwada"||s=="dahi wada"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Dahi Wada            "]= m["Dahi Wada            "]+quantity;
    }
    else if(s=="Dahi Puri"||s=="Dahipuri"||s=="DahiPuri"||s=="dahipuri"||s=="dahi puri"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Dahi Puri            "]= m["Dahi Puri            "]+quantity;
    }
    else if(s=="Frooti"||s=="frooti"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Frooti               "]= m["Frooti               "]+quantity;
    }
    else if(s=="Gulab Jamun"||s=="gulabjamun"||s=="GulabJamun"||s=="gulab jamun"||s=="Gulabjamun"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Gulab Jamun          "]= m["Gulab Jamun          "]+quantity;
    }
    else if(s=="Idli Sambar"||s=="Idlisambar"||s=="idlisambar"||s=="IdliSambar"||s=="idli sambar"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Idli Sambar          "]= m["Idli Sambar          "]+quantity;
    }
    else if(s=="Jalebi"||s=="jalebi"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Jalebi               "]= m["Jalebi               "]+quantity;
    }
    else if(s=="Jeera Rice"||s=="JeeraRice"||s=="jeerarice"||s=="jeera rice"||s=="Jeerarice"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Jeera Rice           "]= m["Jeera Rice           "]+quantity;
    }
    else if(s=="Kofta"||s=="kofta"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Kofta                "]= m["Kofta                "]+quantity;
    }
    else if(s=="Lemon Tea"||s=="LemonTea"||s=="lemon tea"||s=="lemontea"||s=="Lemontea"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Lemon Tea            "]= m["Lemon Tea            "]+quantity;
    }
    else if(s=="Lime Juice"||s=="limejuice"||s=="LimeJuice"||s=="Limejuice"||s=="lime juice"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Lime Juice           "]= m["Lime Juice           "]+quantity;
    }
    else if(s=="Mango Milkshake"||s=="MangoMilkshake"||s=="Mangomilkshake"||s=="mangomilkshake"||s=="mango milkshake"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Mango Milkshake      "]= m["Mango Milkshake      "]+quantity;
    }
    else if(s=="maaza"||s=="Maaza"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Maaza                "]= m["Maaza                "]+quantity;
    }
    else if(s=="OrangeJuice"||s=="Orange Juice"||s=="orangejuice"||s=="ornge juice"||s=="Orangejuice"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Orange juice         "]= m["Orange juice         "]+quantity;
    }
    else if(s=="Pasta"||s=="pasta"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Pasta                "]= m["Pasta                "]+quantity;
    }
    else if(s=="paneertikkamasala"||s=="Paneer Tikka Masala"||s=="paneer tikka masala"||s=="Paneertikkamasala"||s=="Paneer tikka masala"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Paneer Tikka Masala  "]= m["Paneer Tikka Masala  "]+quantity;
    }
    else if(s=="Paneer Chilli"||s=="PaneerChilli"||s=="paneerchilli"||s=="Paneerchilli"||s=="paneer chilli"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Paneer Chilli        "]= m["Paneer Chilli        "]+quantity;
    }
    else if(s=="Poha"||s=="poha"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Poha                 "]= m["Poha                 "]+quantity;
    }
    else if(s=="Samosa Pav"||s=="samosapav"||s=="SamosaPav"||s=="Samosapav"||s=="samosa pav"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Samosa pav           "]= m["Samosa pav           "]+quantity;
    }
    else if(s=="Sadadosa"||s=="Sada Dosa"||s=="SadaDosa"||s=="sadadosa"||s=="sada dosa"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Sada Dosa            "]= m["Sada Dosa            "]+quantity;
    }
    else if(s=="Schezwan Rice"||s=="Schezwanrice"||s=="SchezwanRice"||s=="schezwanrice"||s=="schezwan rice"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Schezwan Rice        "]= m["Schezwan Rice        "]+quantity;
    }
    else if(s=="Tandoori Roti"||s=="TandooriRoti"||s=="Tandooriroti"||s=="tandooriroti"||s=="tandoori roti"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Tandoor Roti         "]= m["Tandoor Roti         "]+quantity;
    }
    else if(s=="Vada Pav"||s=="Vadapav"||s=="VadaPav"||s=="vadapav"||s=="vada pav"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Vada pav             "]= m["Vada pav             "]+quantity;
    }
    else if(s=="VegSandwich"||s=="Vegsandwich"||s=="Veg Sandwich"||s=="vegsandwich"||s=="veg sandwich"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    m["Veg. Sandwich        "]= m["Veg. Sandwich        "]+quantity;
    }
    else{
        cout<<endl;
        cout<<"Invalid Input"<<endl;
        cout<<endl;
    }
    }while(s!="E");



     system("cls");


    cout<<endl<<endl;
    cout<<"  YOUR ORDER : "<<endl;
    cout<<"  ________________________________________________________________"<<endl<<endl;

    cout<<"     ITEM NAME           QUANTITY         RATE       SUB TOTAL "<<endl;
    cout<<"  ________________________________________________________________"<<endl<<endl;

    for(it=m.begin(),it2=umm.begin();it!=m.end(),it2!=umm.end();++it,++it2){
        if(it->second!=0){
            total=total+(it->second)*(it2->second);
            cout<<"   "<<it->first<<"     "<<it->second<<"             "<<it2->second<<"           "<<(it->second)*(it2->second)<<endl;
        }
    }
    cout<<"  ________________________________________________________________"<<endl<<endl;
    cout<<"                                                      TOTAL "<<endl;
    cout<<"                                               -------------------"<<endl;

    cout<<"                                                     Rs : "<<total<<endl;
    cout<<"                                               -------------------"<<endl;


            x = 1;

    for(int i=0;i<100;i++)
    {
        int p = objarr[i].get_phone();

        if(objarr[i].get_rno() == gid && objarr[i].checkStatus() == 1 && p!=0)
        {
            objarr[i].get_food_cost(total);
        }
    }





            getch();




/*
for(it2=v.begin();it2!=v.end();it2++){
    cout<<it2->first<<"  "<<it2->second<<endl;
}

*/
    system("cls");

        return x;
            }



















int main()
{
    //Creating different types of rooms
    Room obj[100];
    int i;
    for( i = 1 ; i <100 ; i++)
    {
        if(i<=19)
        {
            obj[i] = Room(obj[i-1], 1, 1, 1);
        }
        else if(i>19 && i<=29)
        {
            obj[i] = Room(obj[i-1], 1, 1, 0);
        }
        else if(i>29 && i<=39)
        {
            obj[i] = Room(obj[i-1], 1, 2, 1);
        }
        else if(i>39 && i<=44)
        {
            obj[i] = Room(obj[i-1], 1, 2, 0);
        }
        else if(i>44 && i<=49)
        {
            obj[i] = Room(obj[i-1], 1, 3, 1);
        }
        else if(i>49 && i<=59)
        {
            obj[i] = Room(obj[i-1], 2, 1, 1);
        }
        else if(i>59 && i<=64)
        {
            obj[i] = Room(obj[i-1], 2, 1, 0);
        }
        else if(i>64 && i<=69)
        {
            obj[i] = Room(obj[i-1], 2, 2, 1);
        }
        else if(i>69 && i<=74)
        {
            obj[i] = Room(obj[i-1], 2, 2, 0);
        }
        else if(i>74 && i<=79)
        {
            obj[i] = Room(obj[i-1], 2, 3, 1);
        }
        else if(i>79 && i<=84)
        {
            obj[i] = Room(obj[i-1], 3, 1, 1);
        }
        else if(i>84 && i<=89)
        {
            obj[i] = Room(obj[i-1], 3, 1, 0);
        }
        else if(i>89 && i<=92)
        {
            obj[i] = Room(obj[i-1], 3, 2, 1);
        }
        else if(i>92 && i<=94)
        {
            obj[i] = Room(obj[i-1], 3, 2, 0);
        }
        else
        {
            obj[i] = Room(obj[i-1], 3, 3, 1);
        }
    }







   // checking if status is changing properly and then checking available
  /*     obj[0].changeStatus();
    for(int i = 0 ; i < 100 ; i++)
    {
        if(obj[i].checkStatus() == 1)
        {
            obj[i].display();

        }
    }
    */
    Guest_in_room guested;


   // checking if status is changing properly and then checking available
       //obj[0].changeStatus();
    /*for(int i = 0 ; i < 100 ; i++)
    {
        if(obj[i].checkStatus() == 1)
        {
            obj[i].display();

        }
    }*/

    cout<<"Welcome to the hotel"<<endl;
    cout<<endl;
    int choice = 1;
    while(choice != 7)
    {
        system("Color 0F");
        cout<<"-------------------------------------"<<endl;
        cout<<"| HOME MENU :                       |"<<endl;
        cout<<"| 1. Check in                       |"<<endl;
        cout<<"| 2. Check out                      |"<<endl;
        cout<<"| 3. Show room status               |"<<endl;
        cout<<"| 4. Search guest                   |"<<endl;
        cout<<"| 5. Show number of available rooms |"<<endl;
        cout<<"| 6. Food Service                   |"<<endl;
        cout<<"| 7. Exit                           |"<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<endl;
        cout<<"Enter choice (from home menu) : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                system("cls");
                system("Color F0");
                cout<<endl;
                cout<<"CHECKING IN"<<endl;
                cout<<endl;
                guested.checkin(obj);
                cout<<endl;
                getch();
                system("cls");
            }
            break;

            case 2:
            {
                system("cls");
                system("Color F0");
                cout<<endl;
                cout<<"CHECKING OUT"<<endl;
                cout<<endl;
                 guested.checkout(obj);
                 cout<<endl;
                 getch();
                 system("cls");
            }
            break;

            case 3:
            {
                system("cls");
                system("Color F0");
                cout<<endl;
                cout<<"SHOWING ROOM STATUS"<<endl;
                cout<<endl;
                guested.showroomstatus(obj);
                cout<<endl;
                getch();
                system("cls");
            }
            break;

            case 4:
            {
                system("cls");
                system("Color F0");
                cout<<endl;
                cout<<"SEARCHING GUEST"<<endl;
                cout<<endl;
                guested.summary(obj);
                getch();
                system("cls");
            }
            break;

            case 5:
            {
                system("cls");
                system("Color F0");

                cout<<endl;
                cout<<"SHOWING NUMBER OF DIFFERENT TYPES OF AVAILABLE ROOMS"<<endl;
                cout<<endl;
                guested.countRooms(obj);
                cout<<endl;
                getch();
                system("cls");

            }
            break;

            case 6:
                   food_service(obj);
                   getch();
                   system("cls");
            break;

            case 7:
            {
                system("cls");
                system("Color 4F");
                string exiting;
                cout<<endl<<endl<<endl<<endl;
                cout<<"Are you sure you want to EXIT? Enter 'y' to EXIT and any other key to cancel : ";
                cin>>exiting;
                if(exiting != "y")
                {
                    choice = 1;
                }
                else
                {
                    cout<<endl;
                    cout<<"Exit Successful"<<endl;
                    cout<<endl;
                }
            }
            break;

            default:
            {
                cout<<endl;
                cout<<"Invalid choice"<<endl;
                cout<<endl;
            }
        }
    }
    return 0;
}

