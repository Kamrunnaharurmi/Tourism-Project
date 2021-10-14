#include<stdio.h>
#include<stdlib.h>
void districts();
void banks();
void hotels();
void main()
{
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\t\t\t\t\t\t ### WELLCOME TO KHULNA DIVISION ###\n");
    printf("\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("\n\n## Some Information About Khulna District:\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
    printf(">>Khulna Division is one of the eight divisions of Bangladesh.\n\n>>It has an area of 22,285 sq km(8,604 sq mi) and a population of 15,563,000 at the 2011 Census.\n\n>>Its headquarters and largest city is Khulna city in Khulna District.\n\n>>The Khulna division borders the North 24 Parganas district and South 24 Parganas district of West Bengal to the west, \nthe Rajshahi Division to the north,\nthe Dhaka division and the Barisal division to the east and has a coastline on the Bay of Bengal to the south.\n\n>>It is part of the Ganges River delta or Greater Bengal Delta.\nOther rivers include the Madhumati River, the Bhairab River and the Kopotokkho River.\n\n>>The region also includes several islands in the Bay of Bengal.\n\n");
    printf(">>The division was formed in 1960.\n\n");

    printf("\n\n\n\nNow Which One You Would Like To See?\n\n");
    printf("1.Banks,ATM Booths or Money Exchanging Points\n2.Hotels   or\n3.Districts Under Khulna Division.\n\n");
    int n;
    printf("\n\nEnter Any Number: ");
    scanf("%d",&n);
    system("cls");
    if(n==1)
    {
        banks();
    }
    if(n==2)
    {
        hotels();
    }
    if(n==3)
    {
        districts();
    }
}

void banks()
{

    printf("\n\n\n##Banks or ATM Booth for Money Exchanging:\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    printf("1.Uttara Bank Limited ATM Money Exchange.\nAddress:Upper Jessore Rd, Khulna, Bangladesh.\n\n2.One Bank\nAddress:JK Tower, Holding No:79 Khan-A-Sabur Road, Ward 23, Khulna.\n\n3.Exim Bank\nAddress:A Hossain Plaza, 4 Sir Iqbal Road, Khulna.\n\n4.Bangladesh Krishi Bank Khulna Corporate Branch\nAddress:Khulna 16 Sir Iqbal Road Khulna 9000.\n\n5.BRAC Bank Limited\nAddress: BRAC Bank Khulna Branch, The Daily Probaho Bhaban, 3 KDA Ave, Khulna.\n\n6.Western Union Money Transfer Daulotpur Khulna\nAddress: Daulatpur.\n\n7.Bank Asia ATM\nAddress: 28, 147 Sir Iqbal Rd, Khulna 9100.\n\n8.Trust Bank Limited ATM\nAddress: Khulna Shipyard, Khulna, Shipyard Rd, Khulna 9201.\n\n9.United Commercial Bank Limited ATM\nAddress: 12, 13 Khan Jahan Ali Rd, Khulna 9100.\n\n10.City Bank Limited ATM\nAddress: 7 Sir Iqbal Road, Khulna Sadar, Khulna, Sir Iqbal Rd, Khulna.\n\n11.Trust Bank Limited ATM\nAddress: Sailors Colony Market, Khulna (opposite of Sk Abu Naser Hospital, Mujgunni R/A), Khulna, Refugee Colony Rd, Khulna.\n\n12.Prime Bank Limited\nAddress:7 Old Jessore Rd, Khulna.\n\n13.Southeast Bank Limited ATM\nAddress: Noor Jahan Plaza Holding #155,Sir Iqbal Road Ward #21,Khulna.\n\n14.Bangladesh Commerce Bank Limited\nAddress:727 Jessore Road Daulatpur Khulna - Jessore - Dhaka Hwy, Khulna 9202\n\n");
    int r;
    printf("\t\t\t\t\tPress '1' To Return...>>> ");
    scanf("%d",&r);
    if(r==1)
    {
        system("CLS");
        return main();
    }
}


void hotels()
{

    printf("\n\n\n##Hotels In Khulna:\n^^^^^^^^^^^^^^^^^^\n1.Hotel Tiger Garden\n\n2.Hotel Castle Salam\n\n3.Hotel Royal International\n\n4.Pushpo Bilash Rest House\n\n5.Hotel City Inn Ltd\n\n6.Hotel Western Inn International\n\n");

    int in;
    printf("\n\n\nPress '1' To Enter\n\n");
    printf("Press '2' To Get Back\n\n");
    printf(">>> ");
    scanf("%d",&in);
    if(in==1)
    {

        int x;
        printf("\n\n\nWhich Hotel You Would Like To See?\n");
        printf("Enter any number: ");
        scanf("%d",&x);
        system("cls");
        if(x==1)
        {

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 1.Hotel Tiger Garden\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>Tiger Garden Int Hotel Khulna is located at 1 Kda Avenue, 1.1 miles from the center of Khulna.\n>>Phone:01769-056368\n>>Sixty Dome Mosque is the closest landmark to Tiger Garden Int Hotel Khulna.\n");
            printf(">>This Hotel is 35.3 miles from Jessore airport and 47.6 miles from Barisal airport.\n\n");
            printf("\n#Rooms:\n1.TIGER SUITE-10,000(BDT)-(Per Night)\n2.DELUXE SUITE-6,000(BDT)-(Per Night)\n3.EXECUTIVE SUITE FAMILY ROOM (3 Beds)-4,000(BDT)-(Per Night)\n4.EXECUTIVE SUITE TWIN-3500(BDT)-(Per Night)\n5.EXECUTIVE SUITE COUPLE-3200(BDT)-(Per Night)\n6.SUPERIOR DELUXE TWIN-3300(BDT)-(Per Night)\n7.SUPERIOR DELUXE SINGLE-3000(BDT)-(Per Night)\n");
            printf("\n#Facilities:1.Free High Speed WiFi\n2.Lift\n3.ATM Booth\n4.Bank\n5.Air /Bus/Train Ticketing\n6.Spacious Beautiful Lobby\n7.100 Vehicle Parking Facility\n");
            printf("\nReview:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");

            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return hotels();
            }
        }
        if(x==2)
        {
            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 2.Hotel Castle Salam\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>.Hotel Castle Salam is located at G-8 K,da Avenue Khulna, 0.1 miles from the center of Khulna.\n>>Phone:041-720160\n>>Sixty Dome Mosque is the closest landmark to Hotel Castle Salam.\n");
            printf(">>This Hotel is 36.3 miles from Jessore airport and 47 miles from Barisal airport.\n\n");
            printf("\n#Rooms:\n1.Standard Single-2100(BDT)-(Per Night)\n2.Superior Single-3400(BDT)-(Per Night)\n3.Superior Double-4200(BDT)-(Per Night)\n4.Junior Suite Single-3200(BDT)-(Per Night)\n5.Executive Suite-5000(BDT)-(Per Night)\n6.King Suite-5800(BDT)-(Per Night)\n7.Presidential Suite-8500(BDT)-(Per Night)\n8.Presidential Apartment-34000(BDT)-(Per Night)\n");
            printf("\n#Facilities:\n1.LOBBY LOUNGE\n2.ROOF TOP INFINITY POOL\n3.FITNESS CENTRE\n4.WOMEN’S SALON\n5.MEN’S BARBER SHOP\n6.AIRPORT PICK-UP & DROP-OFF\n7.ON-SITE PARKING\n8.LAUNDRY SERVICES\n9.24/7 IN-ROOM DINING\n10.CHAUFFEURED RENTAL CAR SERVICES\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");
            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return hotels();
            }

        }
        if(x==3)
        {

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 3.Hotel Royal International\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>Hotel Royal International is located at A-33, K.D.A. Avenue, 0.2 miles from the center of Khulna.\n>>Phone:01718-679900\n>>Sixty Dome Mosque is the closest landmark to Hotel Royal International.\n");
            printf(">>This Hotel is 36.3 miles from Jessore airport and 47.1 miles from Barisal airport.\n\n");
            printf("\n#Rooms:\n1.Standard Triple Room-(BDT)4,464-(Per Night)\n2.Standard Triple Room-BDT 4,989-(Per Night)\n3.Standard Triple Room-BDT 5,252-(Per Night)\n4.Executive Suite-BDT 6,145-(Per Night)\n5.Executive Suite-BDT 6,468-(Per Night)\n6.Executive Suite-BDT 7,197-(Per Night)\n7.Executive Suite-BDT 7,229-(Per Night)\n8.Executive Suite-BDT 7,610-(Per Night)\n9.Executive Suite-BDT 8,467-(Per Night)\n");
            printf("\n#Facilities:\n1.Parking\n2.Breakfast\n3.Wi-Fi\n4.Air conditioning\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");

            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return hotels();
            }
        }
        if(x==4)
        {

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 4.Pushpo Bilash Rest House\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>Pushpo Bilash Rest House is located at Outer Bypass Road Nabik Tower, Sonadanga, 3.5 miles from the center of Khulna.>>Sixty Dome Mosque is the closest landmark to Pushpo Bilash Rest House.\n");
            printf(">>Pushpo Bilash Rest House is 32.9 miles from Jessore airport and 49.2 miles from Barisal airport.\n\n");
            printf("\n#Rooms:\n1.Deluxe Rooms-3300(BDT)-(per Night)\n2.Deluxe Double-3400(BDT)-(per Night)\n3.Twin Room with City View-3500(BDT)-(per Night)\n");
            printf("\n#Facilities:1.Free private parking is possible on site \n2.24-hour front desk\n3.Room service\n4.No Wi-Fi\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nRoom service was good\n");

            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return hotels();
            }
        }
        if(x==5)
        {

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 5.Hotel City Inn Ltd\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>Hotel City Inn Ltd is located at B-1, Mojid Sarony, Kda C/A, 1.2 miles from the center of Khulna.\n>>Phone:04128-34067.\n>>Sixty Dome Mosque is the closest landmark to Hotel City Inn Ltd.\n");
            printf(">>Hotel City Inn Ltd is 35.2 miles from Jessore airport and 47.8 miles from Barisal airport.\n\n");
            printf("\n#Rooms:\n1.Deluxe Family-4,200.00(BDT)-(Per night)\n2.Deluxe Couple-3,381.0(BDT)-(per night)\n3.City Suite-3,000.00(BDT)-(Per night)\n4.Suite Single-3,500.00(BDT)-(Per night)\n5.Suite Couple-4,000.00(BDT)-(Per night)\n6.Executive Suite-6,038.00(BDT)-(Per Night)\n7.Standard Single-2,174.00(BDT)-(Per Night)\n8.Standard Couple -2,898.00(BDT)-(Per Night)\n9.Tiger Suite-24,150.00(BDT)-(Per Night)\n10.Suite Twin-5,072.00(BDT)-(Per Night)\n");
            printf("\n#Facilities:\n1.Buffet Breakfast,Newspaper,Fruit Basket (on Arrival)Fitness Center & Wi-Fi Facilities\n\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");

            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return hotels();
            }
        }
        if(x==6)
        {

            printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t 6.Hotel Divine Centre Ltd\n ");
            printf("\t\t\t\t\t\t\t\t\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
            printf("\n>>This Business class Hotel and leisure resort is conveniently located  atChowgacha - Churamonkathi road, Jessore 7410 Bangladesh.\n>>Phone:01854-172014\n>>This hotel is 25 km from the ancient district town Jessore and Jessore Airport,in the heart of green vally of Chowgacha Upazila.\n");
            printf("\n#Rooms:\n1.Deluxe Double Room-(BDT)8,338.00(Per night)\n2.Luxury Double Room-(BDT) 9,646.00(Per night)\n3.Super Deluxe Suite-(BDT)15,969.00(Per night)\n4.Superior Twin Room-(BDT)15,969.00(Per night)\n");
            printf("\n#Facilities:1.Free parkingj\n2.Free High Speed Internet\n3.Free breakfast\n4.Children Activities (Kid / Family Friendly)\n5.Airport transportation\n");
            printf("\n#Review:\nRooms are good\nStaffs are friendly and helpful\nroom service was good\n");
            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return hotels();
            }

        }

    }
    else if(in==2)
    {
        system("CLS");
        return main();
    }
}



