 # include <iostream>
# include <fstream>
# include <string>
#include <cstdlib>
using namespace std;
void main_page();
void Get_Student_Data();
void Input_Data();
void academic_details(string fileName,ofstream& wr)
{
    char student_data[4000];
    string temp;
    getline(cin,temp);

    cout<<"\nEnter The Name Of Student : ";
	cin.getline(student_data,4000);
	wr<<"\n~~~~~~~~~~~~ACADEMIC DETAILS~~~~~~~~~~~~~\n";
    wr<<"\nNAME : "<<student_data<<endl;

    cout<<"Enter The Marks Secured In Inter : ";
    cin.getline(student_data, 4000);
    wr<<"INTER MARKS : "<<student_data<<endl;

    cout<<"Enter The Rank Secured In EAPCET : ";
    cin.getline(student_data, 4000);
    wr<<"EAPCET RANK : "<<student_data<<endl;

    cout<<"Enter The Rank Secured In SRM JEE  ENTRANCE EXAM  : ";
    cin.getline(student_data, 4000);
    wr<<"JEE MAINS RANK : "<<student_data<<endl;

    cout<<"Enter The Percentage Of 10th Class : ";
    cin.getline(student_data, 4000);
    wr<<"10th PERCENTAGE : "<<student_data<<endl;
}
void personal_info(string fileName,ofstream& wr)
{
   char student_data[4000];
   string temp;
   getline(cin,temp);

   cout<<"\nEnter The Name Of Student : ";
   cin.getline(student_data,4000);
   wr<<"\n~~~~~~~~~~~~~PERSONAL INFORMATION~~~~~~~~~~~~~~~\n";
   wr<<"\nNAME : "<<student_data<<endl;

   cout<<"Enter The father name : ";
   cin.getline(student_data, 4000);
   wr<<"FATHER NAME : "<<student_data<<endl;

    cout<<"Enter Aadhar Number Of Student : ";
	cin.getline(student_data, 4000);
    wr<<"ADDRESS : "<<student_data<<endl;

    cout<<"Enter the date of birth : ";
	cin.getline(student_data, 4000);
    wr<<"DOB:"<<student_data<<endl;

    cout<<"Enter the blood group  : ";
	cin.getline(student_data, 4000);
    wr<<"BLOOD GROUP :"<<student_data<<endl;

    cout<<"Enter the email address : ";
	cin.getline(student_data, 4000);
    wr<<"E-MAIL ID :"<<student_data<<endl;

    cout<<"Enter Contact No : ";
	cin.getline(student_data, 4000);
    wr<<"CONTACT NUMBER : "<<student_data<<endl;

    cout<<"Enter Address : ";
	cin.getline(student_data, 4000);
    wr<<"ADDRESS : "<<student_data<<endl;

}
void course_details(string fileName,ofstream& wr)
{
   char student_data[4000];
   string temp;
   getline(cin,temp);
   courses:
       int select;
   cout<<"\nIn Which Stream Are You Interested To Join\n1.SCHOOL OF ENGINEERING AND SCIENCES\n2.SCHOOL OF LIBERAL ARTS AND SOCIAL SCIENCES\n3.PHD\n";
   cout<<"\nSelect The Stream :";
   cin>>select;
   if(select==1)
   {
   cout<<"You Have Selected The SCHOOL OF ENGINEERING AND SCIENCES\n ";
   selectors:
   cout<<"\nCouses Offered In The SCHOOL OF ENGINEERING AND SCIENCES\n  ";
   cout<<"\n1.COMPUTER SCIENCE ENGNEERING\n2.ELECTRONICS AND COMMUNICATION ENGNEERING\n3.MECHANICAL ENGNEERING\n4.ELECTRICAL AND ELECTRONICS ENGNEERING\n5.CIVIL ENGENEERING\n";
   int choice;
   wr<<"\n\n~~~~~~~~~~~~~~COURSE DETAILS~~~~~~~~~~~~~~~~\n";
   cout<<"\nChoose The Course :";
   cin>>choice;
   if(choice==1)
   {
     cout<<"-----------------------------------------------------------------------\n";

     cout<<"You Have Selected CSE Department\n"<<endl;
     cout<<"Specialisations Offered In CSE Department:\n\n1.CYBER SECURITY\n2.AIML\n3.IOT\n4.ML\n5.DATA SCIENCES\n";
     cout<<"\nYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";

    wr<<"Department : CSE"<<endl;
    cin.getline(student_data,4000);
    cout<<"\nIn Which Specialisation Course Are You Interested In :";
    cin.getline(student_data,4000);
    wr<<"Specialisation : "<<student_data<<endl;

    cout<<"\nIn Which Are You Interested In 1.Campus Placements or 2.Higher Education"<<endl;
    cin.getline(student_data,4000);
    wr<<"Interested In : "<<student_data<<endl;
    wr<<"Duration Of The Course : 4 Years"<<endl;
   }
   else if(choice==2)
   {
    cout<<"-----------------------------------------------------------------------\n";
    cout<<"You Have Selected ECE Department "<<endl;
    wr<<"Department : ECE"<<endl;

    cout<<"Specialisations Offered In ECE Department:\n\n1.Digital Signal Processing\n2.Communication Systems\n3.Embedded System\n4.Robotics and Automation\n\n";
    cout<<"\nYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";
    cin.getline(student_data,4000);
    cout<<"\nIn Which Specialisation Course Are You Interested In :";
    cin.getline(student_data,4000);

    wr<<"Specialisation : "<<student_data<<endl;
    cout<<"In Which Are You Interested In 1.Campus Placements or 2.Higher Education\n";
    cin.getline(student_data,4000);
    wr<<"Interested In : "<<student_data<<endl;
   wr<<"Duration Of The Course : 4 Years"<<endl;
   }
   else if(choice==3)
   {
    cout<<"You Have Selected ME Department "<<endl;
    wr<<"Department : ME"<<endl;

    cout<<"Specialisations Offered In ME Department:\n\n1.Controls and robotics\n2.Fluid mechanics and thermal systems\n3. Mechanics of materials\n4.Automotive design\n5.Machine design and development\n\n";
    cout<<"\nYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";
    cin.getline(student_data,4000);
    cout<<"\nIn Which Specialisation Course Are You Interested In :";
    cin.getline(student_data,4000);
    wr<<"Specialisation : "<<student_data<<endl;

    cout<<"In Which Are You Interested In 1.Campus Placements or 2.Higher Education\n";
    cin.getline(student_data,4000);
    wr<<"Interested In : "<<student_data<<endl;
    wr<<"Duration Of The Course : 4 Years"<<endl;
   }
   else if(choice==4)
   {
    cout<<"You Have Selected EEE Department "<<endl;
    wr<<"Department : EEE"<<endl;
    wr<<"Duration Of The Course : 4 Years\n";

    cout<<"Specialisations Offered In EEE Department:\n\n1.Embedded Systems\n2.Intelligent Systems\n3.Robotics and Power Electronics\n4.Networking\n\n";
    cout<<"\nYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";
    cin.getline(student_data,4000);
    cout<<"\nIn Which Specialisation Course Are You Interested In :";
    cin.getline(student_data,4000);
    wr<<"Specialisation : "<<student_data<<endl;

   cout<<"In Which Are You Interested In 1.Campus Placements or 2.Higher Education\n";
    cin.getline(student_data,4000);
    wr<<"Interested In : "<<student_data<<endl;
   }
   else if(choice==5)
   {
    cout<<"You Have Selected CIVIL Department "<<endl;
    wr<<"Department : CIVIL"<<endl;
    wr<<"Duration Of The Course : 4 Years\n";

    cout<<"Specialisations Offered In CIVIL Department:\n\n1.Structural engineering\n2.Construction engineering and management\n3.Geotechnical engineering\n4.Transportation engineering\n\n";
    cout<<"\nYOU CAN CHOOSE SPECIALISATIONS IN YOUR 3RD YEAR\n";
    cin.getline(student_data,4000);
    cout<<"\nIn Which Specialisation Course Are You Interested In :";
    cin.getline(student_data,4000);
    wr<<"Specialisation : "<<student_data<<endl;

    cout<<"In Which Are You Interested In 1.Campus Placements or 2.Higher Education\n";
    cin.getline(student_data,4000);
    wr<<"Interested In : "<<student_data<<endl;
   }
   else
    {
        cout<<"Wrong Course Selected!  Pls Reselect The course\n";
        goto selectors;
    }
   }
   else if(select==2)
   {
    cout<<"\n You Have Selected SCHOOL OF LIBERAL ARTS AND SOCIAL SCIENCES\n";
    constructors:
   cout<<"\nCouses Offered In The SCHOOL OF LIBERAL ARTS AND SOCIAL SCIENCES\n  ";
   cout<<"\n1.BA\n2.BSC\n3.BCOM\n";
   cout<<"Select The Course\n";
   int select_2;
   cin>>select_2;
    if(select_2==1)
    {
        cout<<"You Have Selected BA Course  "<<endl;
    wr<<"Course : BA"<<endl;

    wr<<"Duration Of The Course : 4 Years\n";
    cin.getline(student_data,4000);
    cout<<"Subjects Offered In BA Department:\n\n1.English\n2.History\n3.Liberal Arts\n\n";
    cout<<"\nSubject You Are Interested In : ";
    cin.getline(student_data,4000);
    wr<<"Subject : "<<student_data<<endl;

    }
    else if(select_2==2)
    {
        cout<<"You Have Selected BSC Course  "<<endl;
    wr<<"Course : BSC"<<endl;

    wr<<"Duration Of The Course : 3 Years\n";
    cin.getline(student_data,4000);
    cout<<"Subjects Offered In BSC Department:\n\n1.Psychology\n2.Economics\n\n";
    cout<<"\nSubject You Are Interested In : ";
    cin.getline(student_data,4000);
    wr<<"Subject : "<<student_data<<endl;
    }
    else if(select_2==3)
    {
        cout<<"You Have Selected BCOM Course  "<<endl;
    wr<<"Course : BCOM"<<endl;

     wr<<"Duration Of The Course : 3 Years\n";
    cin.getline(student_data,4000);
    cout<<"Specialisations Offered In BCOM Department:\n\n1.Bcom Accounts and Finance\n2.BCom in Economics\n3.BCom in Investment Management\n4.BCom in Taxation\n5.BCom in Financial Market\n\n";
    cin.getline(student_data,4000);
    cout<<"\nIn Which Specialisation Course Are You Interested In :";
    cin.getline(student_data,4000);
    wr<<"Specialisation : "<<student_data<<endl;

    }
    else
    {
        cout<<"You Have Selected The Course Which Is Not Available! Pls Reselect The Course\n";
        goto constructors;
    }
   }
   else if(select==3)
   {
       cout<<"You Have Selected For A PHD Admission\n\n";
       wr<<"Course : PHD"<<endl;
       cin.getline(student_data,4000);
       cout<<"Specialisations Offered In PHD :\n\n1.Phd in Science\n2.phd in Commerce\n3.phd in Humanities\n4.phd in Business Management\n5.phd in Engineering and technology\n\n";
       cin.getline(student_data,4000);
       cout<<"\nIn Which Specialisation Course Are You Interested In :";
       cin.getline(student_data,4000);
      wr<<"Specialisation : "<<student_data<<endl;
   }
   else{
     cout<<"You Have Selected The Course Which Is Not Available! Pls Reselect The Course\n";
        goto courses;
   }

   cout<<"\n\n-------------YOUR DETAILS ARE SUCCESFULLY UPLOADED PLEASE WAIT UNTIL UNIVERSITY RESPONDS--------------\n\n";

}
void main_page()
{
    cout<<"\n";
    while(1)
   {
   cout<<"                       &&           &            @               @                            "<<endl;
   cout<<"                      &  &          & &        &    &&&&& &&&&&     &&&&&&  &     &           "<<endl;
   cout<<"                     &    &         & &&      && &  &     &      &  &    &  & &   &           "<<endl;
   cout<<"                    &&&&&&&&   &&&&&& & &    & & &  &&&&& &&&&&  &  &    &  &  &  &           "<<endl;
   cout<<"                   &        &  &    & &  &  &  & &      &     &  &  &    &  &   & &           "<<endl;
   cout<<"                  &          & &&&&&& &    &   & &  &&&&& &&&&&  &  &&&&&&  &    &&           "<<endl<<endl<<endl;

   cout<<"                       &&&&&&&                                                                 "<<endl;
   cout<<"                       &         &    &  &&&&&& &&&&&&&&& &&&&&&&  &         &                 "<<endl;
   cout<<"                       &          &  &   &          &     &        & &     & &                 "<<endl;
   cout<<"                       &&&&&&&      &    &&&&&&     &     &&&&&&&  &  &   &  &                 "<<endl;
   cout<<"                             &     &          &     &     &        &   & &   &                 "<<endl;
   cout<<"                       &&&&&&&    &      &&&&&&     &     &&&&&&&  &    &    &                 "<<endl<<endl;
   char select;
   string fileName;
    cout<<"ENTER 'S' IF YOU ARE A STUDENT OR ENTER 'F' IF YOU ARE A STAFF OR IF YOU WANT TO EXIT THE PAGE ENTER 'E' : ";
    cin>>select;
    if(select=='S' || select=='s')
    {

        Input_Data();
	}
	else if(select=='F' || select=='f')
	{
	    cout<<"\nTO GET INFORMATION OF THE STUDENT\n ";
		Get_Student_Data();
	}
    else if(select=='E' || select=='e')
    {
    	exit(1);
	}
	else
    {
       cout<<"PLEASE CHOOSE THE CORRECT OPTION...!\n\n";
    }
   }
}
int main()
{
    main_page();
    return 0;
}

