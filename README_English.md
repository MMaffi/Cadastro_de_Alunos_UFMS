# Student Registration
**Author:** Mateus Maffi  
**Start Date:** 13/08/2025  
**Course:** Algorithms and Programming II  
**Description:**<br>
This program manages the student registration for the course **Algorithms and Programming II** (2nd semester of 2025).  
The system uses an array of structs to store up to 50 students, allowing registration, removal, grade updates, and performance report display.

## Features

✅ Create a struct to represent students (name, RGA, three grades, and average performance - MA)  
✅ Implement a function to register a new student  
✅ Implement a function to update a student's grades by RGA  
✅ Implement a function to search for already registered students  
⬜ Implement a function to remove a student by RGA  
⬜ Display approved students:
- Show name, three grades, and MA  
- Sort by name (ascending alphabetical order)  
⬜ Display failed students:
- Show name, three grades, and MA  
- Sort by MA (descending order)  
- If MA is equal → sort by name (ascending alphabetical order)  
⬜ Display averages:
- Average MA of approved students  
- Average MA of failed students  
- Average MA of all students  
⬜ Create an interactive menu to navigate options  
⬜ Add error handling (input validation, limits, etc.)  
⬜ Organize the code into helper functions  
⬜ Comment the code and add a header with name, date, and description  

## Legend
⬜ Not started | ✅ Completed

## Student Structure (struct)
```c
typedef struct {
    int RGA;
    int nome[51];
    float nota1, nota2, nota3;
    float media;
    int aprovado; /* 1 = aprovado | 0 = reprovado */
} reg_aluno;
```
