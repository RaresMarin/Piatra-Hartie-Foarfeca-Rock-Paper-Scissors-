#include <iostream>
using namespace std;
int main()
{
    int n;
    string v[3];
    v[0] = "piatra";
    v[1] = "hartie";
    v[2] = "foarfeca";
    cout<<"Introdu numărul de runde";
    cin>>n;
    if(n>0)
    {
    int calc = 0;
    int om = 0;
    bool ok = true;
    while(ok==true)
    {
    for(int i=1;i<=n;i++)
    {
        int random = rand()%3;
        string alegereCal = v[random];
        cout<<"Care este alegerea ta , piatra, hartie sau foarfeca?";
        string alegere;
        cin>>alegere;
        if(alegere=="piatra" || alegere=="hartie" || alegere=="foarfeca")
        {
        cout<<"Calculatorul a ales " + alegereCal<<endl;
        if(alegere == alegereCal)
        cout<<"Avem Egalitate"<<endl;
        if(alegere=="piatra")
        {
        if(alegereCal=="hartie")
        {
        cout<<"Calculatorul a castigat!"<<endl;
        calc++;
        }
        else if(alegereCal=="foarfeca")
        {
        cout<<"Ai castigat!"<<endl;
        om++;
        }
        }
        if(alegere=="hartie")
        {
        if(alegereCal=="piatra")
        {
        cout<<"Ai castigat!"<<endl;
        om++;
        }
        else if(alegereCal == "foarfeca")
        {
        cout<<"Calculatorul a castigat!"<<endl;
        calc++;
        }
        }
        if(alegere=="foarfeca")
        {
        if(alegereCal == "piatra")
        {
        cout<<"Calculatorul a castigat!"<<endl;
        calc++;
        }
        else if(alegereCal== "hartie")
        {
        cout<<"Ai castigat!"<<endl;
        om++;
        }
        }
        cout<<"Scorul este: Jucator ";
        cout<<om;
        cout<<" : Calculator ";
        cout<<calc<<endl;
    }
    else{
        cout<<"Alegere Invalida"<<endl;
        n++;
    }
    }
    
        cout<<"Mai jucam o tura? Pentru Da scrie (D), iar pentru Nu (N).";
        char nu;
        cin>>nu;
    if((nu=='D') || (nu=='d'))
    {
        n=1;
    }
    else if((nu=='N') || (nu=='n'))
        ok=false;
    else
    cout<<"Introdu o litera persima! D sau N. :{";
}
    }
return 0;
}