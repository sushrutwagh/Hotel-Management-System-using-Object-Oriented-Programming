#include<iostream>
#include<chrono>
#include<thread>
#include<unordered_map>
#include<conio.h>
#include<vector>
using namespace std;

void clearScreen(){
    system("cls");
}

void pauseScreen(){
    system("pause");
}

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
    pauseScreen();
    clearScreen();
}

long long showCurrentOrderList(unordered_map<string,pair<int,int>>&menuItem,unordered_map<string,pair<int,int>>::iterator currentItem )
{
    long long total=0;
    cout<<"  ________________________________________________________________"<<endl<<endl;
    cout<<"     ITEM NAME           QUANTITY         RATE       SUB TOTAL "<<endl;
    cout<<"  ________________________________________________________________"<<endl<<endl;

    for(currentItem =menuItem.begin();currentItem !=menuItem.end(); ++currentItem){
        if(currentItem ->second.second!=0){
            total=total+(currentItem ->second.first)*(currentItem ->second.second);
            cout<<"   "<<currentItem ->first<<"     "<<currentItem ->second.second<<"             "<<currentItem ->second.first<<"           "<<(currentItem ->second.first)*(currentItem ->second.second)<<endl;
        }
    }
    cout<<"  ________________________________________________________________"<<endl<<endl;
    return total;
    }


class Guest
{
    protected:
        int totalGuestCount;
        int id;
        string address;
        long long phone;
        int numberOfDays;
        double advancePayment;
        string guestNames[340];
    public:
        vector<int>foodCost;
        void addFoodCost(int cost)
        {
            foodCost.push_back(cost);
        }

        int getFoodCost()
        {
            int total = 0;
            int itemCount = foodCost.size();
            for(int currentItem = 0; currentItem<itemCount; ++currentItem)
            {
                total = total + foodCost[currentItem];
            }
            return total;
        }
        void clearFoodCost()
        {
            foodCost.clear();
        }

        void createGuest(double dailyRent)
        {
            do
            {
                cout<<"Enter number of guests   : ";
                cin>>totalGuestCount;
                if(totalGuestCount<1)
                {
                    cout<<endl;
                    cout<<"Invalid Input"<<endl;
                    cout<<"Number of guests should be greater than 0"<<endl;
                    cout<<endl;
                }
            }while(totalGuestCount<1);

            for(int currentGuestCount = 0 ; currentGuestCount < totalGuestCount ; currentGuestCount++)
            {
                cout<<"Enter guest "<<currentGuestCount+1<<" name       : ";
                if(currentGuestCount ==0)
                {
                    cin.ignore();
                }
                getline(cin,guestNames[currentGuestCount]);
            }
            cout<<"Enter the Address        : ";
               cin.ignore();
               getline(cin,address);
               do
            {
                cout<<"Enter the Number of Days : ";
                cin>> numberOfDays;
                if(numberOfDays<1)
                {
                    cout<<endl;
                    cout<<"Invalid Input"<<endl;
                    cout<<"Number of  days should be greater than 0"<<endl;
                    cout<<endl;
                }
            }while(numberOfDays<1);
            bool phonoNumberValidity;
            do{
                   phonoNumberValidity = false;
            cout<<"Enter the Phone Number   : ";
            cin>>phone;
            if(phone<1000000000 || phone>9999999999)
            {
                phonoNumberValidity = true;
            }
            if(phonoNumberValidity==true)
            {
                cout<<endl;
                cout<<"Please enter a 10 digit phone Number"<<endl;
                cout<<endl;
            }
            }while(phonoNumberValidity==true);

            bool advancePaymentValidity;
            do
            {
                advancePaymentValidity = false;
                cout<<"Enter Advance Payment Amount (minimum Rs. 500) : ";
                cin>>advancePayment;
                if(advancePayment > dailyRent*numberOfDays)
                {
                    advancePaymentValidity = true;
                    cout<<endl;
                    cout<<"Advance exceeds total payable amount"<<endl;
                    cout<<endl;
                }
                else if(advancePayment<500)
                {
                    advancePaymentValidity = true;
                    cout<<endl;
                    cout<<"Minimum Advance to Check-In is Rs. 500"<<endl;
                    cout<<endl;
                }
            }while(advancePaymentValidity == true);
            cout<<"Advance payment of "<<advancePayment<<" received, thank you !"<<endl;

        }

        int getNumberOfDays()
        {
            return numberOfDays;
        }

        long long getPhone()
        {
            return phone;
        }

        int getAdvancePayment()
        {
            return advancePayment;
        }
};



