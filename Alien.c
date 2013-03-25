#include "Ecran.h"
#include "Alien.h"

void Affiche_Alien_1(BYTE color) {
	BYTE prevColor = Donne_Couleur();
	Regle_Couleur(color);
	Affiche_Chaine("       .-''''-.\n");
	Affiche_Chaine("      /        \\\n");
	Affiche_Chaine("     /_        _\\\n");
	Affiche_Chaine("    // \\      / \\\\\n");
	Affiche_Chaine("    |\\__\\    /__/|\n");
	Affiche_Chaine("     \\    ||    /\n");
	Affiche_Chaine("      \\        /\n");
	Affiche_Chaine("       \\  __  /\n");
	Affiche_Chaine("        '.__.'\n");
	Affiche_Chaine("         |  |\n");
	Regle_Couleur(prevColor);
}

void Affiche_Alien_2(BYTE color) {
	BYTE prevColor = Donne_Couleur();
	Regle_Couleur(color);
	Affiche_Chaine("       .-''''-.\n");
	Affiche_Chaine("      /  _____ \\\n");
	Affiche_Chaine("     /_   ___  _\\\n");
	Affiche_Chaine("    // \\      / \\\\\n");
	Affiche_Chaine("    |\\_0\\    /_0/|\n");
	Affiche_Chaine("     \\    ||    /\n");
	Affiche_Chaine("      \\   __   /\n");
	Affiche_Chaine("       \\ |__| /\n");
	Affiche_Chaine("        '.__.'\n");
	Affiche_Chaine("         |  |\n");
	Regle_Couleur(prevColor);
}

void copyright() {
	BYTE prevColor = Donne_Couleur();
	Regle_Couleur(ROUGE);
	Affiche_Chaine("Ceci est un os GPL v.2\n");
	Regle_Couleur(prevColor);
}