void districts()
{

    printf("\n\nKhulna division, in the southwest of the country, is made up of marshland, dense jungle and numerous rivers, which once formed natural barriers against invasion from the west or east. Khulna division proudly claims the Sundarbans (Beautiful Forest), an enormous network of waterways through waterlogged jungle that is haven for wild life. The monuments and mosques scattered around Bagerhat also make a worthwhile excursion.\n\n");

    printf("\nThere are 10 districts under Khulna Division:");
    printf("\n## Districts Under Khulna Division:\n");
    printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n");
    printf("1.Chuadanga\n2.Jessore\n3.Jhinaidah\n4.Khulna\n5.Kushtia\n6.Magura\n7.Meherpur\n8.Narail\n9.Shatkhira\n10.Bagerhat\n\n");
    int g;
    printf("\n\n\nPress '1' To Enter\n\n");
    printf("Press '2' To Get Back\n\n");
    printf(">>> ");
    scanf("%d",&g);
    if(g==1)
    {
        printf("\n\n\nWhich District You Would Like To See?\n");
        int n;
        printf("\nEnter any number: ");
        scanf("%d",&n);
        system("cls");
        if(n==1)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 1.Chuadanga\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Chuadanga:\n\n1.The Freedom Fighter's Mass Grave.\n2.Gholdari Jami Mosque.\n3.Gholdari Neel Kuthi.\n4.Carew & Company Bangladesh Limited\n5.Three domed Chuadanga Bara Mosque\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.The Freedom Fighter's Mass Grave:\n\nThe Freedom Fighter's Mass Grave is located at Dhopakhali,Uthali,ibannagar,Chuadanga.It covers a large area and It is one of the top attraction in Chuadanga District.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Gholdari Jami Mosque:\n\nGholdari Jami Mosque is located at Gholdari, Alamdanga, Chuadanga.It is an Old Mosque built in 17th century.It is one of the top attraction in Chuadanga District.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Gholdari Neel Kuthi:\n\nGholdari Neel Kuthi is located at Gholdari, Alamdanga, Chuadanga.It is an old kutir bt it has a great tourist attraction..Many people came here to visit this palace.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Carew & Company Bangladesh Limited:\n\nCarew & Company Bangladesh Limited is located at Darsana - Mujibnagar Rd, Darshana, Chuadanga.It was established by private industrialists in 1938 and has a sugar mill, one Distillery and one Pharmaceutical unit under its ownership.Machinery & apparatus of the sugar mill were supplied by M/S Blairs Ltd. of Glasgow,U.K. It ongoing trial production in 1938-39.\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Three domed Chuadanga Bara Mosque:\n\nThree domed Chuadanga Bara Mosque is located at Chuadanga Sadar, Chuadanga.This is a very beautyful Mosque and buit in 17th century.It is one of the top attraction in Chuadanga District.\n");
            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return districts();
            }
        }


        else if(n==2)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 2.Jessore\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Jessore:\n\n1.Michael Madhusudan Dutt Memorial\n2.Godkhali Flower Garden\n3.Benapole Border Gate\n4.Imam Bara\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Michael Madhusudan Dutt Memorial:\n\nThe birth place of the celebrated poet Micheal Modhusudan Dutta, by most accounts the first modern poet of Bangla Literature. He was born on 25 January, 1825 and died on 29 June, 1873. On the birth anniversary of the poet, a fair called MODHUMELA is celebrated every year. Bangladesh Parjatan Corporation has built a rest-house and other tourist facilities in the place.The distance from Jessore City is 44 km. Jessore District, Khulna Division, Bangladesh.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Godkhali Flower Garden:\n\nGodkhali Flower Garden in Jessore District in Khulna Division . 12 km far  from  Benapol Border.Now it's popular as Flower Capital of Bangladesh.There more then 5000 farmer farming few km so many type of local  and foreign flower.\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Benapole Border Gate:\n\nBenapole is a boundary city in Bangladesh, the furthermost frequently used border when roaming in the middle of Kolkata in addition to Dhaka.Many people are travel to kolkata or other palce from Bangladesh by train.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Imam Bara:\n\nAn old small edifice named Haji Muhammad Mohsin Imambara is located in the Jessore town. For your information, Haji Muhammad Mohsin was one of the greatest magnanimous, philanthropist, and munificent person during his time. This old house was built by her step sister named Munnujan Khanom who was a wealthy woman (later Mohsin inherited her wealths). It was build during the year 1802. Later department of archaeology has declared this as a protected edifice.\n");

            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return districts();
            }
        }
        else if(n==3)
        {
            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 3.Jhinaidah\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Birshrestha Hamidur Rahman Museum:\n\nBirshrestha Hamidur Rahman Museum is located at Khardo Khalishpur, Moheshpur , Jhenaidah. This is the only museum listed in Jhenaidah.Shaheed Muktijoddha and Bir Sreshtho Sepoy Mohammad Hamidur Rahman’s birthday today. He was born on February 2, 1953 in Khardo Khalishpur village in Moheshpur thana of the Jhenaidah District. Later, the village is renamed as Hamid Nagar. He is the youngest among the Bir Shresthos. During the Liberation War, he was only 18 years old.\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Graveyard of Kamanna 27 Martyrs:\n\nGraveyard of Kamanna 27 Martyrs is located at Kamanna village, Shailkupa. 27 martyrs are buried here who sacrificed their lives at Kamanna village of Sailkupa upazila in Jhenidah on November 26 in 1971.People of this palace also celebrate the martyrs death anniversary every year.\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Jor Bangla Mosque:\n\nJor Bangla Mosque is located at Barobazar, Kaliganj, Jhenaidah.Jor Bangla Mosque is one of the prominent ancient mosque from Baro Bazar. Beside the mosque, a medium sized water tank is available which is known as Ondho Pukur, it means blind pond in English. The builder of the mosque dug this one to aid washing(Muslim ritual which is must before a prayer) for the people before the prayers.\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.The Biggest Banyan Tree:\n\nThe Biggest Banyan Tree is located at Mollikpur, Kaliganj, Jhenaidah.The largest and oldest banyan tree in Asia is located at Bethuli Mouza in Maliyat Union, 10 km east of Kaliganj city, 25 km from Jhenaidah district headquarters. The banyan tree currently exists across 11 acres of land. It is especially known as the banyan tree of Sweetala Mallikpur. The tree is two hundred years old. The tree-lined tree along the road is a place of rest for the traveler.\n");


            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return districts();
            }
        }
        else if(n==4)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 4.Khulna\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Khulna:\n1.Sundarbans\n2.Khanjahan Ali Bridge\n3.Hiron Point\n4.Khulna Museum\n5.Rabindra Complex\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Sundarbans:\n\nSundarbans is the largest mangrove forest in the world. It extends across Khulna, Satkhira, Bagerhat, Patuakhali and Barguna districts of Bangladesh. The Sundarbans literally means in Bengali - beautiful forest. But the Sundarbans may have been named after the Sundori tree as well, which grows abundantly there.Here you can enjoy the monkey's screaming, chirping of the birds and peacock, folks of deer, howl, owl, bee and a roar of the famous Royal Bengal Tiger. There are also 330 species of tree, 270 species of birds, 14 species of reptiles, 42 species of wild animals and 32 species of shrimp and of 200 species of fishes found in Sundarbans. Because of the scenic beauty of Sundarbans, tourists are attracted to visit the forest. Indeed, the number of tourists in the Sundarbans has increased in recent years more than ever. The best time in a year for Sundarbans tour is from mid-October to April.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Khanjahan Ali Bridge:\n\nKhan Jahan Ali Bridge is a bridge built near Khulna city on the Rupsa River. It is also known as Rupsa Bridge. The distance of the bridge from Khulna city is 4.80 km. This bridge can be called the gateway of Khulna city because the bridge connects the southern districts, especially the Mongla seaport with Khulna city. Besides connecting Khulna district and Bagerhat district, this bridge is playing an important role in the country's economy.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Hiron Point:\n\nHiron Point is a protected wildlife sanctuary in the south of the Sundarbans. Sundarbans is the largest mangrove forest in the world. It is located on the west bank of Kunga River in Khulna district which is in the southern part of Bangladesh. Another name of Hiron point is Nilkamal. UNESCO has recognized Hiron point as a World Heritage site.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Khulna Museum:\n\nKhulna Divisional Museum is located in the center of Khulna city in Sonadanga Majid Sorani, on the roundabout at Shib Bari. When you enter the museum, you will find many pictures of the Liberation War of Bangladesh arranged beside the leading upstairs. In the first floor, you’ll find hundreds of years old Shiva Statue, old-time household materials like utensils, ornaments, tools etc, which were used by ancient landlords.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Rabindra Complex:\n\nRabindra Complex is located at Dakkhindihi, Phultala, Khulna.It is one of the houses of Kabiguru Rabindranath Tagore.This Rabindra Memorial Complex built in memory of the Great Poet Rabindranath Tagore. It was the  house of Rabindranath Tagores in-laws, which was converted into a memorial complex after renovation.Now the two storied building has been decorated and renovated after receiving a government fund and was turned into a museum and photo gallery. Some rare photos of Rabindranath Tagore is showcased here. Some important documents about Tagore’s publications are also displayed here. \n");

            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return districts();
            }
        }


        else if(n==5)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 5.Kushtia\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Kushtia:\n1.Rabindranath Tagores Shilaidaha Kuthibari\n2.Tagore Lodge\n3.Lalon Academy and Shrine\n4.Hardinge Bridge\n5.Lalon Shah Bridge\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Rabindranath Tagores Shilaidaha Kuthibari:\n\nRabindranath Tagore's Shilaidaha Kuthibari is full with the memory of the poet Rabindranath Tagore. It is situated in 15 kilometers north of Kushtia town under Kumarkhali upazila at Khorshedpur in Shilaidaha union.The whole building is now open for visitors as a museum. The portraits of Rabindranath Tagore, poet Rabindranath, zamindar Rabindranath, farmer’s friend Rabindranath as well as Rabindranath's picture of different ages are displayed on the ground floor and first floor of the museum. Besides, the museum is decorated with the artworks and his used furniture.This is one of the main attraction in kushtia district. \n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Tagore Lodge:\n\nTagore Lodge is located at Mohini Mills, Kushtia Sadar, Kushtia.Tagore Lodge, the ancestral house of Nobel laureate poet Rabindranath Tagore in Kushtia town has been converted into Tagore Museum. The museum also houses a library.At a cost of Tk 13 lakh, Kushtia municipality turned the lodge to a museum. The museum is drawing visitors now. Different cultural events are also held at the museum on various occasions.Tourists from across the country as well as from overseas are coming to see this structure that is of significant historic value.This is one of the main attraction in kushtia district.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Lalon Academy and Shrine:\n\nLalon Academy and Shrine is situated on the banks of the river Kaliganga in the village of Cheuria in Kumarkhali upazila of Kushtia district, which is known as the capital of literature and culture of this region. The Baul emperor Lalon Shah is buried in Chaueria village. After his death, the disciples built the shrine of Lalon which is locally called Lalon Akhra.The place where the tomb is situated is very nice. It has been developed now with a VIP Auditorium, an indoor and an outdoor Auditorium, a complex building of Lalon Academy, a car parking area, a market and a museum. There is also a beautifull garden inside of the area.This is one of the main attraction in kushtia district.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Hardinge Bridge:\n\nHardinge Bridge is located at Bheramara , Kushtia.Hardinge Bridge is a steel railway bridge over the river Padma located at Ishwardi, Pabna and Bheramara, Kushtia in Bangladesh. It is named after Lord Hardinge, who was the Viceroy of India from 1910 to 1916. The bridge is 1.8 kilometres long.The steel railway bridge is one of the many British structures in the country. From now, 138 years ago, the bridge plan was proposed by Eastern Bengal Railway in 1889 for better rail communication of the Indian subcontinent, especially Assam, according to official records.This is one of the main attraction in kushtia district.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Lalon Shah Bridge:\n\nLalon Shah Bridge is located at Bheramara , Kushtia.Lalon Shah Bridge, locally known as Pakshey Bridge is a road bridge in Bangladesh over the river Padma, situated between Ishwardi Upazila of Pabna on the east, and Bheramara Upazila of Kushtia on the west.The bridge is 1,800 metres (5,900 ft) long and is the second longest road bridge of the country, after Bangabandhu Bridge.It is situated parallel to and south (downstream) of Hardinge Bridge. This is one of the main attraction in kushtia district.\n");



            int r;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&r);
            if(r==1)
            {
                system("CLS");
                return districts();
            }
        }
        else if(n==6)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 6.Magura\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Magura:\n1.Raza Sitaram Palace\n2.Ichakhada Neelkuthi\n3.Sreepur Jomidar Bari\n4.Arpara Eco Park\n5.Siddheshwari Moth\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Raza Sitaram Palace:\n\nThis palace is 28 km from Magura Sadar, the house of Raja Sitaram Ray is located in Mohammadpur sub-district. Raja Sitaram Ray was an independent king.Raja Sitaram Ray (1658–1714) was a sovereign king. Raja Shitaram Palace has now almost been destroyed, but holds the history of many years in every corner of its building. He rebelled against the Mughal Empire and established a short-lived sovereign Hindu dominion in Bengal. In his early life he initiated Shaktism as he came from a Shakta family. He set up capital in Mohammadpur where the palace is located and established a Dashabhuja Temple there. He rebelled against the Mughal rule and established a short-lived Hindu territory in Bengal.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Ichakhada Neelkuthi:\n\nIchakhada Neelkuthi is located at Ichakhada, Magura Sadar, Magura.It is one of the main attraction in magura district. Many people came here to visit this ancient place.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Sreepur Jomidar Bari:\n\nSreepur Jomidar Bari is located at Sreepur , Magura.The building is only 15 km away from the district town holding a smooth road communication. The entrance gate of the building is now in a vulnerable condition. Numbers of cracks have already developed on the building wall. Plaster is falling down from the ceiling.History tells during the regime of Baro Bhuiyan Pratapaditya was the king of Jessore region. In favour of Protapaditya Zaminder Sharada Ranzan Choudhuri performed the duty of zaminder in Sreepur area of the district. In this connection, Udayditya, son of Protapiditya, married Bibha Pal Choudhuri, daughter of Sharada Ranzan. Then Sharada Ranzan constructed the building with the financial help of Protapaditya.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Arpara Eco Park:\n\nArpara Eco Park is located at Arpara, Shalikha, Magura. This is the only nature attraction listed in Magura.It has a great secneric value.People came here and enjoy their leisure time.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Siddheshwari Moth:\n\nSiddheshwari Moth is located at Athara Khada, Magura Sadar, Magura.It is an old place but has a great secneric value.May people came here to see this place.This is one of the great attractions of magura districts.\n");


            int q;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&q);
            if(q==1)
            {
                system("CLS");
                return districts();
            }

        }
        else if(n==7)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 7.Meherpur\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Meherpur:\n1.Mujibnagar Memorial Monument and Complex\n2.Mujibnagar Smritishoudh\n3.Meherpur Shahid Smritishoudh\n4.Meherpur Poura Graveyard\n5.Aamjhupi Neel Kuthi\n\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Mujibnagar Memorial Monument and Complex:\nMujibnagar Memorial Monument and Complex is located at Mujibnagar, Meherpur.A memorial complex covering 20.10 acres (8.13 ha) has been built at the site where the ministers of that first government took their oaths. Throughout the war with the Pakistan Army, the Mujibnagar government would serve as the nominal head of the pro-independence guerrilla militias, mainly the Mukti Bahini.The historic Mujibnagar is a very important part of our glorious history of independence that we achieved in 1971. This place is widely known to the researchers, academicians and journalists at home and abroad.Mujibnagar now is a town in the Meherpur district of Bangladesh. Meherpur was earlier a part of Kushtia dsitrict. The place Boidyanathtola was later renamed Mujibnagar by the proclamation of independence, in honour of the Father of the Nation Bangabandhu Sheikh Mujibur Rahman who declared Bangladesh independence through his historic 7th March Speech.\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Mujibnagar Smritishoudh:\nMujibnagar Smritishoudh is located at Mujibnagar, Meherpur.Mujibnagar Smriti Saudha (Memorial) At the initial stage of the War of Liberation, the government in exile of the People's Republic of Bangladesh took oath at village Baidyanathtala in Meherpur district on 17 April 1971. Baidyanatala was renamed as mujibnagar after the name of Bangabandhu Sheikh Mujibur Rahman. Later a memorial monument was constructed to commemorate the place of oath.Immediately after the War of Liberation the Government of Bangladesh took initiative to make Mujibnagar memorable. On 31 August 1973 the government gave an instruction to construct a memorial at Mujibnagar. During the observance of Mujibnagar Day on 17 April 1974, Syed Nazrul Islam, the acting President of the Bangladesh Government in exile during the liberation war, formally inaugurated the project.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Meherpur Shahid Smritishoudh:\nMeherpur Shahid Smritishoudh is located in Meherpur.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Meherpur Poura Graveyard:\nMeherpur Poura Graveyard is located at Meherpur Sadar, Meherpur. \n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Aamjhupi Neel Kuthi:\nAamjhupi Neel Kuthi is located at Aamjhupi, Meherpur Sadar, Meherpur.\n");



            int w;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&w);
            if(w==1)
            {
                system("CLS");
                return districts();
            }
        }
        else if(n==8)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 8.Narailn\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Narail:\n1.Shaheed Bir Nur Mohammad Sheikh Complex\n2.Kalia Palace\n3.Narail Palace\n4.S M Sultan Memorial Gallery\n5.Badha Ghat\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Shaheed Bir Nur Mohammad Sheikh Complex:\n\nShaheed Bir Nur Mohammad Sheikh Complex is located at Nur Mohammad Nagar, Narail Sadar, Narail.Sheikh, Birsrestha Nur Mohammad (1936-1971) Lance Nayek of East Pakistan Rifles (EPR) and a martyr in the war of liberation. Nur Mohammad Sheikh was born on 26 February 1936 at village Mahiskhali in Narail district.An orphan in childhood he had to sell his paternal landed property for his livelihood.This complex was built to show respct to him.\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Kalia Palace:\n\nKalia Palace is located at Naragati, Kalia, Narail.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Narail Palace:\n\nNarail Palace is located at Murapara, Narail Sadar, Narail. \n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.S M Sultan Memorial Gallery:\n\nS M Sultan Memorial Gallery is located in Narail. This is the only museum listed in Narail.The art gallery in Narail at S. M. Sultan Memorial contains collection of his paintings. A significant portion of first and second floor is occupied by his paintings. This artist was concerned about preserving his works. S. M. Sultan had a boat by which he used to have a pleasure trip over the river Chitra. This boat was placed beside his house, also beside the river itself. A boat race locally known as Nouka Baich used to hold every year at River Chitra. It is probably during the birth day of the artist. It will be best if you can visit the place during that time.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Badha Ghat:\n\nBadha Ghat is located in Narail.Badha Ghat is located next to the river Chitra. It was built by the Zamindar of Narail. His residence was close from Badha Ghat. Though a Zamindar built it, it was called Rajbari Ghat also by the local people. Zamindar used to pass his afternoon in this Ghat pretty often. The Victoria College of Narail City is also close to this ghat. \n");



            int h;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&h);
            if(h==1)
            {
                system("CLS");
                return districts();
            }
        }
        else if(n==9)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t 8.Shatkhira\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Shatkhira:\n1.Ruposhi Debhata Mangrove Tourist Center\n2.Parabajpur Mosque\n3.Mozaffer Garden Park\n4.Jahajghata Naval Fort\n5.Ishwaripur Hammam Khana\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t1.Ruposhi Debhata Mangrove Tourist Center:\n\nRuposhi Debhata Mangrove Tourist Center is located at Debhata, Satkhira.The magnificent forest at the frontier and banks of Satkhira's Ichhamati river are gradually increasing in popularity as well as the beauty is growing.By going there one can enjoy the beauty of the nature. As it is based on the idea of Sunderbans , day by day its demand is increasing.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Parabajpur Mosque:\n\nParabajpur Mosque is located at Mukundapur, Satkhira Sadar, Satkhira.It is one of the old heritage of Shatkhira district.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Mozaffer Garden Park:\n\nMozaffer Garden Park is located in Satkhira. This is the only amusement park listed in Satkhira.The park is situated on 60 acres of fine property. It is in the heart of Satkhira, only two hours away from the Sundarbans with all the transport facilities, but they are enough away from the crowd of the busy town. The area is fairly open with numerous trees to provide our customers with both sun and shade and the most desired greeneries and fresh air.There is a resort and also a zoo inside the park.\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Jahajghata Naval Fort:\n\nJahajghata Naval Fort is located at Jahajghata , Shyamnagar, Satkhira.Jahajghata Naval fort is an ancient building at Moutola, Satkhira which was made in 1567. But the building as very fine decoration it still looks so young that you can't say that it was made in 1567. The decoration of the fine art of the wall will take you to your dream world. The extraordinary beauty will make you feel more than just being surprised. The fine natural beauty has also enriched the beauty of the total things. The big trees beside it say the age of the nature.\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Ishwaripur Hammam Khana:\n\nIshwaripur Hammam Khana is located at Satkhira - Kalaroa Road, Satkhira.This  Hammamkhana built in the late sixteenth century by Maharaja Pratapaditya.It has a great attraction value and many people visit here.\n");



            int a;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&a);
            if(a==1)
            {
                system("CLS");
                return districts();
            }
        }
        else if(n==10)
        {

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Bagerhat\n\t\t\t\t\t\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~\n\n");
            printf("\n#Top Tourist Spots Under Bagerhat:\n1.Shaat Gombuj Mosque\n2.Khan Jahan Dighi\n3.Khan Jahan Ali's Tomb\n4.Chandra Mahal Eco Park\n5.Bagerhat Museum\n\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\tn1.Shaat Gombuj Mosque:\n\nShaat Gombuj Mosque is located at Bagerhat-Khulna Road, Bagerhat - 9300.This Mosque is near the northwestern outskirts of Dhaka in the Mohammadpur area.It is a fine example of the provincial Mughal style of architecture introduced in Bangladesh in the 17th century. The mosque's most notable features are its seven bulbous domes crowning the roof and covering the main prayer hall. Probably erected by Governor Shaista Khan, the monument stands in a romantic setting on a buttressed 15-foot-high bank overlooking an extensive flood plain.\n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t2.Khan Jahan Dighi:\n\nKhan Jahan Dighi is located on the southern side of Hazrat Khan Jahan Ali (Rh)s Shrine occupying about 200 bighas of land. Hazrat Khan Jahan Ali (Rh) released few crocodiles in this dighi. Two large-sized crocodiles named Kala Pahar and Dhala Pahar were very famous crocodiles in Khan Jahan dighi. But they have died later. Some sweet water crocodiles were also released in the dighi. People coming to visit the shrine feed the crocodiles with ducks, hens, sheep and goats. Dighi's main ramp is spacious and beautiful.\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t3.Khan Jahan Ali's Tomb:\n\nKhan Jahan Ali's Tomb is located in Bagerhat. Besides this landmark, there are eight more landmarks listed in Bagerhat.Tomb of Khan Jahan stands on a high artificial mound, as mainly known as the Dargah complex of Khan Jahan. The complex consists of the square tomb building of Khan Jahan himself; a case of Muhammad Tahir, his diwan; a single-domed mosque and the so-called kitchen. It measures as 13.7 meters height and 9.1 meters width. The four exterior angles of the building are maintained with solid circular towers. There are four walls which have a thickness of 2.4 meter, have stone casings up to the height of about 0.9 meter for preventing the building from ground moisture. The ground moisture is common in the humid climate of south Bengal. It is located on the northern bank of the so-called Thakur dighi and is surrounded by an outer wall of 67.1 meter from east to west and 64.7 meter from north to south.\n");

            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t4.Chandra Mahal Eco Park:\n\nChandra Mahal Eco Park is located at Chandra-Mahal Road, Bagerhat. This is the only amusement park listed in Bagerhat.One of the busy tourism spot is chandromohol eco .it's got a great place.in the middle of mongla-bagerhat-khulna highway.everyday people gather here for visit this place.The Mahal was built after the name of Chandra wife of a landlord. \n");


            printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t5.Bagerhat Museum:\n\nBagerhat Museum is located on the southeastern corner of Shat Gambuj Masjid (60 dome mosque) in Bagerhat. It was built in 1995 to preserve the memory of Khan Jahan Ali and the Muslim culture of the area.This is the only museum listed in Bagerhat.It is a one storied building. It has two large galleries to display antiques. Antiques found in Bagerhat are categorized into two parts. One of them are the earthen materials and another is wooden and slate (rock/stone). There is a photo gallery too to display the rare photos of artifacts and ruined architectural structures.\n");



            int s;
            printf("\n\n\n\t\t\t\t\tPress '1' To Return...>>> ");
            scanf("%d",&s);
            if(s==1)
            {
                system("CLS");
                return districts();
            }

        }
        printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tHope You Like It\n");
        printf("\n\t\t\t\t\t\t\t\t\t\t\t\t*****#Thank You#*****");

    }
    else if(g==2)
    {
        system("CLS");
        return main();
    }


}
