//solution Iterative approach
#include <unistd.h>
void ft_print_alphabet(void) {
    for (char c = 'a'; c <= 'z'; ++c) {
        write(1, &c, 1);
    }
}

int main() {
    ft_print_alphabet();
    return 0;
}
//solution string literal
#include <unistd.h>
void ft_print_alphabet(void) {
    char lowercase_letters[] = "abcdefghijklmnopqrstuvwxyz";
    write(1, lowercase_letters, sizeof(lowercase_letters) - 1);
}

int main() {
    ft_print_alphabet();
    return 0;
}
//solution Recursive approach
#include <unistd.h>
void ft_print_alphabet_helper(char c) {
    if (c <= 'z') {
        write(1, &c, 1);
        ft_print_alphabet_helper(c + 1);
    }
}

void ft_print_alphabet(void) {
    ft_print_alphabet_helper('a');
}

int main() {
    ft_print_alphabet();
    return 0;
}
//solution int instead of char, ASCII values
#include <unistd.h>
void ft_print_alphabet(void) {
    for (int i = 'a'; i <= 'z'; ++i) {
        write(1, &i, 1);
    }
}

int main() {
    ft_print_alphabet();
    return 0;
}



//compile: gcc ft_print_alphabet.c -o ft_print_alphabet
//Execute the compiled binary: ./ft_print_alphabet_solution
