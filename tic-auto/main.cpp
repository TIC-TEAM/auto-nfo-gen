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
fout <<credits_result<<endl;
fout <<endl;
fout <<commento_sep<<endl;
fout<<endl;

fout.close();




system("pause");


}