void Input_Data()
{
   char student_data[4000];
   string  fileName,temp;
   getline(cin,temp);
   cout<<""<<endl;
   cout<<"Enter Student Application Number#=";
   getline(cin,fileName);
   ofstream wr(fileName.c_str());
   cout<<"\nApplication Number#"<<fileName<<endl;
   while(1)
   {
       int num;
       cout<<"\n----------ENTER THE DETAILS REQUIRED FOR THE ADMISSION PROCESS----------\n";
       cout<<"\nSELECT THE FOLLOWING OPTIONS TO ENTER DETAILS\n\n1.Academic Qualifications\n2.Personal Information\n3.Details Of The Course\n4.Go To Main Page\n";
       cout<<"\nChoose The Option To Enter: ";
       cin>>num;
       switch (num)
       {
       case 1:
           cout<<"\n-------------ACADEMIC DETAILS OF THE STUDENT-------------\n";
            academic_details(fileName,wr);
            cout<<"\nEnter The Personal Details Of The Student\n";
        break;
       case 2:
           cout<<"\n-------------PERSONAL DETAILS OF THE STUDENT-------------\n";
            personal_info(fileName,wr);
            cout<<"\nEnter The Details Of The Course\n";
        break;
       case 3:
           cout<<"\n-------------COURSE DETAILS OF THE STUDENT---------------\n";
           course_details(fileName,wr);
        break;
       case 4:
           cout<<"\n\t\t\t\t---------------------------Going to main page----------------------------\n";
           main_page();
           break;
       default:
        cout<<"Enter your choice correctly\n ";
       }
   }

}