class Room : public Guest
{
    protected:
        string roomType;
        string roomSize;
        int presentAC;
        int roomNumber;
        int roomStatus;
        int pricePerDay;
        int priceType;
        int priceSize;
        int priceAC;
// counts of room with the format {roomSize, roomType, AC presence}
// for roomSize , 1 = small, 2 = medium, 3 = large
// for roomType , 1 = comfort, 2 = deluxe, 3 = premium
// for AC presence, 0 = AC not present, 1 = AC present
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
            roomNumber = 101;
            roomSize = "small";
            roomType = "comfort";
            presentAC = 1;
            roomStatus = 0;
            priceAC = 1000;
            priceSize = 1000;
            priceType = 1000;
            pricePerDay = priceAC + priceSize + priceType;
        }

        Room(Room &room, int rSize, int rType, int rAC)
        {
            if(room.roomNumber % 100 == 10)
            {
                roomNumber = room.roomNumber + 91;
            }
            else
            {
                roomNumber = room.roomNumber + 1;
            }
            if(rSize == 1)
            {
                roomSize = "small";
                priceSize = 1000;
            }
            else if (rSize == 2)
            {
                roomSize = "medium";
                priceSize = 1500;
            }
            else if (rSize == 3)
            {
                roomSize = "large";
                priceSize = 2000;
            }

            if(rType == 1)
            {
                roomType = "comfort";
                priceType = 1000;
            }
            else if (rType == 2)
            {
                roomType = "deluxe";
                priceType = 1500;
            }
            else if (rType == 3)
            {
                roomType = "premium";
                priceType = 2000;
            }

            if(rAC == 0)
            {
                presentAC = 0;
                priceAC = 0;
            }
            else if(rAC == 1)
            {
                presentAC = 1;
                priceAC = 1000;
            }
            pricePerDay = priceSize + priceType + priceAC;
        }

        int checkRoomStatus()
        {
            if(roomStatus==0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }

        double calculateTotal(double finalRoomSize, double finalRoomType, double finalAC)
        {
            double totalAmount = 1000*finalRoomSize + finalRoomType*1000 + 1000*finalAC;
            return totalAmount;
        }

        void displayAllGuestDetails()
        {
            cout<<"Guest ID : "<<roomNumber<<endl;
            cout<<"Guest Names "<<endl;
            for(int guestNumber = 0 ; guestNumber < totalGuestCount ; guestNumber++)
            {
                cout<<"  Guest "<<guestNumber+1<<" Name : "<<guestNames[guestNumber]<<endl;
            }
            cout<<"Guest Address : "<<address<<endl;
            cout<<"Phone number : "<<phone<<endl;
            cout<<"Number of Days booked : "<<numberOfDays<<endl;
            cout<<"Advance Payment : "<<
            advancePayment<<endl;
            cout<<"Room Number : "<<roomNumber<<endl;
            string str;
            if(presentAC==1)
            {
                str="AC";
            }
            else
            {
                str="Non-AC";
            }
            cout<<"Room Details : "<<roomSize<<" "<<roomType<<" "<<str<<endl;
            cout<<"Room cost : Rs. "<<pricePerDay<<endl;
        }

        void roomCheckOut()
        {
            roomStatus = 0; //available now
            phone = 0;
            totalGuestCount = 0;
            address.clear();
            numberOfDays = 0;
            advancePayment = 0;
            for(int guestNum = 0 ; guestNum < 340 ; guestNum++)
            {
                guestNames[guestNum].clear();
            }
        }

        void changeRoomStatus()
        {
            if(roomStatus==1)
            {
                roomStatus=0;
            }
            else
            {
                roomStatus=1;
            }
        }

        string getRoomSize()
        {
            string roomSz = roomSize;
            return roomSz;
        }
        string getRoomType()
        {
            string roomTp = roomType;
            return roomTp;
        }
        int getACStatus()
        {
            int acStatus = presentAC;
            return acStatus;
        }
        int getRoomNumber()
        {
            int roomNo = roomNumber;
            return roomNo;
        }
        int getRoomTotal()
        {
            int roomTotal = pricePerDay;
            return roomTotal;
        }

};




class GuestOccupiedRoom : public Room
{
    public:

        void roomUnavailableMessage(bool availabilityStatus){
            if(availabilityStatus == true){
                cout<<endl;
                cout<<"Sorry, your Desired Room is unavailable"<<endl;
                cout<<"Please try some different type of room"<<endl;
                cout<<endl;
            }
        }

        bool checkAndAllocateRoom(Room &alRoom, double &totalStayRent, bool &roomAvailable){
                    if(alRoom.checkRoomStatus() == 0)
                    {
                        alRoom.changeRoomStatus();
                        alRoom.createGuest(totalStayRent);
                        id = alRoom.getRoomNumber();
                        cout<<"Room number "<<id<<" alloted"<<endl;
                        cout<<"We hope you have a pleasant stay"<<endl;
                        roomAvailable = false;
                        return true;
                    }
            return false;
        }

