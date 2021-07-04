#include <iostream>
#include <stdio.h>
#include <string>
#include <windows.h>
#include <fstream>
#include <string.h>
using namespace std;
string n_days;
string DRM;
string games;
string language;
string game_size;
string multi_enabled;
string is_dlc_aviable;
string dlc_numbers;

//DLC NUMBER
string dlc_id1;
string dlc_id2;
string dlc_id3;
string dlc_id4;
string dlc_id5;
string dlc_id6;
string dlc_id7;
int x,y,z,w,l,m,n,o,p,q,r,s,t,u;
int main()
{
cout<<"TTTTTTTTTTTTTTTTTTTTTTT        IIIIIIIIII                CCCCCCCCCCCCC"<<endl;
cout<<"T:::::::::::::::::::::T        I::::::::I             CCC::::::::::::C"<<endl;
cout<<"T:::::::::::::::::::::T        I::::::::I           CC:::::::::::::::C"<<endl;
cout<<"T:::::TT:::::::TT:::::T        II::::::II          C:::::CCCCCCCC::::C"<<endl;
cout<<"TTTTTT  T:::::T  TTTTTT          I::::I           C:::::C       CCCCCC"<<endl;
cout<<"        T:::::T                  I::::I          C:::::C"<<endl;
cout<<"        T:::::T                  I::::I          C:::::C"<<endl;
cout<<"        T:::::T                  I::::I          C:::::C"<<endl;
cout<<"        T:::::T                  I::::I          C:::::C"<<endl;
cout<<"        T:::::T                  I::::I          C:::::C"<<endl;
cout<<"        T:::::T                  I::::I          C:::::C"<<endl;
cout<<"        T:::::T                  I::::I           C:::::C       CCCCCC"<<endl;
cout<<"      TT:::::::TT              II::::::II          C:::::CCCCCCCC::::C"<<endl;
cout<<"      T:::::::::T       ...... I::::::::I ......    CC:::::::::::::::C"<<endl;
cout<<"      T:::::::::T       .::::. I::::::::I .::::.      CCC::::::::::::C"<<endl;
cout<<"      TTTTTTTTTTT       ...... IIIIIIIIII ......         CCCCCCCCCCCCC"<<endl;

cout<<endl;

cout<<" Nome del gioco cracckato (Senza Spazio) "<<endl;
cin>>games;
cout<<endl;

cout<<" Dopo quanti giorni e' stato craccato ? "<<endl;
cin>> n_days;
cout<<endl;

cout<<" Protezione del gioco utilizzata ? "<<endl;
cin>> DRM;
cout<<endl;

cout<<" Che lingue sono disponibili nel gioco ?"<<endl;
cin>>language;
cout<<endl;

cout<<" Quanto pesa il gioco ?"<<endl;
cin>>game_size;
cout<<endl;

cout<<" Il multiplayer funziona ?"<<endl;
cin>>multi_enabled;
cout<<endl;

dlc:
cout<<" Sono disponibili DLC ?"<<endl;
cin>>is_dlc_aviable;
cout<<endl;

//YES DLC

if (is_dlc_aviable == "yes", is_dlc_aviable =="si")
{
    cout<<"Quanti dlc ci sono ?"<<endl;
    cin>>dlc_numbers;
    cout<<endl;
    if (dlc_numbers == "1")
    {
        cout<<" Inserisci il nome del dlc oppure inserisci semplicemente l'ID del dlc "<<endl;
        cin>>dlc_id1;
        cout<<endl;
    }

    else if (dlc_numbers  =="2")
    {
        cout<<" Inserisci il nome del primo dlc oppure inserisci semplicemente l'ID del dlc "<<endl;
        cin>>dlc_id1;
        cout<<endl;

        cout<<" Inserisci il nome del secondo dlc oppure inserisci semplicemente l'ID del dlc "<<endl;
        cin>>dlc_id2;
        cout<<endl;
    }

        else if (dlc_numbers  =="3")
    {
        cout<<" Inserisci il nome del primo dlc oppure inserisci semplicemente l'ID del dlc "<<endl;
        cin>>dlc_id1;
        cout<<endl;

        cout<<" Inserisci il nome del secondo dlc oppure inserisci semplicemente l'ID del dlc "<<endl;
        cin>>dlc_id2;
        cout<<endl;

        cout<<" Inserisci il nome del terzo dlc oppure inserisci semplicemente l'ID del dlc "<<endl;
        cin>>dlc_id3;
        cout<<endl;
    }

    else if (dlc_numbers <="0", dlc_numbers >="8")
    {
        cout<<"Nessun valore inserito, torno alla scelta del dlc..."<<endl;
        cout<<endl;
        goto dlc;
    }
}

//NO DLC
else if(is_dlc_aviable == "no")
{
    cout<<"Perfetto passo al prossimo step..."<<endl;
    cout<<endl;
}

string a_logo = "TTTTTTTTTTTTTTTTTTTTTTT        IIIIIIIIII                CCCCCCCCCCCCC";
string b_logo = "T:::::::::::::::::::::T        I::::::::I             CCC::::::::::::C";
string c_logo = "T:::::::::::::::::::::T        I::::::::I           CC:::::::::::::::C";
string d_logo = "T:::::TT:::::::TT:::::T        II::::::II          C:::::CCCCCCCC::::C";
string e_logo = "TTTTTT  T:::::T  TTTTTT          I::::I           C:::::C       CCCCCC";
string f_logo = "        T:::::T                  I::::I          C:::::C";
string g_logo = "        T:::::T                  I::::I          C:::::C";
string h_logo = "        T:::::T                  I::::I          C:::::C";
string i_logo = "        T:::::T                  I::::I          C:::::C";
string l_logo = "        T:::::T                  I::::I          C:::::C";
string m_logo = "        T:::::T                  I::::I          C:::::C";
string n_logo = "        T:::::T                  I::::I           C:::::C       CCCCCC";
string o_logo = "      TT:::::::TT              II::::::II          C:::::CCCCCCCC::::C";
string p_logo = "      T:::::::::T       ...... I::::::::I ......    CC:::::::::::::::C";
string q_logo = "      T:::::::::T       .::::. I::::::::I .::::.      CCC::::::::::::C";
string r_logo = "      TTTTTTTTTTT       ...... IIIIIIIIII ......         CCCCCCCCCCCCC";

string commento_sep = "########################################################################";

//Game var
string game_ph = "Games: ";
string game_result = (game_ph+games);

//Release Crack
string crack_ph = "Cracked: Afer ";
string temp_misura =" days";
string temp_misura_2 = "years";
string crack_result = (crack_ph+n_days+temp_misura);


//DRM var
string drm_ph = "DRM: ";
string drm_result = (drm_ph + DRM);

//Language Aviable
string language_ph = "Language Aviable: ";
string language_result = (language_ph + language);

//Game Size
string game_size_ph = "Size: ";
string game_size_unit ="GB";
string game_size_result = (game_size_ph + game_size + game_size_unit);

//Multiplayer
string multi_var = "Multiplayer Enabled: ";
string multi_result = (multi_var + multi_enabled);

//Dlc
string dlc_ci_sono = "Dlc Aviable: ";
string dlc_ci_sono_numbers = "Numbers: ";

//no dlc
string dlc_non_ci_sono ="Dlc Aviable: ";
string dlc_non_ci_sono_all = (dlc_non_ci_sono + is_dlc_aviable);

//1dlc
string dlc_solo_uno = (dlc_ci_sono + is_dlc_aviable);
string dlc_solo_uno_num = (dlc_ci_sono_numbers + dlc_numbers);
string dlc_solo_uno_nam = "DLC Names or ID: ";
string parser =",";
string dlc_solo_uno_nam_result = (dlc_solo_uno_nam + dlc_id1 + parser + dlc_id2 + parser + dlc_id3 + parser + dlc_id4 + parser + dlc_id5 + parser + dlc_id6 + parser + dlc_id7);

//Credits
string credits_ph = "Credits: ";
string credits_unit = "Cracked By TIC Team For Community.";
string credits_result = (credits_ph + credits_unit);

char* filename = "tic.nfo";
ofstream fout ( filename );
if ( ! fout ) { cerr << " can't open input - " << filename <<
endl; return 1; }
fout <<a_logo<<endl;
fout <<b_logo<<endl;
fout <<c_logo<<endl;
fout <<d_logo<<endl;
fout <<e_logo<<endl;
fout <<f_logo<<endl;
fout <<g_logo<<endl;
fout <<h_logo<<endl;
fout <<i_logo<<endl;
fout <<l_logo<<endl;
fout <<m_logo<<endl;
fout <<n_logo<<endl;
fout <<o_logo<<endl;
fout <<p_logo<<endl;
fout <<q_logo<<endl;
fout <<r_logo<<endl;
fout<<endl;
fout <<commento_sep<<endl;
fout <<endl;
fout <<game_result<<endl;
fout <<endl;
fout <<crack_result<<endl;
fout <<endl;
fout <<drm_result<<endl;
fout <<endl;
fout <<language_result<<endl;
fout <<endl;
fout <<game_size_result<<endl;
fout <<endl;
fout <<multi_result<<endl;
fout <<endl;


//DLC

if (is_dlc_aviable == "yes", is_dlc_aviable =="si")
{
    fout<<dlc_solo_uno<<endl;
    fout<<endl;
    fout<<dlc_solo_uno_num<<endl;
    fout<<endl;
    fout<<dlc_solo_uno_nam_result<<endl;
    fout<<endl;
}

if (is_dlc_aviable == "no")
{
    fout<<dlc_non_ci_sono_all<<endl;
    fout<<endl;
}

fout <<credits_result<<endl;
fout <<endl;
fout <<commento_sep<<endl;
fout<<endl;

fout.close();




system("pause");


}
