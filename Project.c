#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_CHANCES 3

int main() {
    char word[] = "Great";
    char guessedWord[strlen(word) + 1];
    int chances = MAX_CHANCES;
    char guess;
    int i,found;

    printf("Welcome to Hangman!\n");

    for (i = 0; i < strlen(word); i++){
    guessedWord[i] = '_';
}
    guessedWord[i] = '\0';
    printf("Guess the word: %s\n", guessedWord);

    while (chances > 0 && strcmp(word, guessedWord) != 0){
    printf("Chances left: %d\n", chances);
    printf("Enter your guess: ");
    scanf(" %c", &guess);
    guess = tolower(guess);
    found = 0;
    for (i = 0; i < strlen(word); i++){
    if (tolower(word[i]) == guess){
    guessedWord[i] = word[i];
    found = 1;
}
}
    if (found){
    printf("Good guess!\n");
}
    else{
    printf("Wrong guess!\n");
    chances--;
}
    printf("Guessed word: %s\n", guessedWord);
}
    if (strcmp(word, guessedWord) == 0){
    printf("Congratulations! You've guessed the word: %s\n",word);
}
    else{
    printf("Sorry, you ran out of chances! The man is hanged. The word was: %s\n",word);
}
   return 0;
}
