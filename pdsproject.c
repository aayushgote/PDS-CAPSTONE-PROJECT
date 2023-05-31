#include<stdio.h>
#include<stdlib.h>
int singledeluxe=42,doubledeluxe=42,dinningroom=5,meetingroom=5,count=0,rfcode=1000;
void begin();
void roomavailability();
void aboutus();
void main();
struct constumer
{
    char name[100];
    char address[20];
    char phone[10];
    int noofpersons;
    char nationality[20];
    int noofrooms;
    int typeofroom;
    int arrivaldate[3];
    int arrivaltime[2];
    int noofdays;
    int departuredate[3];
    int departuretime[2];
    int referencecode;

};
struct requester
{
    char name[40];
    char branch[30];
    int phone[20];
    char department[50];

};
int error(int a,int b,int c,int d,int e)
{
    int check=1,i;
    if(b-a>7 || a<1 || a>31 || b<1 || b>31 || c!=d || c<1 || c>12 || d<1 || d>12 || e>=5)
    check=0;
    if(check==0){
        printf("Wrong input\n");
        printf("Please check your inputs once again and try later");
        printf("\n");
        printf("press 1 to exit:");
        scanf("%d",&i);
        if(i==1){
            system("cls");
            return check;
        }
    }
    else
    return check;
}
void print(int a,int b,struct constumer A[],int d)
{   
    printf("===============================================================================================================================================");
    printf("\n");
    int n,i;
    printf("%s",A[count].name);
    printf("\n");
    printf("Arrival date:");
    for(int i=0;i<3;i++){
        printf("%d",A[count].arrivaldate[i]);
        printf("/");}
        printf("\n");
    printf("departure date:");
    for(int i=0;i<3;i++){
        printf("%d",A[count].departuredate[i]);
        printf("/");
    }
    
    printf("\n");
    if(a==1)
    n=(800*b*d);
    else if(a==2)
    n=(1200*b*d);
    else if(a==3)
    n=(5000*b*d);
    else
    n=(1000*b*d);
    printf("Your reference code is %d",rfcode);
    printf("\n");
    A[count].referencecode=rfcode;
    printf("YOUR TOTAL BILL IS %d",n);
    printf("\n");
    ++count;
    ++rfcode;
    printf("===============================================================================================================================================");
    printf("\n");
    printf("                                      ***   THANK YOU  ***                                                                                    ");
    printf("\n");
    printf("press 1 to exit:");
    scanf("%d",&i);
    if(i==1){
        system("cls");
        begin();
    }


}
void aboutus()
{   
    int i;
    printf("=========================================================================================================================================================================");
    printf("\n");
    printf("The institute has a guest house situated in the main IIT campus located at Argul, in order to provide accommodation to individuals");
    printf("\n");
  printf(" and groups associated with official visits to IIT or guests visiting our campus.");
  printf("\n");
printf("The guest house is comprised of a total of 42 single and double bedded air conditioned rooms with attached bathrooms and all modern amenities.");
printf("\n");
   printf("===========================================================================================================================================================================");
   printf("\n");
printf("Enter 1 to exit:");
scanf("%d",&i);
if(i==1){
system("cls");
begin();}
}
void roomcancellation(struct constumer A[])
{   
    int n,d,k,check=0;
    printf("Enter your reference code:");
    scanf("%d",&n);
    for(int i=0;i<=count;i++){
        if(n==A[i].referencecode){
            printf("Your total booked rooms are %d",A[i].noofrooms);
            printf("\n");
            printf("No of rooms you want to cancel:");
            scanf("%d",&k);
            if(A[i].typeofroom==1){
    singledeluxe=singledeluxe+k;
    A[i].noofrooms=A[i].noofrooms-k;}
    else if(A[i].typeofroom==2){
    doubledeluxe=doubledeluxe+k;
    A[i].noofrooms=A[i].noofrooms-k;}
    else if(A[i].typeofroom==3){
    dinningroom=dinningroom+k;
    A[i].noofrooms=A[i].noofrooms-k;}
    else if(A[i].typeofroom==4){
    meetingroom=meetingroom+k;
    A[i].noofrooms=A[i].noofrooms-k;}
     printf("your room is cancelled ");
     printf("\n");
     check=1;
     }
    }
    if (check==0){
    printf("Invalid reference code");
    printf("\n");
    printf("Press 1 to exit");
    scanf("%d",&n);
    if(n==1){
         system("cls");
         begin();
     }
    }
    if(check==1){
        printf("press 1 to exit:");
        scanf("%d",&n);
        if(n==1){
            system("cls");
            begin();
        }

    }
}


