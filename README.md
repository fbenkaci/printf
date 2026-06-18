# printf
Réimplémentation personnelle de la fonction printf en C, réalisée dans le cadre du cursus 42. Le projet gère les conversions standards (%c, %s, %p, %d, %i, %u, %x, %X, %%) via une fonction variadique, en respectant la Norme 42. Un excellent exercice pour comprendre le fonctionnement interne de la libc.


⚙️ Compilation

Compiler la bibliothèque (libftprintf.a) :

make

Lancer un exécutable de test (linke main.c avec la lib) avec un nombre en argument :

./test 42

⚠️ Il faut passer un nombre en argument (ex: 42) pour que le test l'affiche selon les différentes conversions.

Autres commandes utiles :

make clean     # supprime les .o
make fclean    # supprime les .o, la lib et l'exécutable de test
make re        # recompile tout depuis zéro

🧩 Conversions gérées

%c, %s, %p, %d, %i, %u, %x, %X, %%

✅ Status


 Partie obligatoire
 Norme 42 respectée
