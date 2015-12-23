//
//  main.cpp
//  Grade Calculator
//
//  Created by Gina liu on 12/23/15.
//  Copyright © 2015 Gina liu. All rights reserved.
//

#include <iostream>  // std::cout, std::fixed
#include <iomanip>  // std::setprecision


void display()
    {
        int h;
        int hwt;
        int q;
        int qwt;
        int gwk;
        int gwt;
        int p;
        int pwt;
        int midexam;
        int midexamwt;
        int finalexam;
        int finalexamwt;
        std::cout << "How many HOMEWORK in your class, and how much do they weight? \n";
        std::cin >> h;
        std::cin>> hwt;
        std::cout << "How many QUIZ in your class, and how much do they weight? \n";
        std::cin >> q;
        std::cin>> qwt;
        std::cout << "How many GROUP WORK in your class, and how much do they weight? \n";
        std::cin >> gwk;
        std::cin>> gwt;
        std::cout << "How many PARTIPATITATION in your class, and how much do they weight? \n";
        std::cin >> p;
        std::cin>> pwt;
        std::cout << "How many MIDTERM EXAMS in your class, and how much do they weight? \n";
        std::cin >> midexam;
        std::cin>> midexamwt;
        std::cout << "How many FINAL EXAMS in your class, and how much do they weight? \n";
        std::cin >> finalexam;
        std::cin>> finalexamwt;
        
        std :: cout<< "#########Type in your grade A out of B ############ \n";
        int i=1;
        int hsum =0;  // Studnet's homework total;
        int Thsum = 0; // The total homeowrk scores are avaible.
        while (h >0 && i <= h)
        {
            int hgrd;  // Student's score of each individual homework;
            int Thgrd; // The total grade of each individual homework;
            std :: cout << "HOMEWORK #" << i << ":";
            std :: cin >> hgrd;
            std :: cin >> Thgrd;
            hsum = hsum + hgrd;
            Thsum = Thsum + Thgrd;
            std :: cout << "\n";
            i++;
        }
         std :: cout<< "#########Type in your grade A out of B############ \n";
        i=1;
        int qsum =0;
        int Tqsum =0;
        while (q >0 && i <= q)
        {
            int qgrd;
            int Tqgrd;
            std :: cout << "QUIZ #" << i << ":";
            std::cin >> qgrd;
            std :: cin >> Tqgrd;
            qsum = qsum + qgrd;
            Tqsum = Tqsum + Tqgrd;
            std :: cout << "\n";
            i++;
        }
        std :: cout<< "#########Type in your grade A out of B############ \n";

        i=1;
        int gwkSum =0;
        int TgwkSum =0;
        while (gwk > 0 && i <= gwk)
        {
            int gwkgrd;
            int Tgwkgrd;
            std :: cout << "GROUPWORK #" << i << ":";
            std :: cin >> gwkgrd;
            std :: cin >> Tgwkgrd;
            gwkSum = gwkSum +gwkgrd;
            TgwkSum = TgwkSum + Tgwkgrd;
            std :: cout << "\n";
            i++;
        }
         std :: cout<< "#########Type in your grade A out of B############ \n";

        i=1;
        int pSum =0;
        int TpSum =0;
        while (p >0 && i <= p)
        {
            int pgrd;
            int Tpgrd;
            std :: cout << "PARTICIPATION #" << i << ":";
            std::cin>> pgrd;
            std :: cin >> Tpgrd;
            pSum = pSum + pgrd;
            TpSum = TpSum + Tpgrd;
            std :: cout << "\n";
            i++;
        }
         std :: cout<< "#########Type in your grade A out of B############ \n";

        i=1;
        int midexamSum =0;
        int TmidexamSum =0;
        while (midexam >0 && i <= midexam)
        {
            int midexarmgrd;
            int Tmidexamgrd;
            std :: cout << "MIDTERM #" << i << ": ";
            std::cin >> midexarmgrd;
            std :: cin >> Tmidexamgrd;
            midexamSum = midexamSum + midexarmgrd;
            TmidexamSum = TmidexamSum + Tmidexamgrd;
            std :: cout << "\n";
            i++;
        }
        
       std :: cout<< "#########Type in your grade A out of B############ \n";

        i=1;
        int finalexamSum =0;
        int TfinalexamSum =0;
        while (finalexam >0 && i <= finalexam)
        {
            int finalexamgrd;
            int Tfinalexamgrd;
            std :: cout << "FINAL EXAM #" << i << ": ";
            std :: cin >> finalexamgrd;
            std :: cin >> Tfinalexamgrd;
            finalexamSum = finalexamSum + finalexamgrd;
            TfinalexamSum = TfinalexamSum + Tfinalexamgrd;
            std :: cout << "\n";
            i++;
        }

        //Calculation, report the result in two decimial place //
    std :: cout << "HOMEWORK " << std::setprecision(4)<<((double)hsum/(double)Thsum)*100 << "% \n";
        
    std :: cout<< "QUIZ " << std::setprecision(4)<<((double)qsum/(double)Tqsum)*100 << "% \n";
        
    // std :: cout << "GROUP WORK "<< (gwkSum/TgwkSum)<< "\n";;((gwkSum/TgwkSum) * (gwt/100)) +
        
    std :: cout << "PARTICIPATION " << std::setprecision(4)<< ((double)pSum/(double)TpSum)*100 << "% \n";
        
    std :: cout << "MIDTER EXAM "<< std::setprecision(4)<<((double)midexamSum/(double)TmidexamSum)*100 << "% \n";
        
    std :: cout << "FINAL EXAM " << std::setprecision(4)<<((double)finalexamSum/(double)TfinalexamSum)*100 << "% \n";
        
double overallFinal = (((double)hsum/(double)Thsum)* ((double)hwt/100))+ (((double)qsum/(double)Tqsum) * ((double)qwt/100))+ (((double)pSum/(double)TpSum) * ((double)pwt/100)) + (((double)midexamSum/(double)TmidexamSum)* ((double)midexamwt/100)) + (((double)finalexamSum/(double)TfinalexamSum) * ((double)finalexamwt/100));
        
    std :: cout << "YOUR OVERALL GRADE IS: "<< std::setprecision(4)<< overallFinal*100 << "% \n";
}

int main(int argc, const char * argv[])
{
    display();
    return 0;
}












