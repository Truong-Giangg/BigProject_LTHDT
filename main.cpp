#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Gym{
    private:
    float cannang;
    int chieucao;
    public:
    string id, ngaydangky, ten = " ", gioitinh, lienhe, diachi, ngaytinhBMI;
    int ngaydiemdanh=0;
    float bmi;

    void DangKy();
    void DiemDanh();
    void Phi();
    void In();
    void BMI();
    void DanhSach();
    void LichTap();


};
void Gym::DangKy(){
    cout<<"\n\n\t\t\t   Dang ky thanh vien:\n";
    cout<<"\t\t\t***********************\n";
    cout<<"\t\t\tNhap ten: ";
    fflush(stdin);
    getline(cin,ten);
    fflush(stdin);
    cout<<"\n\t\t\tGioi tinh (Nam or Nu): ";
    getline(cin,gioitinh);
    fflush(stdin);
    cout<<"\n\t\t\tLien He: ";
    getline(cin,lienhe);
    cout<<"\n\t\t\tDia Chi: ";
    fflush(stdin);
    getline(cin,diachi);
}
void Gym::In(){ 
    cout<<"\tTen thanh vien: ";
    cout<<ten;
    cout<<"\tGioi tinh : ";
    cout<<gioitinh;
    cout<<"\tLien he: ";
    cout<<lienhe;
    cout<<"\tDia chi: ";
    cout<<diachi;
    cout<<"\tSo ngay tap: ";
    cout<<ngaydiemdanh;
}
void Gym::DiemDanh(){   
    ngaydiemdanh++;
}
void Gym::BMI(){
    cout<<"\n\n\t\t\t   Nhap ngay tinh BMI:";
    fflush(stdin);
    getline(cin,ngaytinhBMI);
    cout<<"\n\n\t\t\t   Nhap chieu cao(m):";
    fflush(stdin);
    cin >> chieucao;
    fflush(stdin);
    cout<<"\n\n\t\t\t   Nhap can nang(kg):";
    cin >> cannang;
    bmi = cannang/(chieucao*chieucao);
    // cout<<"\n\n\t\t\t   BMI("<<ngaytinhBMI<<") = "<<bmi;
}
int main(){
    Gym gg[3];
    char kt;
    int n =0, n1, n2, n3, n4;
    do
    {
        cout<<"\n\t\t\t   Chon 1 trong cac lua chon sau: \n";  
        cout<<"\n\t\t\t   1. Dang ky thanh vien: \n";
        cout<<"\n\t\t\t   2. Danh sach thanh vien:\n";
        cout<<"\n\t\t\t   3. Diem Danh:\n";
        cout<<"\n\t\t\t   4. Tinh BMI:\n";
        // cout <<"5. giam gia\n";
        // cout <<"6. in danh sach\n";
        cout<<"\n\n\t\t\t   Bam q hoac Q de thoat\n";
        
        cin >> kt;
        if (kt == '1'){          
            cout <<"\n\n\t\t\t   Dang ky thanh vien thu: "<<n+1 <<"\n";
            gg[n].DangKy();
            n++;
        }
        if (kt == '2'){
            cout<<"\n\n\t\t\t   Danh sach thanh vien:\n";
            cout<<"\t\t\t***********************\n";
            for(int i =0; i<3; i++){
                if(gg[i].ten != " "){
                    gg[i].In();
                    cout <<"\n---------------------------------------------------------------------------\n";
                }
            }
        } 
        if (kt == '3') {
            cout<<"\n\n\t\t\t   Diem danh thanh vien thu? ";
            cin >> n1;
            gg[n1].DiemDanh();
            cout<<"\n\n\t\t\t   "<<gg[n1].ten<<" co mat ngay hom nay:\n";
            cout<<"\t\t\t****************************\n";
        }
        if (kt == '4') {
            cout<<"\n\n\t\t\t   Tinh BMI thanh vien thu? ";
            cin >> n2;
            gg[n2].BMI();
            cout<<"\n\n\t\t\t   "<<gg[n2].ten<<"---BMI("<<gg[n2].ngaytinhBMI<<") = "<<gg[n2].bmi;
            if(gg[n2].bmi >= 18.50 && bmi <= 24.99) cout <<"\n\n\t\t\t   Ban dang rat binh thuong\n";
            else if(gg[n2].bmi <18.50) cout <<"\n\n\t\t\t   Ban la nguoi gay\n";
            else if(gg[n2].bmi >30.00) cout <<"\n\n\t\t\t   Ban bi beo phi\n";
            else cout <<"\n\n\t\t\t   Ban nhap sai can nang vao chieu cao\n";
        }
        // if (kt == '5') {
        //     cout <<"giam gia mat hang thu:\n";
        //     cin >> n4;
        //     cout <<"nhap so tien muon giam\n";
        //     cin >> sotiengiam;
        //     hh[n4-1].giamgia(sotiengiam);
        // }
        // if (kt == '6') {
        //     cout <<"danh sach cac mat hang:\n";
        //     for(int i =0; i<3; i++){
        //         hh[i].thongtinhang();
        //         cout <<"\n";
        //     }
        // }
 
    } while (!(kt == 'q' || kt == 'Q'));
    return 0;
}