void data(struct constumer A[1000], struct requester B[1000])
{
   int i,e;
   printf("ENTER BOOKING DETAILS:");
   printf("\n");
   printf("ENTER NAME:");
   scanf("%s",A[count].name);
   printf("\n");
   printf("ENTER YOUR ADDRESS:");
   scanf("%s",A[count].address);
   printf("\n");
   printf("ENTER YOUR PHONE NO.:");
   scanf("%s",A[count].phone);
   printf("\n");
   printf("NO.OF PERSONS:");
   scanf("%d",&A[count].noofpersons);
   printf("\n");
   printf("NATIONALITY:");
   scanf("%s",A[count].nationality);
   printf("\n");
   printf("NO.OF ROOMS:");
   scanf("%d",&A[count].noofrooms);
   printf("\n");
   printf("TYPE OF ROOM:");
   scanf("%d",&A[count].typeofroom);
   printf("\n");
   printf("ARRIVAL DATE(DD/MM/YY)");
   printf("\n");
   printf("day:");
   scanf("%d",&A[count].arrivaldate[0]);
   printf("month:");
   scanf("%d",&A[count].arrivaldate[1]);
   printf("year:");
   scanf("%d",&A[count].arrivaldate[2]);
   printf("\n");
   printf("No. of days:");
   scanf("%d",&A[count].noofdays);
   printf("\n");
printf("DEPARTURE DATE(DD/MM/YY)");
printf("\n");
   printf("day:");
   scanf("%d",&A[count].departuredate[0]);
   printf("month:");
   scanf("%d",&A[count].departuredate[1]);
   printf("year:");
   scanf("%d",&A[count].departuredate[2]);
   printf("\n");
   printf("ENTER ARRIVAL TIME");
   printf("\n");
   printf("hours:");
   scanf("%d",&A[count].arrivaltime[0]);
   printf("minutes:");
   scanf("%d",&A[count].arrivaltime[1]);
   printf("\n");
 printf("ENTER DEPARTURE TIME");
 printf("\n");
   printf("hours:");
   scanf("%d",&A[count].departuretime[0]);
   printf("minutes:");
   scanf("%d",&A[count].departuretime[1]);
   printf("\n");
printf("ENTER REQUESTERS DETAILS");
printf("\n");
printf("NAME:");
scanf("%s",B[count].name);
printf("\n");
printf("BRANCH:");
scanf("%s",B[count].branch);
printf("\n");
printf("DEPARTMENT:");
scanf("%s",B[count].department);
printf("\n");
e=error(A[count].arrivaldate[0],A[count].departuredate[0],A[count].arrivaldate[1],A[count].departuredate[1],A[count].typeofroom);
if(e==1){
printf("press 1 to confirm your booking and 2 to exit:");
scanf("%d",&i);
if(i==1){
    if(A[count].typeofroom==1)
    singledeluxe=singledeluxe-A[count].noofrooms;
    else if(A[count].typeofroom==2)
    doubledeluxe=doubledeluxe-A[count].noofrooms;
    else if(A[count].typeofroom==3)
    dinningroom=dinningroom-A[count].noofrooms;
    else if(A[count].typeofroom==4)
    meetingroom=meetingroom-A[count].noofrooms;
 system("cls");
    print(A[count].typeofroom,A[count].noofrooms,A,A[count].noofdays);  } 
else if(i==2){
system("cls");
begin();
}
}
if(e==0)
begin();
}

void begin(){
    static struct constumer A[1000];
    static struct requester B[1000];
    int n,i;
    printf("press:");
     printf("\n");
    printf("1:To book a room");
    printf("\n");
    printf("2:Room availability");
    printf("\n");
    printf("3:About us");
    printf("\n");
    printf("4:Exit");
    printf("\n");
    printf("5:For room cancellation");
    printf("\n");
    scanf("%d",&n);
    if(n==1)
    data(A,B);
    else if(n==2)
    roomavailability();
    else if(n==3){
    aboutus();
    return;}
    else if(n==4)
    return;
    else if(n==5)
    roomcancellation(A);
    else{
    printf("Please enter valid input");
    printf("\n");
    printf("press 1 to exit:");
    scanf("%d",&i);
    if(i==1){
    system("cls");
    begin();}
    }




}
void roomavailability()
{
    int a;
   printf("single deluxe:%d",singledeluxe);
   printf("\n");
   printf("double deluxe:%d",doubledeluxe);
   printf("\n");
printf("Dinning room:%d",dinningroom);
printf("\n");
printf("Meeting room:%d",meetingroom);
printf("\n");
printf("Enter 1 to exit:");
scanf("%d",&a);
if(a==1){
system("cls");
begin();}


}

void main()
{   
    printf("================================================================================================");
    printf("\n");
    printf("           ==================================================              ");
    printf("\n");
    printf("              WELCOME TO GUEST HOUSE IIT BUHUBANESHWAR");
    printf("\n");
    printf("         ===================================================");
    printf("\n");
    printf("TYPE OF ROOMS:");
    printf("\n");
    printf("1:singledeluxe 2:Doube deluxe 3:Dinning room 4:Meeting room");
     printf("\n");
     printf("charges:");
     printf("\n");
     printf("Type 1:800");
     printf("\n");
     printf("Type2:1200");
     printf("\n");
     printf("Type 3:5000");
     printf("\n");
     printf("Type4:1000");
     printf("\n");
    begin();



}