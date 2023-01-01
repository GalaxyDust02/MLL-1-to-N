#include <iostream>
#include "MLL.h"
using namespace std;

int main()
{
    cout<<"--------------KELOMPOK 7--------------"<<endl;
    cout<<"---------------IF-45-02---------------"<<endl;
    ListMhs LM;
    CreateListMhs(LM);

    adr_Mahasiswa M = createElmMhs("Maulana","1301213427","IF");
    insertMhs(LM,M);

    M = createElmMhs("Ryvan","1301213422","IF");
    insertMhs(LM,M);

    M = createElmMhs("Gibran","1301215467","IF");
    insertMhs(LM,M);

    M = createElmMhs("Munzir","1301219632","IF");
    insertMhs(LM,M);

    ListMatkul LK;
    CreatListMatkul(LK);

    adr_Matkul L = createElmMatkul("STD","CII32");
    insertMatkul(LK,L);
    adr_Matkul B = createElmMatkul("MAVEK","CII22");
    insertMatkul(LK,B);

    setMatkul(LM,LK,"1301213427","STD");
    setMatkul(LM,LK,"1301213422","STD");
    setMatkul(LM,LK,"1301215467","MAVEK");
    setMatkul(LM,LK,"1301219632","MAVEK");
    tampil(LM,LK);
    return 0;
}
