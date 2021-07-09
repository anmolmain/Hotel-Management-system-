#include <iostream>
#include <windows.h>
#include<iomanip>
using namespace std;

class company
{
    //intro of company -. Done
    //show availible room --> Done
    //show room details --Done
public:
    void intro(void)
    {
        cout << "______________________________________________________________________________________________________________________________________" << endl;
        char intro[300] = "\n\nWelcome to DOORSTEP hotel renting service\n\nWe hope you are having a great day\nPlease let us know some details regarding your choice , room selection and budget, so we can make you happy with our best service\n\n\n\nWith regards\nTeam Doorstep\n\n";
        for (int i = 0; intro[i] != 0; i++)
        {
            printf("%c", intro[i]);
            for (int j = 0; j < 8888888; j++)
            {
            }
        }
        cout << "______________________________________________________________________________________________________________________________________" << endl;
    }
    int rooms[100] = {0};
    void rooms_availible()
    {
        for (int k = 1; k <= 100; k++)
        {
            if (rooms[k] != 1)
            {
                cout << "________________________________" << endl;
                cout << "Room Number " << k << " is AVAILIBLE" << endl;
                cout << "________________________________" << endl;
            }
            else
            {
                cout << "________________________________" << endl;
                cout << "Room Number " << k << " is BOOKED" << endl;
                cout << "________________________________" << endl;
            }
        }
    }
    int index;
    void rooms_booking()
    {
    end:
    endd:
        cout<<"PLEASE ENTER ROOM NUMBER YOU WANT TO BOOK"<<endl;
        cin >> index;
        if (rooms[index] == 1)
        {
            cout << "THIS ROOM IS ALREADY BOOKED PLEASE CHOOSE ANOTHER ONE " << endl;
            goto end;
        }

        else
        {

            if (index <= 100)
            {
                rooms[index] = 1;
            }
            else
            {
                cout << "PLEASE ENTER ROOMS UPTO 100" << endl;
            }
        }
        // char FIRSTname[5];
        // char SECONDname[5];
        long long int contactnumber;
        // cout<<"\n\nPlease enter your details "<<endl;
        // cout<<"\nPlease enter your FIRST NAME "<<endl;
        // cin>>FIRSTname[5];
        // cout<<"\nPlease enter your LAST NAME "<<endl;
        // cin>>SECONDname[5];
        {
                   cout<<" \n_______________________________________________"<<endl;

            cout << "\nDO YOU REALLY  WANT  TO BOOK ROOM NUMBER  " << index << " ?\nIT WILL COSET YOU ";
            if (index <= 25)
            {
                cout << "1500 RUPEES\n\nPRESS  'Y'  TO CONTINUE \nPRESS  'N'  TO CANCEL" << endl;
            }
            else if (index <= 75)
            {
                cout << "5000 RUPEES\n\nPRESS  'Y'  TO CONTINUE \nPRESS  'N'  TO CANCEL" << endl;
            }
            else
                cout << "10000 RUPEES\n\nPRESS  'Y'  TO CONTINUE \nPRESS  'N'  TO CANCEL" << endl;

        }
        char ch;
        ;
        cin >> ch;
        if (ch == 'Y' || ch == 'y')
        {
            // cin >> contactnumber;
       cout<<" \n__________________________________"<<endl;

            cout << "Please enter your Contact number  | " << endl;
                              cout<<"__________________________________|"<<endl;
 cin >> contactnumber;

            cout << "\nYou can checkout Please move towards checkout corner\n\n"
                 << endl;
            cout << "\nYou will get confirmation on your registered mobile number soon.........\n\n"
                 << endl;
        }
        else
            goto endd;
    }
    void booked()
    {
        Beep(1500, 2500);
        char pick[2500] = "                                                                                                                                                  \nBBBBBBBBBBBBBBBBB             OOOOOOOOO               OOOOOOOOO          KKKKKKKKK    KKKKKKK     EEEEEEEEEEEEEEEEEEEEEE     DDDDDDDDDDDDD        \nB::::::::::::::::B          OO:::::::::OO           OO:::::::::OO        K:::::::K    K:::::K     E::::::::::::::::::::E     D::::::::::::DDD     \nB::::::BBBBBB:::::B       OO:::::::::::::OO       OO:::::::::::::OO      K:::::::K    K:::::K     E::::::::::::::::::::E     D:::::::::::::::DD   \nBB:::::B     B:::::B     O:::::::OOO:::::::O     O:::::::OOO:::::::O     K:::::::K   K::::::K     EE::::::EEEEEEEEE::::E     DDD:::::DDDDD:::::D  \n  B::::B     B:::::B     O::::::O   O::::::O     O::::::O   O::::::O     KK::::::K  K:::::KKK       E:::::E       EEEEEE       D:::::D    D:::::D \n  B::::B     B:::::B     O:::::O     O:::::O     O:::::O     O:::::O       K:::::K K:::::K          E:::::E                    D:::::D     D:::::D\n  B::::BBBBBB:::::B      O:::::O     O:::::O     O:::::O     O:::::O       K::::::K:::::K           E::::::EEEEEEEEEE          D:::::D     D:::::D\n  B:::::::::::::BB       O:::::O     O:::::O     O:::::O     O:::::O       K:::::::::::K            E:::::::::::::::E          D:::::D     D:::::D\n  B::::BBBBBB:::::B      O:::::O     O:::::O     O:::::O     O:::::O       K:::::::::::K            E:::::::::::::::E          D:::::D     D:::::D\n  B::::B     B:::::B     O:::::O     O:::::O     O:::::O     O:::::O       K::::::K:::::K           E::::::EEEEEEEEEE          D:::::D     D:::::D\n  B::::B     B:::::B     O:::::O     O:::::O     O:::::O     O:::::O       K:::::K K:::::K          E:::::E                    D:::::D     D:::::D\n  B::::B     B:::::B     O::::::O   O::::::O     O::::::O   O::::::O     KK::::::K  K:::::KKK       E:::::E       EEEEEE       D:::::D    D:::::D \nBB:::::BBBBBB::::::B     O:::::::OOO:::::::O     O:::::::OOO:::::::O     K:::::::K   K::::::K     EE::::::EEEEEEEE:::::E     DDD:::::DDDDD:::::D  \nB:::::::::::::::::B       OO:::::::::::::OO       OO:::::::::::::OO      K:::::::K    K:::::K     E::::::::::::::::::::E     D:::::::::::::::DD   \nB::::::::::::::::B          OO:::::::::OO           OO:::::::::OO        K:::::::K    K:::::K     E::::::::::::::::::::E     D::::::::::::DDD     \nBBBBBBBBBBBBBBBBB             OOOOOOOOO               OOOOOOOOO          KKKKKKKKK    KKKKKKK     EEEEEEEEEEEEEEEEEEEEEE     DDDDDDDDDDDDD        ";
        {
            for (int i = 0; pick[i] != 0; i++)
            {
                printf("%c", pick[i]);
                for (int j = 0; j < 88888; j++)
                {
                }
            }
        }
       cout<<" \n\n\n\n"<<endl;

        char bookingdone[25] = "Room number ";
        char bookingdone2[25] = " Booked Successfully";
       cout<<"\n___________________________________"<<endl;
        for (int i = 0; bookingdone[i] != 0; i++)
        {
            printf("%c", bookingdone[i]);
            for (int j = 0; j < 8888888; j++)
            {
            }
        }
        cout << index;
        for (int i = 0; bookingdone2[i] != 0; i++)
        {
            printf("%c", bookingdone2[i]);
            for (int j = 0; j < 8888888; j++)
            {
            }
        }cout<<" |"<<endl;
        cout<<"__________________________________|"<<endl;


    }

