#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include "headnyaa.h"

int main(){

     char kode[20],u[50],p[50];
     char str [100]="abcdefghijklmnopqrstuvwxyz1234567890";
	  char karakter;

head("HALAMAN LOGIN C++");
   cout<<"<----SILAHKAN LOGIN UNTUK MEMULAI APLIKASI---->"<<endl;
   ulang:
   cout<<"Username  : ";gets(u);
   cout<<"Password  : ";


   for(int a=0;a<50;a++){
       karakter=getch();

      if(karakter=='\r'){
			p[a]=0;
         break;
		}else if(karakter=='\b'){
			if(a!=0)
         cout<<"\b \b";
			p[a]=0;
			p[a-1]=0;
			a-=2;

         if(a<-1)a=-1;
         continue;
		}else if(strchr(strupr(str),karakter)-str<=35&&strchr(strupr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else if(strchr(strlwr(str),karakter)-str<=35&&strchr(strlwr(str),karakter)-str>=0){
      	cout<<"*";
         p[a]=karakter;
      }else{
         if(a>0){
           a-=1;
         }
      }
	}

   if((strcmp(u,"ajiw")==0)&&(strcmp(p,"predator3445")==0)){
      clrscr();
       cout<<"   <---ANDA TELAH BERHASIL LOGIN--->"<<endl;
       cout<<" ....................................."<<endl;
   }else{
   clrscr();
   cout<<"        <---LOGIN....GAGAL--->    "<<endl;
   cout<<"===Silahkan Login Untuk Memulai APP===!"<<endl;
     goto ulang;

   }

   getch();
}
