#include <math.h>
#include <stdio.h>
#include <string.h>

typedef struct Person {
    int code;
    char name[50];
    struct Person* next;
} Person;

void menu();

int main()
{
    Person *p = NULL, *aux, *last;
    int i;
    int count = 0;
    int op = 1;
    while (op != 0) {
        menu();
        scanf("%d", &op);
        switch (op) {
        case 1:

            for (i = 0; i < 3; i++) {

                aux = malloc(sizeof(Person));

                printf("Digite o código: ");
                scanf("%i", &aux->code);

                printf("Digite o nome: ");
                scanf("%s", aux->name);

                aux->next = NULL;

                if (p == NULL) {
                    p = aux;
                    last = aux;
                } else {
                    last->next = aux;
                    last = aux;
                }
            }
            break;
        case 2:
            for (int i = 1; i < 3; i++) {
                aux = p;
                printf("----------------------\n");
                printf("Código: %i\n", p->code);
                printf("Nome: %s\n", p->name);
                printf("----------------------\n");
                break;
            }
        }
    }
}
void menu()
{
    printf("\n1 - Adicionar contato");
    printf("\n2 - Ver lista de contatos");
    printf("\n0 - Sair\n");
}