    void budget()
    {
        long int budget;
        char intro[220] = "Welcome to BUDGET secction of Doorstep Hotlels \nWe are here to help you \nPLease help our assistant to know your choice\n\n\nNOTE : Minimum amount to book a room = 1500\n";
        for (int i = 0; intro[i] != 0; i++)
        {
            printf("%c", intro[i]);
            for (int j = 0; j < 888888; j++)
            {
            }
        }
        cout << "\nPlease Enter your bugdet " << endl;
        cin >> budget;

        {
            if (budget < 1500)
            {
                cout << "Sorry ! NO rooms are availible at this price range\nMinimum amount is 1500 " << endl;
            }
            else if (budget >= 1500 && budget < 5000)
            {
                cout << "OK !!\nPick any room from the room range 1-25\n\n" << endl;
                            //        cout << "________________________________" << endl;

                for (int k = 1; k <= 25; k++)
                {
                    if (rooms[k] != 1){
                                            cout << "________________________________|" << endl;
    cout  << "Room Number " << std::setw(3) << std::setfill('0')<< k << " is AVAILIBLE    |" << endl;
                    cout << "________________________________|" << endl;}
                    else{
                     //  cout << "________________________________" << endl;
    cout  << "Room Number " << std::setw(3) << std::setfill('0')<< k << " is BOOKED       |" << endl;
                        cout << "________________________________|" << endl;}
                }
            }
            else if (budget >= 5000 && budget < 7000)
            {
                cout << "OK !!\nAvarage : Pick any room from the room range 1-25\nPick any room from the room range 25-75" << endl;
                for (int k = 1; k <= 75; k++)
                {
                    if (rooms[k] != 1){
    cout  << "Room Number " << std::setw(3) << std::setfill('0')<< k << " is AVAILIBLE    |" << endl;
                    cout << "________________________________|" << endl;}
                    else{
                     //  cout << "________________________________" << endl;
    cout  << "Room Number " << std::setw(3) << std::setfill('0')<< k << " is BOOKED       |" << endl;
                        cout << "________________________________|" << endl;}
                }
            }
            else if (budget >= 7000)
            {
                cout << "OK !!\nAvarage : Pick any room from the room range 1-25\nAbove Avarage : Pick any room from the room range 25-75\nFull luxury : Pick any room from the room range 75-100" << endl;

                for (int k = 1; k <= 100; k++)
                {{
                    if (rooms[k] != 1){
    cout  << "Room Number " << std::setw(3) << std::setfill('0')<< k << " is AVAILIBLE    |" << endl;
                    cout << "________________________________|" << endl;}
                    else{
                     //  cout << "________________________________" << endl;
    cout  << "Room Number " << std::setw(3) << std::setfill('0')<< k << " is BOOKED       |" << endl;
                        cout << "________________________________|" << endl;}
                }
            }
        }
    }
    }
    company(void)
    {
        char iv;
        cin >> iv;
        for (int i = 1190; i <= 1200; i++)
        {
            Beep(i, 110);
        }

        char output[2500] = "                                                                                                                                   \nHHHHHHHHH     HHHHHHHHH          OOOOOOOOO          TTTTTTTTTTTTTTTTTTTTTTT     EEEEEEEEEEEEEEEEEEEEEE     LLLLLLLLLLL             \nH:::::::H     H:::::::H        OO:::::::::OO        T:::::::::::::::::::::T     E::::::::::::::::::::E     L:::::::::L             \nH:::::::H     H:::::::H      OO:::::::::::::OO      T:::::::::::::::::::::T     E::::::::::::::::::::E     L:::::::::L             \nHH::::::H     H::::::HH     O:::::::OOO:::::::O     T:::::TT:::::::TT:::::T     EE::::::EEEEEEEEE::::E     LL:::::::LL             \n  H:::::H     H:::::H       O::::::O   O::::::O     TTTTTT  T:::::T  TTTTTT       E:::::E       EEEEEE       L:::::L               \n  H:::::H     H:::::H       O:::::O     O:::::O             T:::::T               E:::::E                    L:::::L               \n  H::::::HHHHH::::::H       O:::::O     O:::::O             T:::::T               E::::::EEEEEEEEEE          L:::::L               \n  H:::::::::::::::::H       O:::::O     O:::::O             T:::::T               E:::::::::::::::E          L:::::L               \n  H:::::::::::::::::H       O:::::O     O:::::O             T:::::T               E:::::::::::::::E          L:::::L               \n  H::::::HHHHH::::::H       O:::::O     O:::::O             T:::::T               E::::::EEEEEEEEEE          L:::::L               \n  H:::::H     H:::::H       O:::::O     O:::::O             T:::::T               E:::::E                    L:::::L               \n  H:::::H     H:::::H       O::::::O   O::::::O             T:::::T               E:::::E       EEEEEE       L:::::L         LLLLLL\nHH::::::H     H::::::HH     O:::::::OOO:::::::O           TT:::::::TT           EE::::::EEEEEEEE:::::E     LL:::::::LLLLLLLLL:::::L\nH:::::::H     H:::::::H      OO:::::::::::::OO            T:::::::::T           E::::::::::::::::::::E     L::::::::::::::::::::::L\nH:::::::H     H:::::::H        OO:::::::::OO              T:::::::::T           E::::::::::::::::::::E     L::::::::::::::::::::::L\nHHHHHHHHH     HHHHHHHHH          OOOOOOOOO                TTTTTTTTTTT           EEEEEEEEEEEEEEEEEEEEEE     LLLLLLLLLLLLLLLLLLLLLLLL";
        for (int i = 0; output[i] != 0; i++)
        {
            printf("%c", output[i]);
            for (int j = 0; j < 21881; j++)
            {
            }
        }
    }
};
int main()
{
    char charr, d;
    company c1;
    for (int m = 0; m < 100; m++)
    {
        cout << "\n\n"
             << endl;
        c1.intro();
        c1.budget();
        c1.rooms_booking();
        c1.booked();
        cout << "\n\n"
             << endl;
             cout << "_________________________________" << endl;
        cout << "PRESS 'e' TO SHOW CURRENT DATA  |\nPRESS ANY OTHER KEY TO CONTINUE |\nPRESS '#' TO EXIT               |" << endl;
        cout << "________________________________|" << endl;
        cin >> charr;
        if (charr == 'e')
        {
            c1.rooms_availible();
                   cout << "________________________________" << endl;
                    cout<<"PRESS ANY KEY TO CONTINUE :    |"<<endl;
        cout << "_______________________________|" << endl;

            cin >> d;
        }
        else if (charr == '#')
        {
            goto enddd;
        }
    }
enddd:
    return 0;
}