        void checkIn(Room room[])
        {
            string finalRoomSize;
            bool roomAvailability = true, validInputRoomSize, validInputRoomType, validInputAC;
            string finalRoomType;
            int airConditionerPresent;
            double rSize, rType;
            double totalRentPerDay;

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
                validInputRoomSize=0;
                cout<<"Enter Room size (small / medium / large) : ";
                cin>>finalRoomSize;

                if(finalRoomSize == "small")
                {
                    rSize = 1;
                }
                else if(finalRoomSize == "medium")
                {
                    rSize = 1.5;
                }
                else if(finalRoomSize == "large")
                {
                    rSize = 2;
                }
                else if(finalRoomSize != "small" && finalRoomSize != "medium" && finalRoomSize != "large")
                {
                    validInputRoomSize = 1;
                    cout<<endl;
                    cout<<"Invalid input"<<endl;
                    cout<<endl;
                }
            }while(validInputRoomSize == 1);
            do
            {
                validInputRoomType=0;
                cout<<"Enter Room Type (comfort / deluxe / premium) : ";
                cin>>finalRoomType;


                if(finalRoomType == "comfort")
                {
                    rType = 1;
                }
                else if(finalRoomType == "deluxe")
                {
                    rType = 1.5;
                }
                else if(finalRoomType == "premium")
                {
                    rType = 2;
                }
                else if(finalRoomType != "comfort" && finalRoomType != "deluxe" && finalRoomType != "premium")
                {
                    validInputRoomType = 1;
                    cout<<endl;
                    cout<<"Invalid input"<<endl;
                    cout<<endl;
                }
            }while(validInputRoomType == 1);

            do
            {
                validInputAC=0;
                if(finalRoomType == "comfort" || finalRoomType == "deluxe")
                {
                        cout<<"Do you want AC ? (0 : Non-AC / 1 : AC) : ";
                        cin>>airConditionerPresent;
                }

                if(finalRoomType == "premium")
                {
                    airConditionerPresent = 1;
                }
                if(airConditionerPresent!=0 && airConditionerPresent!=1){
                    cout<<endl;
                    cout<<"Invalid input"<<endl;
                    cout<<endl;
                }
            }while(airConditionerPresent!=0 && airConditionerPresent!=1);

            totalRentPerDay = calculateTotal(rSize, rType, airConditionerPresent);
            cout<<"Room cost per day = "<<totalRentPerDay<<endl;

