#include <stdio.h>
#include <string.h>

// Function to Print Subjects of a Given Category
void printCategory(const char *categoryName, char subjects[][50], int size) {
    printf("%s:\n", categoryName);
    for (int i = 0; i < size; i++) {
        printf("  - %s\n", subjects[i]);
    }
    printf("\n");
}

// Define Characteristics of a Subject
struct Characteristics{
    //The variable 'weightings' indicates the subject's suitability for the user. A higher number indicates a higher suitability.
    int weightings=0;

    //The variable 'workload' indicates the subject's workload. A higher number indicates a higher workload.
    int workload;

    //The variable 'examMethods' indicates whether the subject is more exam or essay based. A higher number indicates it is more exam based, and a lower number indicates it is more essay based.
    int examMethods;

    //The variable 'careerEmployability' indicates the rough employability rate of graduates of the subject. A higher number indicates a higher rate.
    int careerEmployability;

    //The variable 'degreeIncome' indicates the rough income of graduates of the subject.
    int degreeIncome;
};

int main() {
    // Welcome Message and Introduction
    printf("Welcome to your personalised university subject recommender.\n");
    printf("In the following 5min, you would complete a total of 30 questions that would indicate your most suitable subjects to study in university.\n");
    printf("We would recommend which university subject is best suited for you based on your personal interests, aptitude, workload, exam methods and career prospects.\n");
    printf("Please be aware that these are just only estimations. Ultimately, you know what is best for you!\n");
    printf("Press 'y' if you are ready to start: ");
    char start[2];
    scanf("%s", start);
    while (strcmp(start, "y") != 0) {
        printf("Press 'y' if you are ready to start: ");
        scanf("%s", start);
    }

    // Start Determining Interests
    printf("\nGreat! We will now determine your most interested subject.\n");
    printf("These are the list of subjects we will take into account. If the subject you have in mind is not here, just pick the closest one.\n");

    // Print out all Subjects
    printf("\n*** SUBJECTS TO CHOOSE FROM ***\n\n");

    // List of all Subjects
    char humanitiesAndArts[10][50] = 
    {"English Literature", "History", "Philosophy", "Linguistics", "Classics", 
    "Fine Arts", "Music", "Theatre and Performing Arts", "Religious Studies", "Cultural Studies"};

    char socialSciences[10][50] = 
    {"Psychology", "Sociology", "Anthropology", "Political Science", "Economics", 
    "Human Geography", "International Relations", "Social Work", "Criminology", "Gender Studies"};

    char naturalSciences[10][50] = 
    {"Biology", "Chemistry", "Physics", "Environmental Science", "Geology", 
    "Marine Biology", "Astronomy", "Zoology", "Botany", "Biochemistry"};

    char mathematicsAndComputing[6][50] = 
    {"Mathematics", "Computer Science", "Data Science", "Artificial Intelligence", 
    "Statistics", "Actuarial Science"};

    char engineeringAndTechnology[10][50] = 
    {"Civil Engineering", "Mechanical Engineering", "Electrical Engineering", 
    "Computer Engineering", "Software Engineering", "Aerospace Engineering", 
    "Chemical Engineering", "Biomedical Engineering", "Industrial Engineering", "Robotics"};

    char healthAndMedicine[10][50] = 
    {"Medicine", "Nursing", "Pharmacy", "Dentistry", "Physiotherapy", 
    "Public Health", "Veterinary Medicine", "Nutrition and Dietetics", "Midwifery", "Biomedical Science"};

    char businessAndManagement[10][50] = 
    {"Business Administration", "Accounting and Finance", "Marketing", 
    "Human Resource Management", "Entrepreneurship", "Supply Chain Management", 
    "International Business", "Economics", "Project Management", "Tourism Management"};

    char lawAndLegalStudies[5][50] = 
    {"Law", "International Law", "Criminal Law", "Corporate Law", "Human Rights Law"};

    char education[5][50] = 
    {"Education Studies", "Teacher Training", "Early Childhood Education", 
    "Special Education", "Educational Psychology"};

    char creativeAndDesign[9][50] = 
    {"Architecture", "Graphic Design", "Fashion Design", "Interior Design", "Film Studies", 
    "Animation", "Game Design", "Photography", "Industrial Design"};

    char communicationAndMedia[5][50] = 
    {"Journalism", "Mass Communication", "Public Relations", "Digital Media", "Advertising"};

    char languageAndLiterature[5][50] = 
    {"Modern Languages", "Comparative Literature", "Translation Studies", 
    "Creative Writing", "Applied Linguistics"};

    char environmentalAndEarthSciences[5][50] = 
    {"Environmental Science", "Geography", "Climate Science", "Oceanography", 
    "Renewable Energy Studies"};

    char regionalStudies[5][50] = 
    {"African Studies", "Asian Studies", "Middle Eastern Studies", 
    "Latin American Studies", "European Studies"};

    //Print All Subjects
    printCategory("Humanities and Arts", humanitiesAndArts, 10);
    printCategory("Social Sciences", socialSciences, 10);
    printCategory("Natural Sciences", naturalSciences, 10);
    printCategory("Mathematics and Computing", mathematicsAndComputing, 6);
    printCategory("Engineering and Technology", engineeringAndTechnology, 10);
    printCategory("Health and Medicine", healthAndMedicine, 10);
    printCategory("Business and Management", businessAndManagement, 10);
    printCategory("Law and Legal Studies", lawAndLegalStudies, 5);
    printCategory("Education", education, 5);
    printCategory("Creative and Design", creativeAndDesign, 9);
    printCategory("Communication and Media", communicationAndMedia, 5);
    printCategory("Language and Literature", languageAndLiterature, 5);
    printCategory("Environmental and Earth Sciences", environmentalAndEarthSciences, 5);
    printCategory("Regional Studies", regionalStudies, 5);

    // Initialize all subjects with their respective characteristics

        // Humanities and Arts
        struct Characteristics humanitiesAndArts[10] = {
            {0, 3, 2, 70, 30000}, // English Literature
            {0, 4, 1, 65, 28000}, // History
            {0, 3, 2, 50, 25000}, // Philosophy
            {0, 3, 2, 60, 27000}, // Linguistics
            {0, 4, 1, 55, 26000}, // Classics
            {0, 3, 2, 50, 25000}, // Fine Arts
            {0, 3, 1, 55, 26000}, // Music
            {0, 3, 1, 50, 24000}, // Theatre and Performing Arts
            {0, 3, 1, 60, 27000}, // Religious Studies
            {0, 3, 1, 55, 26000}  // Cultural Studies
        };

        // Social Sciences
        struct Characteristics socialSciences[10] = {
            {0, 4, 3, 80, 31000}, // Psychology
            {0, 3, 2, 70, 29000}, // Sociology
            {0, 3, 1, 60, 27000}, // Anthropology
            {0, 3, 2, 75, 30000}, // Political Science
            {0, 5, 4, 90, 35000}, // Economics
            {0, 3, 2, 70, 29000}, // Human Geography
            {0, 4, 3, 85, 32000}, // International Relations
            {0, 3, 2, 65, 28000}, // Social Work
            {0, 4, 3, 70, 29000}, // Criminology
            {0, 3, 2, 65, 28000}  // Gender Studies
        };

        // Natural Sciences
        struct Characteristics naturalSciences[10] = {
            {0, 4, 4, 85, 35000}, // Biology
            {0, 5, 4, 90, 37000}, // Chemistry
            {0, 5, 5, 95, 40000}, // Physics
            {0, 4, 3, 80, 33000}, // Environmental Science
            {0, 4, 4, 75, 32000}, // Geology
            {0, 4, 3, 80, 33000}, // Marine Biology
            {0, 4, 4, 90, 36000}, // Astronomy
            {0, 4, 4, 80, 33000}, // Zoology
            {0, 4, 3, 75, 31000}, // Botany
            {0, 5, 5, 95, 40000}  // Biochemistry
        };

        // Mathematics and Computing
        struct Characteristics mathematicsAndComputing[6] = {
            {0, 5, 5, 95, 45000}, // Mathematics
            {0, 5, 5, 95, 50000}, // Computer Science
            {0, 5, 5, 95, 50000}, // Data Science
            {0, 5, 5, 95, 55000}, // Artificial Intelligence
            {0, 4, 5, 90, 40000}, // Statistics
            {0, 5, 4, 85, 45000}  // Actuarial Science
        };

        // Engineering and Technology
        struct Characteristics engineeringAndTechnology[10] = {
            {0, 5, 5, 95, 50000}, // Civil Engineering
            {0, 5, 5, 95, 55000}, // Mechanical Engineering
            {0, 5, 5, 95, 55000}, // Electrical Engineering
            {0, 5, 5, 95, 55000}, // Computer Engineering
            {0, 5, 5, 95, 60000}, // Software Engineering
            {0, 5, 5, 95, 60000}, // Aerospace Engineering
            {0, 5, 5, 95, 50000}, // Chemical Engineering
            {0, 5, 5, 95, 50000}, // Biomedical Engineering
            {0, 5, 5, 95, 50000}, // Industrial Engineering
            {0, 5, 5, 95, 55000}  // Robotics
        };

        // Health and Medicine
        struct Characteristics healthAndMedicine[10] = {
            {0, 5, 5, 95, 60000}, // Medicine
            {0, 4, 4, 90, 35000}, // Nursing
            {0, 5, 5, 95, 50000}, // Pharmacy
            {0, 5, 5, 95, 75000}, // Dentistry
            {0, 4, 4, 85, 40000}, // Physiotherapy
            {0, 3, 4, 85, 35000}, // Public Health
            {0, 5, 5, 90, 45000}, // Veterinary Medicine
            {0, 3, 3, 80, 35000}, // Nutrition and Dietetics
            {0, 4, 4, 85, 40000}, // Midwifery
            {0, 4, 4, 85, 40000}  // Biomedical Science
        };

        // Business and Management
        struct Characteristics businessAndManagement[10] = {
            {0, 4, 4, 90, 50000}, // Business Administration
            {0, 4, 4, 90, 45000}, // Accounting and Finance
            {0, 3, 3, 85, 40000}, // Marketing
            {0, 3, 3, 85, 40000}, // Human Resource Management
            {0, 3, 3, 80, 35000}, // Entrepreneurship
            {0, 4, 4, 85, 40000}, // Supply Chain Management
            {0, 4, 4, 90, 45000}, // International Business
            {0, 4, 4, 90, 45000}, // Economics
            {0, 3, 3, 80, 35000}, // Project Management
            {0, 3, 3, 80, 35000}  // Tourism Management
        };

        // Law and Legal Studies
        struct Characteristics lawAndLegalStudies[5] = {
            {0, 4, 3, 85, 50000}, // Law
            {0, 4, 3, 90, 55000}, // International Law
            {0, 4, 3, 80, 45000}, // Criminal Law
            {0, 4, 3, 85, 50000}, // Corporate Law
            {0, 3, 2, 80, 45000}  // Human Rights Law
        };

        // Education
        struct Characteristics education[5] = {
            {0, 3, 2, 75, 30000}, // Education Studies
            {0, 3, 2, 70, 28000}, // Teacher Training
            {0, 3, 2, 70, 28000}, // Early Childhood Education
            {0, 3, 2, 65, 25000}, // Special Education
            {0, 3, 2, 70, 28000}  // Educational Psychology
        };

        // Creative and Design
        struct Characteristics creativeAndDesign[9] = {
            {0, 3, 2, 75, 30000}, // Architecture
            {0, 3, 2, 70, 28000}, // Graphic Design
            {0, 3, 2, 70, 28000}, // Fashion Design
            {0, 3, 2, 70, 28000}, // Interior Design
            {0, 3, 2, 70, 28000}, // Film Studies
            {0, 3, 2, 65, 25000}, // Animation
            {0, 3, 2, 65, 25000}, // Game Design
            {0, 3, 2, 65, 25000}, // Photography
            {0, 3, 2, 70, 28000}  // Industrial Design
        };

        // Communication and Media
        struct Characteristics communicationAndMedia[5] = {
            {0, 3, 3, 75, 35000}, // Journalism
            {0, 3, 3, 75, 35000}, // Mass Communication
            {0, 3, 3, 75, 35000}, // Public Relations
            {0, 3, 3, 70, 30000}, // Digital Media
            {0, 3, 3, 70, 30000}  // Advertising
        };

        // Language and Literature
        struct Characteristics languageAndLiterature[5] = {
            {0, 3, 2, 70, 28000}, // Modern Languages
            {0, 3, 2, 70, 28000}, // Comparative Literature
            {0, 3, 2, 65, 25000}, // Translation Studies
            {0, 3, 2, 70, 28000}, // Creative Writing
            {0, 3, 2, 65, 25000}  // Applied Linguistics
        };

        // Environmental and Earth Sciences
        struct Characteristics environmentalAndEarthSciences[5] = {
            {0, 4, 4, 85, 35000}, // Environmental Science
            {0, 4, 4, 80, 33000}, // Geography
            {0, 4, 4, 85, 35000}, // Climate Science
            {0, 4, 4, 80, 33000}, // Oceanography
            {0, 4, 4, 80, 33000}  // Renewable Energy Studies
        };

        // Regional Studies
        struct Characteristics regionalStudies[5] = {
            {0, 3, 2, 70, 28000}, // African Studies
            {0, 3, 2, 70, 28000}, // Asian Studies
            {0, 3, 2, 70, 28000}, // Middle Eastern Studies
            {0, 3, 2, 70, 28000}, // Latin American Studies
            {0, 3, 2, 70, 28000}  // European Studies
        };


    return 0;
}
