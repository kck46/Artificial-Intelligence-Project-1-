#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;




//TESTING DIAGNOSIS SUBJECT TO CHANGE ; THIS IS ASSUMED TO BE WHATS PASSED IN

string DiagnosticBW(){
   map <int, string> conclt;
   map <int, string> kb;
   vector<string> clvarlt;
   vector<string> varlt;
   bool flag = false;
   int diagnosticInput;
   string varble, conclusion, userInput;


   //conclusion list

   //Basal Cell Carcinoma
   conclt[1] = "Basal Cell Carcinoma";
   //Squamous Cell Carcinoma
   conclt[2] = "Squamous Cell Carcinoma";
   //Melanoma
   conclt[3] = "Melanoma";
   //Thyroid Cancer
   conclt[4] = "Thyroid Cancer";
   //Leukemia
   conclt[5] = "Leukemia";
   //Breast Cancer
   conclt[6] = "Breast Cancer";
   //Prostate Cancer
   conclt[7] = "Prostate Cancer";
   //Bladder Cancer
   conclt[8] = "Bladder Cancer";
   //Colorectal Cancer
   conclt[9] = "Colorectal Cancer";
   //Testicular Cancer
   conclt[10] = "Testicular Cancer";
   //Penile Cancer
   conclt[11] = "Penile Cancer";
   //Ovarian Cancer
   conclt[12] = "Ovarian Cancer";
   //Cervical Cancer
   conclt[13] = "Cervical Cancer";
   //Lung Cancer
   conclt[14] = "Lung Cancer";
   //Stomach Cancer
   conclt[15] = "Stomach Cancer";
   //Brain Cancer
   conclt[16] = "Brain Cancer";



   // Rules

   // 1
   kb[1] = "Problems With Skin/Lumps(NonGenital) = yes AND Skin Irritation = yes AND Scaly Patches = yes AND White Waxy Lump/Brown Scaly Patches = yes THEN Cancer = Basal Cell Carcinoma";
   // 2
   kb[2] = "Problems With Skin/Lumps(NonGenital) = yes AND Skin Irritation = yes AND Scaly Patches = yes AND White Waxy Lump/Brown Scaly Patches = no AND Firm Red Nodule = yes THEN Cancer = Squamous Cell Carcinoma";
   // 3
   kb[3] = "Problems With Skin/Lumps(NonGenital) = yes AND Skin Irritation = yes AND Scaly Patches = no AND IrregularMole = yes THEN Cancer = Melanoma";
   // 4
   kb[4] = "Problems With Skin/Lumps(NonGenital) = yes AND Skin Irritation = no AND Swollen Neck = yes AND Trouble Breathing = yes AND Hoarse Voice = yes THEN Cancer = Thyroid";
   // 5
   kb[5] = "Problems With Skin/Lumps(NonGenital) = yes AND Skin Irritation = no AND Swollen Neck = yes AND Trouble Breathing = no AND Constant Fatigue = yes AND Fevers/Chills = yes THEN Cancer = Leukemia";
   //6
   kb[6] = "Problems With Skin/Lumps(NonGenital) = yes AND Skin Irritation = no AND Swollen Neck = no AND Lump On Breast = yes AND Breast Swelling = yes AND Nipple Discharge = yes THEN Cancer = Breast";
   //7
   kb[7] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = yes AND Genital Issues = yes AND Blood In Urine/Stool = yes AND Bone Pain = yes THEN Cancer = Prostate";
   // 8
   kb[8] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = yes AND Genital Issues = yes AND Blood In Urine/Stool = yes AND Bone Pain = no AND Frequent Urination = yes THEN Cancer = Bladder";
   // 9
   kb[9] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = yes AND Genital Issues = yes AND Blood In Urine/Stool = yes AND Bone Pain = no AND Frequent Urination = no AND Stool Consistency Change = yes THEN Cancer = Colorectal";
   //10
   kb[10] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = yes AND Genital Issues = yes AND Blood In Urine/Stool = no AND Male = yes AND Lump On Testicles = yes THEN Cancer = Testicular";
   // 11
   kb[11] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = yes AND Genital Issues = yes AND Blood In Urine/Stool = no AND Male = yes AND Lump On Testicles = no AND Lump On Penis = yes THEN Cancer = Penile";
   // 12
   kb[12] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = yes AND Genital Issues = yes AND Blood In Urine/Stool = no AND Male = no AND Increased Urination = yes AND Abdominal Bloating = yes THEN Cancer = Ovarian";
   // 13
   kb[13] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = yes AND Genital Issues = yes AND Blood In Urine/Stool = no AND Male = no AND Increased Urination = no AND Irregular Menstration = yes THEN Cancer = Cervical";
   // 14
   kb[14] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = no AND Weight Loss = yes AND Chest Pain = yes AND Worsening Cough = yes THEN Cancer = Lung";
   // 15
   kb[15] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = no AND Weight Loss = yes AND Chest Pain = no AND Adbominal Pain = yes  AND Loss of Appitite = yes THEN Cancer = Stomach";
   // 16
   kb[16] = "Problems With Skin/Lumps(NonGenital) = no AND Bathroom Issues = no AND Weight Loss = yes AND Chest Pain = no AND Adbominal Pain = no AND Loss of Vision = yes AND Headaches/Seizures = yes THEN Cancer = Brain";






   //conclusion prompt
   while(!flag){
     cout << "Select Cancer Type:" << endl;
     cout << "1. Basal Cell Carcinoma" << endl;
     cout << "2. Squamous Cell Carcinoma" << endl;
     cout << "3. Melanoma" << endl;
     cout << "4. Thyroid Cancer" << endl;
     cout << "5. Leukemia"<< endl;
     cout << "6. Breast Cancer" << endl;
     cout << "7. Prostate Cancer" << endl;
     cout << "8. Bladder Cancer" << endl;
     cout << "9. Colorectal Cancer" << endl;
     cout << "10. Testicular Cancer" << endl;
     cout << "11. Penile Cancer" << endl;
     cout << "12. Ovarian Cancer" << endl;
     cout << "13. Cervical Cancer" << endl;
     cout << "14. Lung Cancer" << endl;
     cout << "15. Stomach Cancer" << endl;
     cout << "16. Brain Cancer" << endl;
     cin >> diagnosticInput;

     if(diagnosticInput == 1)
     {
         conclusion = "Basal Cell Carcinoma";
         flag = true;
     }
     else if(diagnosticInput == 2 )
     {
         conclusion = "Squamous Cell Carcinoma";
         flag = true;
     }
     else if(diagnosticInput == 3)
     {
         conclusion = "Melanoma";
         flag = true;
     }
     else if(diagnosticInput == 4)
     {
         conclusion = "Thyroid Cancer";
         flag = true;
     }
     else if(diagnosticInput == 5)
     {
         conclusion = "Leukemia";
         flag = true;
     }
     else if(diagnosticInput == 6)
     {
         conclusion = "Breast Cancer";
         flag = true;
     }
     else if(diagnosticInput == 7)
     {
         conclusion = "Prostate Cancer";
         flag = true;
     }
     else if(diagnosticInput == 8)
     {
         conclusion = "Bladder Cancer";
         flag = true;
     }
     else if(diagnosticInput == 9)
     {
         conclusion = "Colorectal Cancer";
         flag = true;
     }
     else if(diagnosticInput == 10)
     {
         conclusion = "Testicular Cancer";
         flag = true;
     }
     else if(diagnosticInput == 11)
     {
         conclusion = "Penile Cancer";
         flag = true;
     }
     else if(diagnosticInput == 12)
     {
         conclusion = "Ovarian Cancer";
         flag = true;
     }
     else if(diagnosticInput == 13)
     {
         conclusion = "Cervical Cancer";
         flag = true;
     }
     else if(diagnosticInput == 14)
     {
         conclusion = "Lung Cancer";
         flag = true;
     }
     else if(diagnosticInput == 15)
     {
         conclusion = "Stomach Cancer";
         flag = true;
     }
     else if(diagnosticInput == 16)
     {
         conclusion = "Brain Cancer";
         flag = true;
     }

     else
         cout << "invalid input  " << endl;
    }


   // create variable list
   for(int i = 1; i < conclt.size()+1; i++){

      if((conclt[i]) == conclusion){

         varble = kb[i];
         size_t sp = 0;
         string target;

         varble.erase(remove_if(varble.begin(), varble.end(), ::isspace),varble.end());

         while((sp = varble.find("AND")) != varble.npos)
         {
             target = varble.substr(0, sp);
             varlt.push_back(target);
             varble.erase(0, sp + 3);
         }

         if((sp = varble.find("THEN")) != varble.npos)
         {
             target = varble.substr(0, sp);
             varlt.push_back(target);
             varble.erase(0, sp + 4);

             varlt.push_back(varble);
         }

         for(int i = 0; i < varlt.size(); i++)
         {
             if((sp = varlt[i].find("=")) != varlt[i].npos)
             {
                 target = varlt[i].substr(0, sp);
                 clvarlt.push_back(target);
                 varlt[i].erase(0, sp + 1);

                 clvarlt.push_back(varlt[i]);
             }
         }
      }
   }

   /* input statements for sample position knowledge
   base */

   for(int i = 0; i < (clvarlt.size() - 2) ; i += 2){
      cout << "Symptom: " << clvarlt[i] << "? (yes/no)" << endl;
      cin >> userInput;

      if(userInput != clvarlt[i + 1])
      {
         cout << conclusion << " Diagnostic : Negative " << endl;
         return "Negative";
      }
   }

   cout << conclusion << " Diagnostic : Positive" << endl;
   return conclusion;
}






