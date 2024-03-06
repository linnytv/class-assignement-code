#include <stdio.h>

int main() {
    int Eng = -1, Math = -1, Swa = -1, Bio = -1, Chem = -1, Phy = -1, Hist = -1, Comp = -1, Mean;
    char Grade, EngGrade, Mathgrade, Swagrade, Biograde, Chemgrade, Phygrade, Histgrade, Compgrade;
    char Name[20];

    printf("Enter Student Name: ");
    scanf("%s", Name);
    printf("Hello %s,\nEnter Your Marks As Follows: \n", Name);

    printf("English: ");
    while (Eng > 100 || Eng < 0) {
        scanf("%d", &Eng);
        if (Eng > 100 || Eng < 0) {
            printf("Wrong Entry! Marks should be between 0 and 100.\nTry Again\nEnglish: ");
        }
    }

    printf("Kiswahili: ");
    while (Swa > 100 || Swa < 0) {
        scanf("%d", &Swa);
        if (Swa > 100 || Swa < 0) {
            printf("Wrong Entry! Marks should be between 0 and 100.\nTry Again\nKiswahili: ");
        }
    }

    printf("Maths: ");
    while (Math > 100 || Math < 0) {
        scanf("%d", &Math);
        if (Math > 100 || Math < 0) {
            printf("Wrong Entry! Marks should be between 0 and 100.\nTry Again\nMaths: ");
        }
    }

    printf("Biology: ");
    while (Bio > 100 || Bio < 0) {
        scanf("%d", &Bio);
        if (Bio > 100 || Bio < 0) {
            printf("Wrong Entry! Marks should be between 0 and 100.\nTry Again\nBiology: ");
        }
    }

    printf("Chemistry: ");
    while (Chem > 100 || Chem < 0) {
        scanf("%d", &Chem);
        if (Chem > 100 || Chem < 0) {
            printf("Wrong Entry! Marks should be between 0 and 100.\nTry Again\nChemistry: ");
        }
    }

    printf("Physics: ");
    while (Phy > 100 || Phy < 0) {
        scanf("%d", &Phy);
        if (Phy > 100 || Phy < 0) {
            printf("Wrong Entry! Marks should be between 0 and 100.\nTry Again\nPhysics: ");
        }
    }

    printf("History: ");
    while (Hist > 100 || Hist < 0) {
        scanf("%d", &Hist);
        if (Hist > 100 || Hist < 0) {
            printf("Wrong Entry! Marks should be between 0 and 100.\nTry Again\nHistory: ");
        }
    }

    printf("Computer Studies: ");
    while (Comp > 100 || Comp < 0) {
        scanf("%d", &Comp);
        if (Comp > 100 || Comp < 0) {
            printf("Wrong Entry! Marks should be between 0 and 100.\nTry Again\nComputer Studies: ");
        }
    }

    Mean = (Eng + Swa + Math + Bio + Chem + Phy + Hist + Comp) / 8;

    if (Mean >= 70) {
        Grade = 'A';
    } else if (Mean >= 60) {
        Grade = 'B';
    } else if (Mean >= 50) {
        Grade = 'C';
    } else if (Mean >= 40) {
        Grade = 'D';
    } else {
        Grade = 'E';
    }

    if (Eng >= 70) {
        EngGrade = 'A';
    } else if (Eng >= 60) {
        EngGrade = 'B';
    } else if (Eng >= 50) {
        EngGrade = 'C';
    } else if (Eng >= 40) {
        EngGrade = 'D';
    } else {
        EngGrade = 'E';
    }

    if (Math >= 70) {
        Mathgrade = 'A';
    } else if (Math >= 60) {
        Mathgrade = 'B';
    } else if (Math >= 50) {
       Mathgrade = 'C';
    } else if (Math >= 40) {
        Mathgrade = 'D';
    } else {
        Mathgrade = 'E';
    }

    if (Swa >= 70) {
        Swagrade = 'A';
    } else if (Swa >= 60) {
        Swagrade = 'B';
    } else if (Swa >= 50) {
        Swagrade = 'C';
    } else if (Swa >= 40) {
        Swagrade = 'D';
    } else {
        Swagrade = 'E';
    }
    if (Chem >= 70) {
        Chemgrade = 'A';
    } else if (Chem >= 60) {
        Chemgrade = 'B';
    } else if (Chem >= 50) {
        Chemgrade = 'C';
    } else if (Chem >= 40) {
        Chemgrade = 'D';
    } else {
        Chemgrade = 'E';
    }
    if (Bio >= 70) {
        Biograde = 'A';
    } else if (Bio >= 60) {
        Biograde = 'B';
    } else if (Bio >= 50) {
        Biograde = 'C';
    } else if (Bio >= 40) {
        Biograde = 'D';
    } else {
        Biograde = 'E';
    }
    if (Phy >= 70) {
        Phygrade = 'A';
    } else if (Phy >= 60) {
        Phygrade = 'B';
    } else if (Phy >= 50) {
        Phygrade = 'C';
    } else if (Phy >= 40) {
        Phygrade = 'D';
    } else {
        Phygrade = 'E';
    }
if (Hist >= 70) {
        Histgrade = 'A';
    } else if (Hist >= 60) {
        Histgrade= 'B';
    } else if (Hist >= 50) {
        Histgrade = 'C';
    } else if (Hist >= 40) {
        Histgrade = 'D';
    } else {
        Histgrade = 'E';
    }
    if (Comp >= 70) {
        Compgrade = 'A';
    } else if (Comp >= 60) {
        Compgrade = 'B';
    } else if (Comp >= 50) {
        Compgrade = 'C';
    } else if (Comp >= 40) {
        Compgrade = 'D';
    } else {
        Compgrade = 'E';
    }
    printf("Student: %s\tMean Mark: %d\tGrade: %c\n English: %d %c \n Maths: %d %c \n Kiswahili: %d %c \n Chemistry: %d %c \n Physics: %d %c \n Biology: %d %c \n History: %d %c \n Computer: %d %c \n", Name, Mean, Grade,Eng, EngGrade,Math, Mathgrade,Swa, Swagrade,Chem, Chemgrade,Phy, Phygrade,Bio, Biograde,Hist, Histgrade,Comp, Compgrade);

    return 0;
}