void Get_Student_Data()
{
	ifstream rd;
	ofstream wr;
	string lines;
	string fileName,temp;
    getline(cin,temp);
    cout<<""<<endl;
   		cout<<"\nEnter Student Application Number#=";
        getline(cin,fileName);
        cout<<"Verifing The Student Details\n";
   rd.open(fileName.c_str());
	if(rd.is_open())
	{
		while (getline(rd,lines))
		{
			cout<<lines<<endl;
		}
		cout<<"\n\n\t\t--------------------VERIFIED THE STUDENT DETAILS---------------------\n";
        int rankk;
        string course;
        cout<<"Enter The Rank Of The Student In SRM JEE Entrance Exam:";
        cin>>rankk;
        cout<<"Enter The Course Opted By The Student :";
        cin>>course;
        cout<<"As Student Secured Rank Of :"<<rankk<<" And Opted For The Course :"<<course<<endl;

        cout<<"\n--------COMMENTS TO THE STUDENT FOR HIS PERFORMANCE---------\n";
       if(rankk < 500)
        {
            cout<<"\nHeartly Congratulaions From SRM UNIVERSITY ANDHRA PRADESH,\n";
            cout<<"\n\n\t Dear Student, We Have Uploaded The Academic Details And Personal Information From Your Application Form.Your Performance In The Entrance Exam Is Very Good.\n";
            cout<<"YOUR FEE STRUCTURE WILL BE DECIDED AND WILL SHARE AS SOON AS POSSIBLE.PLEASE WAIT UNTIL UNIVERSITY RESPONDS\nThanks and Regards,\nSRM UNIVERSITY.\n";
        }
        else if(rankk<1000)
        {
            cout<<"\nHeartly Congratulaions From SRM UNIVERSITY ANDHRA PRADESH,\n";
            cout<<"\n\n\t Dear Student, We Have Uploaded The Academic Details, Personal Information And Course Information From Your Application Form.Your Performance In Our SRM JEE ENTRANCE EXAMINATION is Good.You Can Join Our SRM Family By Admitting In Our University\n";
            cout<<"YOUR FEE STRUCTURE WILL BE DECIDED AND WILL SHARE AS SOON AS POSSIBLE FOR THE COURSE YOU HAVE SELECTED.PLEASE WAIT UNTIL UNIVERSITY RESPONDS\nThanks and Regards,\nSRM UNIVERSITY.\n";
        }
        else if(rankk<1500)
        {
            cout<<"\n Congratulaions From SRM UNIVERSITY ANDHRA PRADESH,\n";
            cout<<"\n\n\t Dear Student, We Have Uploaded The Academic Details, Personal Information And Course Information From Your Application Form.As You Have Secured A Rank Of Below 1500 In Our SRM JEE ENTRANCE EXAMINATION.You Can Join Our SRM Family By Admitting In Our University\n";
            cout<<"YOUR FEE STRUCTURE WILL BE DECIDED AND WILL SHARE AS SOON AS POSSIBLE FOR THE COURSE YOU HAVE SELECTED.PLEASE WAIT UNTIL UNIVERSITY RESPONDS\nThanks and Regards,\nSRM UNIVERSITY.\n";
        }
        else if(rankk>1500 && rankk<=2500 )
        {
            cout<<"\n Congratulaions From SRM UNIVERSITY ANDHRA PRADESH,\n";
            cout<<"\n\n\t Dear Student, We Have Uploaded The Academic Details, Personal Information And Course Information From Your Application Form.As You Have Secured A Rank Of Above 1500 And Below 2500 In Our SRM JEE ENTRANCE EXAMINATION.You Can Join Our University For The Course You Have Selected With Extra 10% FEES THAN THE ORIGINAL FEE AS DONATION \n";
            cout<<"YOUR FEE STRUCTURE WILL BE DECIDED AND WILL SHARE AS SOON AS POSSIBLE FOR THE COURSE YOU HAVE SELECTED.PLEASE WAIT UNTIL UNIVERSITY RESPONDS\nThanks and Regards,\nSRM UNIVERSITY.\n";

        }
        else if(rankk>2500)
        {
            cout<<"\n Congratulaions From SRM UNIVERSITY ANDHRA PRADESH,\n";
            cout<<"\n\n\t Dear Student, We Have Uploaded The Academic Details, Personal Information And Course Information From Your Application Form.As You Have Secured A Rank Of Above 2500 In Our SRM JEE ENTRANCE EXAMINATION.You Can Join In Our University For The Course You Have Selected With Extra 25% FEES THAN THE ORIGINAL FEE AS DONATION \n";
            cout<<"YOUR FEE STRUCTURE WILL BE DECIDED AND WILL SHARE AS SOON AS POSSIBLE FOR THE COURSE YOU HAVE SELECTED.PLEASE WAIT UNTIL UNIVERSITY RESPONDS\nThanks and Regards,\nSRM UNIVERSITY.\n";
        }

        //fee structure:
        cout<<"----------------FEE STRUCTURE---------------\n";
        cout<<"NOTE : Dear Student, FEE STRUCTURE IS PURELY BASED ON THE PERFORMANCE IN YOUR SRM JEE ENTRANCE EXAMINATION.\n";
        cout<<"\n";
        if(course=="CSE"||course=="ECE"||course=="ME"||course=="EEE"||course=="CIVIL")
        {
            int fees=200000;
            if(rankk<=1500)
            {
                cout<<"\nFEES : "<<fees<<endl;
            }
            else if(rankk>1500 && rankk <2500)
            {
                fees=fees+((fees*10)/100);
                cout<<"\nFEES : "<<fees<<endl;
            }
            else if(rankk>2500)
            {
                fees=fees+((fees*25)/100);
                cout<<"\nFEES : "<<fees<<endl;
            }
        }
        else if(course=="BA"||course=="BSC"||course=="BCOM")
        {
            int fees_A=175000;
            if(rankk<=1500)
            {
                cout<<"\nFEES : "<<fees_A<<endl;
            }
            else if(rankk>1500 && rankk <2500)
            {
                fees_A=fees_A+((fees_A*10)/100);
                cout<<"\nFEES : "<<fees_A<<endl;
            }
            else if(rankk>2500)
            {
                fees_A=fees_A+((fees_A*25)/100);
                cout<<"\nFEES : "<<fees_A<<endl;
            }
        }
        else if(course=="PHD")
        {
            int fees_p=150000;
            if(rankk<=1500)
            {
                cout<<"\nFEES : "<<fees_p<<endl;
            }
            else if(rankk>1500 && rankk <2500)
            {
                fees_p=fees_p+((fees_p*10)/100);
                cout<<"\nFEES : "<<fees_p<<endl;
            }
            else if(rankk>2500)
            {
                fees_p=fees_p+((fees_p*25)/100);
                cout<<"\nFEES : "<<fees_p<<endl;
            }
        }

        /*int optional;
        cout<<"Any Information Required From The Student? if yes choose option1 else choose option 2 :";
        cin>>optional;
        if(optional==1)
        {
           //something;
        }

        */
        string ok;
        cout<<"\n\nIF YOU ARE OK WITH THE ACADEMIC FEES ENTER OK, IF YOU ARE NOT OK WITH ACADEMIC FEES YOU CAN CANCEL YOUR ADMISSION\n";
        cin>>ok;
        if(ok=="OK"||ok=="ok" || ok=="Ok")
        {
            cout<<"\n\n\t\t-----------------------------------YOUR ADMISSION IS SUCCESSFULL-------------------------------------------\n";
        }
        else
        {
            cout<<"AS YOU HAVE AN ISSUE IN FEE STRUCTURE\n";
            cout<<"\n\t\t-------------------------------------YOUR ADMISSION IS CANCELLED----------------------------------------\n";
        }
	 }
	 rd.close();
}