//*****Variables as defined in original module #2.5_Forward Chaining Program.cpp*****
//Variable List describes if the variables we have have been used yet.  at start, it is empty.
//as we iterate through the list, we will determine if the given variable from diagnostic matches
//the one in the rule-set.

string variable_List [32];


//Clause variable list holds all the if-then conclusions that can occur.
//ex: IF hot[12] AND growing[13] fire. "skipped for space"[14] "skipped for space"[15] IF cold[16]

string clause_Variable_List [81];


//Conclusion variable queue sets up and lists the response given from diagnosis,
//there should only be one spot at a time used, 16 are allocated just in case however.
string Condition_variable_1st_in_conclusionVarQueue[16];

//empty list: TO BE FILLED BY INSTANCED VARIABLES
int instantiation_Indication[32];



//Statement number used to help determine if-thens' used
int statement_Number=1;
int clause_Number=1;


//used in search to help find the needed statement number
int flag;
int rule_Counter;

//variable designed to help point to mynext part of code
int mynext;

int back_pointer=1;
int front_pointer=1;

string output_treatment = "no treatment needed";




string current_Variable;


//input different variables as they are passed
void search_function();

void check_instantiation();

void instantiate(string);


int main()
{
    //*******INITIALIZING SECTION*********

    //default set to nothing needed
    string diag = " ";
    diag = DiagnosticBW();

    //setting up the true/false values for specific cancer variables
    //this allows the program to set the true or false values for the rule set/knowledge base
    string Basal_Cell_Carcinoma = "false";
    string Squamous_Cell_Carcinoma = "false";
    string Melanoma = "false";
    string Thyroid_Cancer = "false";
    string Leukemia = "false";
    string Breast_Cancer = "false";
    string Prostate_Cancer = "false";
    string Bladder_Cancer = "false";
    string Colon_and_Rectal_Cancers = "false";
    string Testicular_Cancer = "false";
    string Penile_Cancer = "false";
    string Ovarian_Cancer = "false";
    string Cervical_Cancer = "false";
    string Lung_Cancer = "false";
    string Stomach_Cancer = "false";
    string Brain_Cancer = "false";


    //initializing the separate lists


    for(int i=0; i<81; i++)
    {
        clause_Variable_List[i]="";
    }
    // fills the clause variable list with variables that are associated with the if-then parts used
    //clause_Variable_List position corresponds to knowledge base "10, 20, 30, etc" with formula
    //int rule = (((clause/4)+1)*10)
    //this is used in search to find proper rule
    clause_Variable_List[1]="Basal Cell Carcinoma";
    clause_Variable_List[5]="Squamous Cell Carcinoma";
    clause_Variable_List[9]="Melanoma";
    clause_Variable_List[13]="Thyroid Cancer";
    clause_Variable_List[17]="Leukemia";
    clause_Variable_List[21]="Breast Cancer";
    clause_Variable_List[25]="Prostate Cancer";
    clause_Variable_List[29]="Bladder Cancer";
    clause_Variable_List[33]="Colon and Rectal Cancers";
    clause_Variable_List[37]="Testicular Cancer";
    clause_Variable_List[41]="Penile Cancer";
    clause_Variable_List[45]="Ovarian Cancer";
    clause_Variable_List[49]="Cervical Cancer";
    clause_Variable_List[53]="Lung Cancer";
    clause_Variable_List[57]="Stomach Cancer";
    clause_Variable_List[61]="Brain Cancer";



    //initializes the array fully with all the IF variables
    for(int i=0;i<32;i++)
    {
        variable_List[i]="";
    }

    variable_List[1]="Basal Cell Carcinoma";
    variable_List[2]="Squamous Cell Carcinoma";
    variable_List[3]="Melanoma";
    variable_List[4]="Thyroid Cancer";
    variable_List[5]="Leukemia";
    variable_List[6]="Breast Cancer";
    variable_List[7]="Prostate Cancer";
    variable_List[8]="Bladder Cancer";
    variable_List[9]="Colon and Rectal Cancers";
    variable_List[10]="Testicular Cancer";
    variable_List[11]="Penile Cancer";
    variable_List[12]="Ovarian Cancer";
    variable_List[13]="Cervical Cancer";
    variable_List[14]="Lung Cancer";
    variable_List[15]="Stomach Cancer";
    variable_List[16]="Brain Cancer";


    //LIST OF VARIABLES THAT ARE TO BE OR ARE INSTANTIATED: is empty at first so all=0.
    for(int i =0;i<32;i++)
    {
        instantiation_Indication[i]=0;
    }

    cout<<endl<<"************TREATMENT SECTION********"<<endl;
    cout<<endl<<endl;


    //*************************************
    //Inference Section/Engine: Takes the variable passed from diagnosis,


    cout<<endl<<endl<<"Applying condition variable: ..."<<endl<<endl;


    //sets flag to true as given from diagnosis
        if(diag=="Basal Cell Carcinoma")
        {
            Basal_Cell_Carcinoma="true";

            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Basal_Cell_Carcinoma;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Squamous Cell Carcinoma")
        {
            Squamous_Cell_Carcinoma="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Squamous_Cell_Carcinoma;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }

        else if(diag=="Melanoma")
        {
            Melanoma="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Melanoma;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Thyroid_Cancer")
        {
            Thyroid_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Thyroid_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Leukemia")
        {
            Leukemia="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Leukemia;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Breast Cancer")
        {
            Breast_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Breast_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Prostate_Cancer")
        {
            Prostate_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Prostate_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Bladder_Cancer")
        {
            Bladder_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Bladder_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Colon_and_Rectal_Cancers")
        {
            Colon_and_Rectal_Cancers="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Colon_and_Rectal_Cancers;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Testicular_Cancer")
        {
            Testicular_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Testicular_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Penile_Cancer")
        {
            Penile_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Penile_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Ovarian Cancer")
        {
            Ovarian_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Squamous_Cell_Carcinoma;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Cervical Cancer")
        {
            Cervical_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Cervical_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Lung Cancer")
        {
            Lung_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Lung_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Stomach Cancer")
        {
            Stomach_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Stomach_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }
        else if(diag=="Brain Cancer")
        {
            Brain_Cancer="true";
            Condition_variable_1st_in_conclusionVarQueue[back_pointer] = Brain_Cancer;
            //back_pointer +=1; //iterates to the mynext spot to insert condition variable

            back_pointer +=1; //iterates to the mynext spot to insert condition variable
        }



    statement_Number=1;
    clause_Number=1;
    mynext =1;

    do{

    search_function();


    variable_List[1]="Basal Cell Carcinoma";
    variable_List[2]="Squamous Cell Carcinoma";
    variable_List[3]="Melanoma";
    variable_List[4]="Thyroid Cancer";
    variable_List[5]="Leukemia";
    variable_List[6]="Breast Cancer";
    variable_List[7]="Prostate Cancer";
    variable_List[8]="Bladder Cancer";
    variable_List[9]="Colon and Rectal Cancers";
    variable_List[10]="Testicular Cancer";
    variable_List[11]="Penile Cancer";
    variable_List[12]="Ovarian Cancer";
    variable_List[13]="Cervical Cancer";
    variable_List[14]="Lung Cancer";
    variable_List[15]="Stomach Cancer";
    variable_List[16]="Brain Cancer";

    //KNOWLEDGE BASE SWITCH STATEMENTS

    //if its placed to one, it reiterates and checks for a second condition.
    //if its 1, continues to then section.
    int then_loop_check =0;

    clause_Number=1;
    if(statement_Number!=0)
    {

        //int local_rule =((clause_Number/4)+1)*10;
        int local_rule =  ((statement_Number-1)*4+clause_Number);

        current_Variable = clause_Variable_List[local_rule];
        while(current_Variable == "")
        {
            clause_Number =clause_Number+1;
            //mynext clause
            //local_rule =((clause_Number/4)+1)*10;
             local_rule=((statement_Number-1)*4+clause_Number);

            current_Variable = clause_Variable_List[local_rule];
        }



        //IF statements for knowledge base
        switch(statement_Number)
        {
        case 1:
            if(Basal_Cell_Carcinoma=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 1, Basal Cell Carcinoma executed"<<endl;
            break;
        case 2:
            if(Squamous_Cell_Carcinoma=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 2, Squamous Cell Carcinoma executed"<<endl;
            break;
        case 3:
            if(Melanoma=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 3, Melanoma executed"<<endl;
            break;
        case 4:
            if(Thyroid_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 4, Thyroid Cancer executed"<<endl;
            break;
        case 5:
            if(Leukemia=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 5,Leukemia executed"<<endl;
            break;
        case 6:
            if(Breast_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 6, Breast Cancer executed"<<endl;
            break;
        case 7:
            if(Prostate_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 7, Prostate Cancer executed"<<endl;
            break;
        case 8:
            if(Bladder_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 8, Bladder Cancer executed"<<endl;
            break;
        case 9:
            if(Colon_and_Rectal_Cancers=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 9, Colon and Rectal Cancers executed"<<endl;
            break;
        case 10:
            if(Testicular_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 10, Testicular Cancer executed"<<endl;
            break;
        case 11:
            if(Penile_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 11, Penile Cancer executed"<<endl;
            break;
        case 12:
            if(Ovarian_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 12, Ovarian Cancer executed"<<endl;
            break;
        case 13:
            if(Cervical_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 13, Cervical Cancer executed"<<endl;
            break;
        case 14:
            if(Lung_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 14, Lung Cancer executed"<<endl;
            break;
        case 15:
            if(Stomach_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 15, Stomach Cancer executed"<<endl;
            break;
        case 16:
            if(Brain_Cancer=="true")
            {
                then_loop_check=1;
            }
            cout<<"case 16, Brain Cancer executed"<<endl;
            break;
        default:    //if no "IF" Input
            cout<<"No condition variable \"IF\" statement found as \"TRUE\"."<<endl;
            //no diagnostic needed and you are clean?
        }

        /*if(then_loop_check!=1)
        {
            mynext = statement_Number+1;
            search_function();
        }*/


        //THEN statements for knowledge base
        switch(statement_Number)
        {
        case 1:
            cout<<"case 1, Basal Cell Carcinoma executed"<<endl;
            Basal_Cell_Carcinoma="true";
            cout<<"Basal Cell Carcinoma = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Basal Cell Carcinoma";
            instantiate(current_Variable);

            output_treatment = "Options include: Curettage and electrodesiccation, Mohs surgery, Excisional Surgery, Radition therapy, Cryosurgery, Laser surgery, and Topical Medications";
            break;

        case 2:
            cout<<"case 2, Squamous Cell Carcinoma executed"<<endl;
            Squamous_Cell_Carcinoma="true";
            cout<<"Squamous Cell Carcinoma = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Squamous Cell Carcinoma";
            instantiate(current_Variable);

            output_treatment = "Options include: Excisional surgery, Mohs surgery, Cryosurgery, Curettage and electrodesiccation, Laser surgery, Radiation, Photodynamic therapy, and Topical medications";
            break;

        case 3:
            cout<<"case 3, Melanoma executed"<<endl;
             Melanoma ="true";
            cout<<" Melanoma  = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Melanoma";
            instantiate(current_Variable);

            output_treatment = "Options include: Radiation therapy, Mohs surgery, Skin grafting and Wide local excision, Antiviral drug, Chemotherapy, and immunotherapy";
            break;

        case 4:
            cout<<"case 4, Thyroid Cancers executed"<<endl;
            Thyroid_Cancer="true";
            cout<<"Thyroid = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Thyroid";
            instantiate(current_Variable);

            output_treatment = "Options include: Surgical removal of thyroid/lymph nodes, Thyroid hormone therapy, Radioactive Iodine, External Radiation therapy, Chemotherapy, and Targeted Drug therapy";
            break;

        case 5:
            cout<<"case 5, Leukemia executed"<<endl;
            Leukemia="true";
            cout<<"Leukemia = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Leukemia";
            instantiate(current_Variable);

            output_treatment = "Options include: Chemotherapy, Targeted therapy, Radiation therapy, Bone Marrow transplant, Immunotherapy, and Immune Cell therapy";
            break;

        case 6:
            cout<<"case 6, Breast Cancer executed"<<endl;
            Breast_Cancer="true";
            cout<<"Breast Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Breast_Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Mammaplasty, Tissue expansion, Lymph node dissection, Lumpectomy, Mastectomy, Teletherapy, Radiation therapy, Estogen modulator, and chemotherapy";
            break;

        case 7:
            cout<<"case 7, Prostate Cancer executed"<<endl;
            Prostate_Cancer="true";
            cout<<"Prostate Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Prostate Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Laparoscopic radial prostatectomy, Prostatectomy, Brachytherapy, Radiation therapy, Hormone therapy, Chemotherapy, and Urinary retention medication";
            break;

        case 8:
            cout<<"case 8, Bladder Cancer executed"<<endl;
            Bladder_Cancer="true";
            cout<<"Bladder Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Bladder Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Ureterosigmoidostomy, Surgical removal, Cystoprostatectomy, Cystourethrectomy, Chemotherapy, Ureterostomy, Radiation therapy, and Urinary diversion";
            break;

        case 9:
            cout<<"case 9, Colorectal Cancer executed"<<endl;
            Colon_and_Rectal_Cancers="true";
            cout<<"Colorectal Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Colorectal Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Lymph node disection, Colectomy, Chemotherapy, Chemotherapy protective drugs, Targeted therapy, Radiation therapy, and Immunotherapy";
            break;

        case 10:
            cout<<"case 10, Testicular Cancer executed"<<endl;
            Testicular_Cancer="true";
            cout<<"Testicular Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Testicular Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Inguinal orchiectomy surgery, Retroperitoneal lymph node disection, Chemotherapy, Hormone therapy, and Radiation therapy";
            break;

        case 11:
            cout<<"case 11, Penile Cancer executed"<<endl;
            Penile_Cancer="true";
            cout<<"Penile Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Penile Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Brachytherapy, Carbon dioxide laser, Radiation therapy, Mohs surgery, Tropical anti-tumor medication, Chemotherapy, Penectomy, Wide local excision, and Lymph node dissection";
            break;

        case 12:
            cout<<"case 12, Ovarian Cancer executed"<<endl;
            Ovarian_Cancer="true";
            cout<<"Ovarian Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Ovarian Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Omentectomy, Salpingoophorectomy, Laparotomy, Hysterectomy, Pelvic lymph dissection, Chemotherapy, and Radiation therapy";
            break;

        case 13:
            cout<<"case 13, Cervical Cancer executed"<<endl;
            Cervical_Cancer="true";
            cout<<"Cervical Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Cervical Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Teletherapy, Brachytherapy,  Hysterectomy, Cervicectomy, Cryosurgey, Radiation therapy, Cervical conization, Chemotherapy and Targeted Therapy";
            break;

        case 14:
            cout<<"case 14, Lung Cancer executed"<<endl;
            Lung_Cancer="true";
            cout<<"Lung Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Lung Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Pulmonary lobectomy, Wedge resection, Radiosurgery, Thoracotomy, Radiation therapy, Chemotherapy, targeted therapy, and immunotherapy";
            break;

        case 15:
            cout<<"case 15, Stomach Cancer executed"<<endl;
            Stomach_Cancer="true";
            cout<<"Stomach Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Stomach Cancer";
            instantiate(current_Variable);

            output_treatment = "Options include: Gastrectomy, Gastroenterostomy, Radiation therapy, Chemotherapy, Chemotherapy protective drogs, Targeted drug therapy, and Immunotherapy";
            break;

        case 16:
            cout<<"case 16, Brain Cancer executed"<<endl;
            Brain_Cancer="true";
            cout<<"Brain Cancer = \"TRUE\" "<<endl;


            //sets as current variable to place into variable_list as Instantiated.
            current_Variable = "Brain Cancer";
            instantiate(current_Variable);

            output_treatment = "Chemotherapy, Craniotomy, Tomotherapy, Radiation therapy, and Targeted therapy";
            break;

        default: //if no THEN case output
            cout<<"END OF \"THEN\" CONDITIONS IE: YOU\'VE HIT DEFAULT CASE"<<endl;
            break;
        }
    }

    front_pointer+=1;
    mynext = 1;
    }while(front_pointer<back_pointer);


    //no more conclusion variables!

    cout<<"Your results are: "<<output_treatment<<endl<<endl;
    cout<<endl<<endl<<"END OF TREATMENT PROGRAM. . . "<<endl<<endl;


    return 0;
}


//searches clause variable list for matching number to the one in the conclusion_queue

void search_function()
{
    int flag = 0;
    int statement_Number = mynext;

    while ((flag == 0) && (statement_Number <= 10))
    {
        clause_Number=1;
        //int k = ((clause_Number/4)+1)*10;
        int k = ((statement_Number-1)*4+clause_Number);

        while ((Condition_variable_1st_in_conclusionVarQueue[front_pointer] != clause_Variable_List[k]) && (clause_Number < 4))
        {
            clause_Number = clause_Number+1;
            //k = ((clause_Number/4)+1)*10;
            k = ((statement_Number-1)*4+clause_Number);
        }

        if (Condition_variable_1st_in_conclusionVarQueue[front_pointer] == clause_Variable_List[k])
        {
            flag = 1;
        }
        if (flag == 0)
        {
            statement_Number = statement_Number+1;
        }
    }
    if(flag == 0)
    {
        statement_Number=0;
    }
}

void instantiate(string current_Variable)
{
    //cout's here are for pretty output

    cout<<endl<<endl;


    //counter "i" variable
    int i;


    // find variable in the variable list (variable_List)
    while ((variable_List[i]!= current_Variable) && (i < 31))
    {
        i=i+1;
    }
    // instantiate it
    instantiation_Indication[i] = 1;
    i = 1;

    // determine if (current_Variable) is or already has been on the queue (Condition_variable_1st_in_conclusionVarQueue)
    while ((Condition_variable_1st_in_conclusionVarQueue[i] != current_Variable) && (i <= 10))
    {
        i=i+1;
    }

    // variable has not been on the queue. Store it in the back of the queue
    if (Condition_variable_1st_in_conclusionVarQueue[i] != current_Variable)
    {
        Condition_variable_1st_in_conclusionVarQueue[back_pointer] = current_Variable;
        back_pointer=back_pointer+1;
    }
}
