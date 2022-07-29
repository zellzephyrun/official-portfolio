/*
COPYRIGHT
    AUTHOR: Henrique Cardoso de Santana
    BACHELOR'S DEGREE IN COMPUTER SCIENCE
    2022 @ ALL RIGHTS RESERVED 

⠄⠠⢀⠐⡀⢐⠐⠐⠄⠂⠐⠄⠂⠐⠄⠐⠄⠂⠐⠈⠠⠑⠨⠢⡊⠔⡐⠄
⠄⠂⠠⠐⠄⠄⡀⠄⠂⠄⠄⠄⠄⠄⠄⠄⠂⠄⠄⠄⢀⠄⡀⠄⠈⠨⠠⡁
⠄⠈⠄⠄⡀⢂⠠⠐⢀⠂⠠⠈⠄⠂⠄⠄⠄⠄⠄⠈⠄⠠⠄⠂⡀⠄⠈⠐
⠄⠄⠄⡂⡐⠠⡂⠅⡂⠌⡐⠈⠄⠨⢀⠂⡁⠌⠠⡁⡂⠅⠌⠄⢂⠠⠄⠄
⠄⠄⢂⠢⢨⣶⡾⢷⣦⡅⡂⠅⡡⢁⠂⡂⡂⢅⢑⣴⣾⠾⣮⣌⢐⠠⠄⠄
⠄⠄⢂⢊⢿⡏⠡⠂⢽⡗⢌⢂⠢⡁⠪⡐⠄⢕⢸⣿⠑⠡⢸⡿⢐⠨⠄⠄
⠄⠄⠅⡢⡙⠿⣾⢼⠟⡕⡑⢔⠡⡊⢌⠢⡑⡑⡌⡻⢷⢷⠟⢍⠢⡁⠂⠄
⠄⠄⠌⡂⡪⡑⡆⣇⣣⣱⣸⣰⣱⣜⣬⣪⣬⣦⣣⣎⣖⣔⣕⢅⢕⠨⠄⠄
⠄⠄⡑⣬⣺⡾⣿⣿⣻⣯⣿⣟⣿⣽⣿⣻⣿⣾⢿⣻⣿⣻⣯⣿⣲⢅⠄⠄
⠄⠄⢪⢗⣯⡏⠙⣯⣿⣯⣷⣿⣿⣽⣾⣿⢷⣿⡿⣿⣻⠝⢓⡷⡯⡣⠄⠁
⠄⠄⠈⢝⢞⡿⣦⡀⠙⠯⢿⢷⣿⣽⢿⣾⢿⡯⡟⠏⢁⢤⡿⡝⡕⠁⠄⡀
⠄⠄⠄⠄⠑⠝⣗⣟⡷⣤⣀⣁⠈⠈⠉⠊⣁⡠⣤⢶⣻⢽⠱⠑⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠐⠸⠹⠽⡽⣽⣻⣻⣟⣟⣷⣻⢽⢫⠣⠃⠄⠄⠄⠄⠄⠁
⠄⠄⠄⠄⠄⠄⠄⠄⠈⠁⠣⢣⢓⢗⢳⢹⢸⠸⠈⡀⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠄⠄⠄⠄⠄⠄⠄⠄⠄I CAN SEE YOU⠄⠄⠄⠄⠄⠄⠄⠄⠄
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/



#include<iostream>
using namespace std;

int main(){
	
	int quant;
	int choice;
	
	int qRooms = 0, qPasta = 0, qBurger = 0, qSalad = 0, qJuice = 0, qChicken = 0; /* Quantity of food we have*/
	int sRooms = 0, sPasta = 0, sBurger = 0, sSalad = 0, sJuice = 0, sChicken = 0; /* Quantity of food we sold*/
	
	int totalRooms = 0, totalPasta = 0, totalBurger = 0, totalSalad = 0, totalJuice = 0, totalChicken = 0; /* Total price of the items */
	
	cout<<"\n\t Quantity of items available \n";
	cout<<"\n Rooms available: ";
	cin>>qRooms;
	cout<<"\n Pasta available: ";
	cin>>qPasta;
	cout<<"\n Burgers available: ";
	cin>>qBurger;
	cout<<"\n Salad available: ";
	cin>>qSalad;
	cout<<"\n Juice available: ";
	cin>>qJuice;
	cout<<"\n Chicken rolls available: ";
	cin>>qChicken;
	
	m:
	cout<<"\n\n\t\t\t Please, select from the given menu options \n";
	cout<<"\n\n1) Rooms";
	cout<<"\n2) Pasta";
	cout<<"\n3) Burger";
	cout<<"\n4) Salad";
	cout<<"\n5) Juice";
	cout<<"\n6) Chicken Rolls";
	cout<<"\n7) Sales & Inventory";
	cout<<"\n8) EXIT";
	
	cout<<"\n\n Please, enter your choice using the keyboard:   ";
	cin>>choice;
	
	switch(choice){
		
		case 1: 
			cout<<"\n\n Enter the number of rooms you want: ";
			cin>>quant;
			if(qRooms - sRooms >= quant){
				sRooms = sRooms + quant;
				totalRooms = totalRooms + quant*1200;
				cout<<"\n\n\t\t"<<quant<<" room(s) have been allotted to you.\n\n";
				goto m;
			} else {
				cout<<"\n\t Only "<<qRooms - sRooms<<" rooms remaining in the hotel.\n\n";
				break;
			}
		
		case 2: 
			cout<<"\n\n Enter the quantity of pasta: ";
			cin>>quant;
			if(qPasta - sPasta >= quant){
				sPasta = sPasta + quant;
				totalPasta = totalPasta + quant*55;
				cout<<"\n\n\t\t"<<quant<<" pasta(s) is the order.\n\n";
				goto m;
			} else {
				cout<<"\n\t Only "<<qPasta - sPasta<<" pasta remaining in the inventory. \n\n";
				break;
			}
		
		case 3: 
			cout<<"\n\n Enter the quantity of burgers: ";
			cin>>quant;
			if(qBurger - sBurger >= quant){
				sBurger = sBurger + quant;
				totalBurger = totalBurger + quant*35;
				cout<<"\n\n\t\t"<<quant<<" burger(s) is the order. \n\n";
				goto m;
			} else {
				cout<<"\n\t Only "<<qBurger - sBurger<<" burgers remaining in the inventory. \n\n";
				break;
			}
		
		case 4: 
			cout<<"\n\n Enter the quantity of salad: ";
			cin>>quant;
			if(qSalad - sSalad >= quant){
				sSalad = sSalad + quant;
				totalSalad = totalSalad + quant*25;
				cout<<"\n\n\t\t"<<quant<<" salad(s) is the order. \n\n";
				goto m;
			} else {
				cout<<"\n\t Only "<<qSalad - sSalad<<" salads remaining in the inventory. \n\n";
				break;
			}
			
		case 5: 
			cout<<"\n\n Enter the quantity of juice: ";
			cin>>quant;
			if(qJuice - sJuice >= quant){
				sJuice = sJuice + quant;
				totalJuice = totalJuice + quant*10;
				cout<<"\n\n\t\t"<<quant<<" juice(s) is the order. \n\n";
				goto m;
			} else {
				cout<<"\n\t Only "<<qJuice - sJuice<<" juices remaining in the inventory. \n\n";
				break;
			}
		
		case 6: 
			cout<<"\n\n Enter the quantity of chicken rolls: ";
			cin>>quant;
			if(qChicken - sChicken >= quant){
				sChicken = sChicken + quant;
				totalChicken = totalChicken + quant*65;
				cout<<"\n\n\t\t"<<quant<<" cordon bleu(s) is the order. \n\n";
				goto m;
			} else {
				cout<<"\n\t Only "<<qChicken - sChicken<<" chickens remaining in the inventory. \n\n";
				break;
			}
		
		case 7:
			cout<<"\n\t\t Details of sales and inventory ";
			cout<<"\n\n Number of rooms we had: "<<qRooms;
			cout<<"\n\n Number of rooms sold: "<<sRooms;
			cout<<"\n\n Number of remaining rooms: "<<qRooms - sRooms;
			cout<<"\n\n Total sale of rooms of the day: "<<totalRooms;
			
			cout<<"\n\n Number of pasta previously stored: "<<qPasta;
			cout<<"\n\n Number of pasta sold: "<<sPasta;
			cout<<"\n\n Number of remaining pasta: "<<qPasta - sPasta;
			cout<<"\n\n Total sale of pasta of the day: "<<totalPasta;
			
			cout<<"\n\n Number of burgers previously stored: "<<qBurger;
			cout<<"\n\n Number of burgers sold: "<<sBurger;
			cout<<"\n\n Number of remaining burgers: "<<qBurger - sBurger;
			cout<<"\n\n Total sale of burger of the day: "<<totalBurger;
			
			cout<<"\n\n Number of salad previously stored: "<<qSalad;
			cout<<"\n\n Number of salad sold: "<<sSalad;
			cout<<"\n\n Number of remaining salad: "<<qSalad - sSalad;
			cout<<"\n\n Total sale of salad of the day: "<<totalSalad;
			
			cout<<"\n\n Number of juice previously stored: "<<qJuice;
			cout<<"\n\n Number of juice sold: "<<sJuice;
			cout<<"\n\n Number of remaining juice: "<<qJuice - sJuice;
			cout<<"\n\n Total sale of juice of the day: "<<totalJuice;
			
			cout<<"\n\n Number of chicken rolls previously stored: "<<qChicken;
			cout<<"\n\n Number of corden bleus sold: "<<sChicken;
			cout<<"\n\n Number of remaining chicken rolls: "<<qChicken - sChicken;
			cout<<"\n\n Total sale of cordon bleu of the day: "<<totalChicken;
			
			cout<<"\n\n\n Total sale of the day: "<<totalRooms + totalPasta + totalBurger + totalSalad + totalJuice + totalChicken;
			
			goto m;
		
		case 8:
			exit(0);
		
		default:
			cout<<"\n Please, select one of the numbers mentioned above!";
			goto m;
			
	}
	
	goto m;
}  