            if(finalRoomSize == "small"  && finalRoomType == "comfort" && airConditionerPresent == 1)
            {
                for(int roomNumberCount=0; roomNumberCount<=19; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count111--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "small"  && finalRoomType == "comfort" && airConditionerPresent == 0)
            {
                for(int roomNumberCount=20; roomNumberCount<=29; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count110--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "small"  && finalRoomType == "deluxe" && airConditionerPresent == 1)
            {
                for(int roomNumberCount=30; roomNumberCount<=39; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                            count121--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "small"  && finalRoomType == "deluxe" && airConditionerPresent == 0)
            {
                for(int roomNumberCount=40; roomNumberCount<=44; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count120--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "small"  && finalRoomType == "premium" )
            {
                for(int roomNumberCount=45; roomNumberCount<=49; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count131--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "medium"  && finalRoomType == "comfort" && airConditionerPresent == 1)
            {
                for(int roomNumberCount=50; roomNumberCount<=59; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count211--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "medium"  && finalRoomType == "comfort" && airConditionerPresent == 0)
            {
                for(int roomNumberCount=60; roomNumberCount<=64; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count210--;
                            break;
                        }
                }
                if(roomAvailability == 0)
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "medium"  && finalRoomType == "deluxe" && airConditionerPresent == 1)
            {
                for(int roomNumberCount=65; roomNumberCount<=69; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count221--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "medium"  && finalRoomType == "deluxe" && airConditionerPresent == 0)
            {
                for(int roomNumberCount=70; roomNumberCount<=74; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count220--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "medium"  && finalRoomType == "premium" )
            {
                for(int roomNumberCount=75; roomNumberCount<=79; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count231--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "large"  && finalRoomType == "comfort" && airConditionerPresent == 1)
            {
                for(int roomNumberCount=80; roomNumberCount<=84; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count311--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "large"  && finalRoomType == "comfort" && airConditionerPresent == 0)
            {
                for(int roomNumberCount=85; roomNumberCount<=89; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count310--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "large"  && finalRoomType == "deluxe" && airConditionerPresent == 1)
            {
                for(int roomNumberCount=90; roomNumberCount<=92; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count321--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "large"  && finalRoomType == "deluxe" && airConditionerPresent == 0)
            {
                for(int roomNumberCount=93; roomNumberCount<=94; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count320--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else if(finalRoomSize == "large"  && finalRoomType == "premium" )
            {
                for(int roomNumberCount=95; roomNumberCount<=99; roomNumberCount++)
                {
                    bool isCheckInPossible = checkAndAllocateRoom(room[roomNumberCount],totalRentPerDay,roomAvailability);
                    if(isCheckInPossible == true){
                        count331--;
                            break;
                        }
                }
                roomUnavailableMessage(roomAvailability);
            }
            else
            {
                cout<<"Invalid Input"<<endl;
            }
        }


        void checkOut(Room room[])
        {
            int guestId;
            cout<<"Enter guest ID : ";
            cin>>guestId;
            bool isValidGuestId = false;
            for(int roomNumberCount=0;roomNumberCount<100;roomNumberCount++)
            {
                if(room[roomNumberCount].getRoomNumber() == guestId && room[roomNumberCount].checkRoomStatus() == 1)
                {
                    int costPerDay = room[roomNumberCount].getRoomTotal();
                    int DaysOfStay = room[roomNumberCount].getNumberOfDays();
                    int guestPhoneNumber = room[roomNumberCount].getAdvancePayment();
                    int netTotalFoodCost = room[roomNumberCount].getFoodCost();
                    cout<<"Number of days stayed  : "<<DaysOfStay<<endl;
                    cout<<"Room cost per day      : "<<costPerDay<<endl;
                    cout<<"Total cost of stay     : "<<(costPerDay*DaysOfStay)<<endl;
                    cout<<"Food Cost              : "<<netTotalFoodCost<<endl;
                    cout<<"Advance Paid           : "<<guestPhoneNumber<<endl;
                    cout<<"Payable Amount         : "<<(costPerDay * DaysOfStay) - guestPhoneNumber + netTotalFoodCost<<endl;
                    room[roomNumberCount].roomCheckOut();
                    room[roomNumberCount].clearFoodCost();
                    string finalRoomSize = room[roomNumberCount].getRoomSize();
                    string finalRoomType = room[roomNumberCount].getRoomType();
                    int airConditionerPresent = room[roomNumberCount].getACStatus();

                    if(finalRoomSize == "small"){
                        if(finalRoomType == "comfort"){
                            if(airConditionerPresent == 1){
                                count111++;
                            }
                            else{
                                count110++;
                            }
                        }
                        else if(finalRoomType == "deluxe"){
                            if(airConditionerPresent == 1){
                                count121++;
                            }
                            else{
                                count120++;
                            }
                        }
                        else if(finalRoomType == "premium"){
                            count131++;
                        }
                    }
                    else if(finalRoomSize == "medium"){
                        if(finalRoomType == "comfort"){
                            if(airConditionerPresent == 1){
                                count211++;
                            }
                            else{
                                count210++;
                            }
                        }
                        else if(finalRoomType == "deluxe"){
                            if(airConditionerPresent == 1){
                                count221++;
                            }
                            else{
                                count220++;
                            }
                        }
                        else if(finalRoomType == "premium"){
                            count231++;
                        }
                    }
                    else if(finalRoomSize == "large"){
                        if(finalRoomType == "comfort"){
                            if(airConditionerPresent == 1){
                                count311++;
                            }
                            else{
                                count310++;
                            }
                        }
                        else if(finalRoomType == "deluxe"){
                            if(airConditionerPresent == 1){
                                count321++;
                            }
                            else{
                                count320++;
                            }
                        }
                        else if(finalRoomType == "premium"){
                            count331++;
                        }
                    }

                    isValidGuestId = true;
                    break;
                }
            }
            if(isValidGuestId == true)
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

        void showGuestDetails(Room room[])
        {
            bool isValidGuest = false, guestId;
            cout<<"Enter guest ID : ";
            cin>>guestId;
            for(int roomNumberCount=0;roomNumberCount<100;roomNumberCount++)
            {
                int currentRoomNumber = room[roomNumberCount].getRoomNumber();
                int guestPhoneNumber = room[roomNumberCount].getPhone();
                if(currentRoomNumber == guestId && guestPhoneNumber != 0)
                {
                    cout<<endl;
                    cout<<"GUEST DETAILS "<<endl<<endl;
                    room[roomNumberCount].displayAllGuestDetails();
                    isValidGuest = true;
                    break;
                }
            }

            if(isValidGuest == false)
            {
                cout<<endl<<"Guest not found !"<<endl<<endl;
            }
        }


        void showRoomStatus(Room room[])
        {
            for(int roomNumberCount=0;roomNumberCount<100;roomNumberCount++)
            {
                int currentRoomNo = room[roomNumberCount].getRoomNumber();
                if(room[roomNumberCount].checkRoomStatus()==0)
                {
                cout<<"Room Number "<<currentRoomNo<<" : Available"<<endl;
                }
                else
                {
                cout<<"Room Number "<<currentRoomNo<<" : Unavailable"<<endl;
                }
            }
        }

        void availableRoomsCount(Room room[])
        {
            cout<<endl;
            cout<<"Number of available room : "<<endl;
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



    void foodService(Room room[])
    {
    unordered_map<string,pair<int,int>>menuItem;
    unordered_map<string,pair<int,int>>::iterator currentItem ;

// Each Food Item is mapped wwith a pair of numbers where the first number represents the price of 1 item of that type and the second number represents the count of that item that the guest has bought.

    menuItem["Banana Milkshake     "]={80,0};
    menuItem["Bhel Puri            "]={25,0};
    menuItem["Butter Naan          "]={35,0};
    menuItem["Chat                 "]={20,0};
    menuItem["Cheese Sandwich      "]={40,0};
    menuItem["Cheese Grill Sandwich"]={80,0};
    menuItem["Cheese Naan          "]={60,0};
    menuItem["Chinese Bhel         "]={25,0};
    menuItem["Dhokla               "]={25,0};
    menuItem["Dahi Wada            "]={30,0};
    menuItem["Dahi Puri            "]={30,0};
    menuItem["Frooti               "]={10,0};
    menuItem["Gulab Jamun          "]={20,0};
    menuItem["Idli Sambar          "]={50,0};
    menuItem["Jalebi               "]={40,0};
    menuItem["Jeera Rice           "]={60,0};
    menuItem["Kofta                "]={100,0};
    menuItem["Lemon Tea            "]={50,0};
    menuItem["Lime Juice           "]={50,0};
    menuItem["Mango Milkshake      "]={70,0};
    menuItem["Maaza                "]={20,0};
    menuItem["Orange juice         "]={30,0};
    menuItem["Pasta                "]={45,0};
    menuItem["Paneer Tikka Masala  "]={100,0};
    menuItem["Paneer Chilli        "]={90,0};
    menuItem["Poha                 "]={25,0};
    menuItem["Samosa pav           "]={17,0};
    menuItem["Sada Dosa            "]={45,0};
    menuItem["Schezwan Rice        "]={80,0};
    menuItem["Tandoor Roti         "]={25,0};
    menuItem["Vada pav             "]={16,0};
    menuItem["Veg. Sandwich        "]={60,0};


            int guestId;
            clearScreen();
            cout<<"Enter guest ID : ";
            cin>>guestId;
            bool authenticateGuest = false;
            for(int roomCount=0;roomCount<100;roomCount++)
            {
                int guestPhoneNumber = room[roomCount].getPhone();

                if(room[roomCount].getRoomNumber() == guestId && room[roomCount].checkRoomStatus() == 1 && guestPhoneNumber!=0)
                {
                    authenticateGuest = true;
                }
            }
            if(authenticateGuest == true)
            {
                clearScreen();
            }
            else{
                cout<<endl;
                cout<<"Guest not found !"<<endl;
                cout<<endl;
                return;
            }

    cout<<"Loading Menu Please wait.........."<<endl;
    this_thread::sleep_for(chrono::seconds(2));

    menu();

    cout<<"PLEASE SELECT YOUR ORDER FROM THE MENU"<<endl<<endl;

    string inputMenuChoice;
    do{
    int quantity;
    long long mostRecentTotal = 0;
    cout<<endl;
    cout<<"Press M to View Menu Again"<<endl;
    cout<<"Press C to check items in Your Cart"<<endl;
    cout<<"Press E to Finish the Order"<<endl;
    cin>>inputMenuChoice;
    if(inputMenuChoice=="C"){
    clearScreen();
    mostRecentTotal = showCurrentOrderList(menuItem,currentItem );
    pauseScreen();
    clearScreen();
    }
    else if(inputMenuChoice=="M"){
    clearScreen();
            menu();
    }
    else if(inputMenuChoice=="Banana Milkshake" || inputMenuChoice=="banana milkshake" ||inputMenuChoice=="Bananamilkshake" ||  inputMenuChoice=="bananamilkshake" || inputMenuChoice=="BananaMilkshake"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
        menuItem["Banana Milkshake     "].second = menuItem["Banana Milkshake     "].second +quantity;
    }
    else if(inputMenuChoice=="Bhel Puri" || inputMenuChoice=="Bhelpuri"||inputMenuChoice=="bhelpuri"||inputMenuChoice=="BhelPuri"|| inputMenuChoice=="bhel puri"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Bhel Puri            "].second = menuItem["Bhel Puri            "].second +quantity;
    }
    else if(inputMenuChoice=="Butter Naan"|| inputMenuChoice=="ButterNaan"|| inputMenuChoice=="butternaan"||inputMenuChoice=="butter naan"||inputMenuChoice=="Butternaaan"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Butter Naan          "].second = menuItem["Butter Naan          "].second +quantity;
    }
    else if(inputMenuChoice=="Chat" || inputMenuChoice=="chat"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Chat                 "].second = menuItem["Chat                 "].second +quantity;
    }
    else if(inputMenuChoice=="Cheese Sandwich" || inputMenuChoice=="Cheesesandwich" || inputMenuChoice=="cheesesandwich" || inputMenuChoice=="CheeseSandwich" || inputMenuChoice=="cheese sandwich"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Cheese Sandwich      "].second = menuItem["Cheese Sandwich      "].second +quantity;
    }
    else if(inputMenuChoice=="Cheese Grill Sandwich" || inputMenuChoice=="cheesegrillsandwich" || inputMenuChoice=="CheeseGrillSandwich" || inputMenuChoice=="Cheesegrillsandwich" || inputMenuChoice=="cheese grill sandwich"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Cheese Grill Sandwich"].second = menuItem["Cheese Grill Sandwich"].second +quantity;

    }
    else if(inputMenuChoice=="cheese naan" || inputMenuChoice=="Cheese Naan"|| inputMenuChoice=="CheeseNaan" || inputMenuChoice=="Cheesenaan" || inputMenuChoice=="cheesenaan"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Cheese Naan          "].second = menuItem["Cheese Naan          "].second +quantity;
    }
    else if(inputMenuChoice=="Chinese Bhel" || inputMenuChoice=="Chinesebhel"|| inputMenuChoice=="chinese bhel" || inputMenuChoice=="chinesebhel"||inputMenuChoice=="ChineseBhel"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Chinese Bhel         "].second = menuItem["Chinese Bhel         "].second +quantity;
    }
    else if(inputMenuChoice=="Dhokla"||inputMenuChoice=="dhokla"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Dhokla               "].second = menuItem["Dhokla               "].second +quantity;
    }
    else if(inputMenuChoice=="Dahi Wada"|| inputMenuChoice=="dahiwada"||inputMenuChoice=="DahiWada"||inputMenuChoice=="Dahiwada"||inputMenuChoice=="dahi wada"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Dahi Wada            "].second = menuItem["Dahi Wada            "].second +quantity;
    }
    else if(inputMenuChoice=="Dahi Puri"||inputMenuChoice=="Dahipuri"||inputMenuChoice=="DahiPuri"||inputMenuChoice=="dahipuri"||inputMenuChoice=="dahi puri"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Dahi Puri            "].second = menuItem["Dahi Puri            "].second +quantity;
    }
    else if(inputMenuChoice=="Frooti"||inputMenuChoice=="frooti"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Frooti               "].second = menuItem["Frooti               "].second +quantity;
    }
    else if(inputMenuChoice=="Gulab Jamun"||inputMenuChoice=="gulabjamun"||inputMenuChoice=="GulabJamun"||inputMenuChoice=="gulab jamun"||inputMenuChoice=="Gulabjamun"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Gulab Jamun          "].second = menuItem["Gulab Jamun          "].second +quantity;
    }
    else if(inputMenuChoice=="Idli Sambar"||inputMenuChoice=="Idlisambar"||inputMenuChoice=="idlisambar"||inputMenuChoice=="IdliSambar"||inputMenuChoice=="idli sambar"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Idli Sambar          "].second = menuItem["Idli Sambar          "].second +quantity;
    }
    else if(inputMenuChoice=="Jalebi"||inputMenuChoice=="jalebi"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Jalebi               "].second = menuItem["Jalebi               "].second +quantity;
    }
    else if(inputMenuChoice=="Jeera Rice"||inputMenuChoice=="JeeraRice"||inputMenuChoice=="jeerarice"||inputMenuChoice=="jeera rice"||inputMenuChoice=="Jeerarice"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Jeera Rice           "].second = menuItem["Jeera Rice           "].second +quantity;
    }
    else if(inputMenuChoice=="Kofta"||inputMenuChoice=="kofta"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Kofta                "].second = menuItem["Kofta                "].second +quantity;
    }
    else if(inputMenuChoice=="Lemon Tea"||inputMenuChoice=="LemonTea"||inputMenuChoice=="lemon tea"||inputMenuChoice=="lemontea"||inputMenuChoice=="Lemontea"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Lemon Tea            "].second = menuItem["Lemon Tea            "].second +quantity;
    }
    else if(inputMenuChoice=="Lime Juice"||inputMenuChoice=="limejuice"||inputMenuChoice=="LimeJuice"||inputMenuChoice=="Limejuice"||inputMenuChoice=="lime juice"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Lime Juice           "].second = menuItem["Lime Juice           "].second +quantity;
    }
    else if(inputMenuChoice=="Mango Milkshake"||inputMenuChoice=="MangoMilkshake"||inputMenuChoice=="Mangomilkshake"||inputMenuChoice=="mangomilkshake"||inputMenuChoice=="mango milkshake"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Mango Milkshake      "].second = menuItem["Mango Milkshake      "].second +quantity;
    }
    else if(inputMenuChoice=="maaza"||inputMenuChoice=="Maaza"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Maaza                "].second = menuItem["Maaza                "].second +quantity;
    }
    else if(inputMenuChoice=="OrangeJuice"||inputMenuChoice=="Orange Juice"||inputMenuChoice=="orangejuice"||inputMenuChoice=="ornge juice"||inputMenuChoice=="Orangejuice"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Orange juice         "].second = menuItem["Orange juice         "].second +quantity;
    }
    else if(inputMenuChoice=="Pasta"||inputMenuChoice=="pasta"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Pasta                "].second = menuItem["Pasta                "].second +quantity;
    }
    else if(inputMenuChoice=="paneertikkamasala"||inputMenuChoice=="Paneer Tikka Masala"||inputMenuChoice=="paneer tikka masala"||inputMenuChoice=="Paneertikkamasala"||inputMenuChoice=="Paneer tikka masala"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Paneer Tikka Masala  "].second = menuItem["Paneer Tikka Masala  "].second +quantity;
    }
    else if(inputMenuChoice=="Paneer Chilli"||inputMenuChoice=="PaneerChilli"||inputMenuChoice=="paneerchilli"||inputMenuChoice=="Paneerchilli"||inputMenuChoice=="paneer chilli"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Paneer Chilli        "].second = menuItem["Paneer Chilli        "].second +quantity;
    }
    else if(inputMenuChoice=="Poha"||inputMenuChoice=="poha"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Poha                 "].second = menuItem["Poha                 "].second +quantity;
    }
    else if(inputMenuChoice=="Samosa Pav"||inputMenuChoice=="samosapav"||inputMenuChoice=="SamosaPav"||inputMenuChoice=="Samosapav"||inputMenuChoice=="samosa pav"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Samosa pav           "].second = menuItem["Samosa pav           "].second +quantity;
    }
    else if(inputMenuChoice=="Sadadosa"||inputMenuChoice=="Sada Dosa"||inputMenuChoice=="SadaDosa"||inputMenuChoice=="sadadosa"||inputMenuChoice=="sada dosa"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Sada Dosa            "].second = menuItem["Sada Dosa            "].second +quantity;
    }
    else if(inputMenuChoice=="Schezwan Rice"||inputMenuChoice=="Schezwanrice"||inputMenuChoice=="SchezwanRice"||inputMenuChoice=="schezwanrice"||inputMenuChoice=="schezwan rice"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Schezwan Rice        "].second = menuItem["Schezwan Rice        "].second +quantity;
    }
    else if(inputMenuChoice=="Tandoori Roti"||inputMenuChoice=="TandooriRoti"||inputMenuChoice=="Tandooriroti"||inputMenuChoice=="tandooriroti"||inputMenuChoice=="tandoori roti"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Tandoor Roti         "].second = menuItem["Tandoor Roti         "].second +quantity;
    }
    else if(inputMenuChoice=="Vada Pav"||inputMenuChoice=="Vadapav"||inputMenuChoice=="VadaPav"||inputMenuChoice=="vadapav"||inputMenuChoice=="vada pav"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Vada pav             "].second = menuItem["Vada pav             "].second +quantity;
    }
    else if(inputMenuChoice=="VegSandwich"||inputMenuChoice=="Vegsandwich"||inputMenuChoice=="Veg Sandwich"||inputMenuChoice=="vegsandwich"||inputMenuChoice=="veg sandwich"){
        cout<<"Enter The Quantity : ";
        cin>>quantity;
    menuItem["Veg. Sandwich        "].second = menuItem["Veg. Sandwich        "].second +quantity;
    }
    else{
        cout<<endl;
        cout<<"Invalid Input"<<endl;
        cout<<endl;
    }
    }while(inputMenuChoice!="E");

     clearScreen();
    cout<<endl<<endl;
    cout<<"  YOUR ORDER : "<<endl;
    long long total = showCurrentOrderList(menuItem,currentItem );
    cout<<"                                                      TOTAL "<<endl;
    cout<<"                                               -------------------"<<endl;
    cout<<"                                                     Rs : "<<total<<endl;
    cout<<"                                               -------------------"<<endl;
    for(int currentRoomCounter=0;currentRoomCounter<100;currentRoomCounter++)
    {
        long long phoneNo = room[currentRoomCounter].getPhone();
        if(room[currentRoomCounter].getRoomNumber() == guestId && room[currentRoomCounter].checkRoomStatus() == 1 && phoneNo!=0)
        {
            room[currentRoomCounter].addFoodCost(total);
        }
    }
    return;
    }


int main()
{
    //Creating different types of room
    Room room[100];
    for( int currentRoomCounter = 1 ; currentRoomCounter <100 ; currentRoomCounter++)
    {
        if(currentRoomCounter<=19)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 1, 1, 1);
        }
        else if(currentRoomCounter>19 && currentRoomCounter<=29)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 1, 1, 0);
        }
        else if(currentRoomCounter>29 && currentRoomCounter<=39)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 1, 2, 1);
        }
        else if(currentRoomCounter>39 && currentRoomCounter<=44)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 1, 2, 0);
        }
        else if(currentRoomCounter>44 && currentRoomCounter<=49)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 1, 3, 1);
        }
        else if(currentRoomCounter>49 && currentRoomCounter<=59)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 2, 1, 1);
        }
        else if(currentRoomCounter>59 && currentRoomCounter<=64)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 2, 1, 0);
        }
        else if(currentRoomCounter>64 && currentRoomCounter<=69)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 2, 2, 1);
        }
        else if(currentRoomCounter>69 && currentRoomCounter<=74)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 2, 2, 0);
        }
        else if(currentRoomCounter>74 && currentRoomCounter<=79)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 2, 3, 1);
        }
        else if(currentRoomCounter>79 && currentRoomCounter<=84)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 3, 1, 1);
        }
        else if(currentRoomCounter>84 && currentRoomCounter<=89)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 3, 1, 0);
        }
        else if(currentRoomCounter>89 && currentRoomCounter<=92)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 3, 2, 1);
        }
        else if(currentRoomCounter>92 && currentRoomCounter<=94)
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 3, 2, 0);
        }
        else
        {
            room[currentRoomCounter] = Room(room[currentRoomCounter-1], 3, 3, 1);
        }
    }

    GuestOccupiedRoom guested;

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
        string inputChoice;
        cin>>inputChoice;
        int asciiTotal = 0;
        for(auto characters:inputChoice){
            asciiTotal+=characters;
        }
        choice = asciiTotal - 48;
        switch(choice)
        {
            case 1:
            {
                clearScreen();
                system("Color F0");
                cout<<endl;
                cout<<"CHECKING IN"<<endl;
                cout<<endl;
                guested.checkIn(room);
                cout<<endl;
                getch();
                clearScreen();
            }
            break;

            case 2:
            {
                clearScreen();
                system("Color F0");
                cout<<endl;
                cout<<"CHECKING OUT"<<endl;
                cout<<endl;
                 guested.checkOut(room);
                 cout<<endl;
                 getch();
                 clearScreen();
            }
            break;

            case 3:
            {
                clearScreen();
                system("Color F0");
                cout<<endl;
                cout<<"SHOWING ROOM STATUS"<<endl;
                cout<<endl;
                guested.showRoomStatus(room);
                cout<<endl;
                getch();
                clearScreen();
            }
            break;

            case 4:
            {
                clearScreen();
                system("Color F0");
                cout<<endl;
                cout<<"SEARCHING GUEST"<<endl;
                cout<<endl;
                guested.showGuestDetails(room);
                getch();
                clearScreen();
            }
            break;

            case 5:
            {
                clearScreen();
                system("Color F0");

                cout<<endl;
                cout<<"SHOWING NUMBER OF DIFFERENT TYPES OF AVAILABLE ROOMS"<<endl;
                cout<<endl;
                guested.availableRoomsCount(room);
                cout<<endl;
                getch();
                clearScreen();

            }
            break;

            case 6:
                   foodService(room);
                   getch();
                   clearScreen();
            break;

            case 7:
            {
                clearScreen();
                system("Color 4F");
                string exitConfirmation;
                cout<<endl<<endl<<endl<<endl;
                cout<<"Are you sure you want to EXIT? Enter 'y' to EXIT and any other key to cancel : ";
                cin>>exitConfirmation;
                if(exitConfirmation == "y")
                {
                    cout<<endl;
                    cout<<"Exit Successful"<<endl;
                    cout<<endl;
                }
                else
                {
                    choice = 1;
                    clearScreen();
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
