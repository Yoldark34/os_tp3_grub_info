
#include "Ecran.h"
#include "Info_Boot.h"

void OS_Start(T_BOOT_INFO* P_Info) {
	Efface_Ecran();
	Affiche_Chaine(">>>BOOT");
	Regle_Couleur(10);
	Affiche_Chaine("OK\n");

	if ((P_Info->Flags & BOOT_INFO_MEMOIRE) == BOOT_INFO_MEMOIRE) {
		Affiche_Chaine("\n Adresse Basse (640ko maxi) : ");
		Affiche_Chaine(Entier_Vers_Chaine_Hexa(P_Info->Adresse_Basse, 4));

		Affiche_Chaine("\n Adresse Haute (Au dessus des 1 Mo) : ");
		Affiche_Chaine(Entier_Vers_Chaine_Hexa(P_Info->Adresse_Haute, 4));
		Affiche_Chaine("\n\tIl y a donc : ");

		UINT32 L_Taille_Memoire = P_Info->Adresse_Basse + P_Info->Adresse_Haute + 1024;
		Affiche_Chaine(Entier_Vers_Chaine(L_Taille_Memoire));
		Affiche_Chaine(" Ko de memmoire --> ");
		Affiche_Chaine(Entier_Vers_Chaine(L_Taille_Memoire / 1024));
		Affiche_Chaine(" Mo ");
	}

	if ((P_Info->Flags & BOOT_LIGNE_COMMANDE) == BOOT_LIGNE_COMMANDE) {
		Affiche_Chaine("\n Ligne de commenda passée au noyau : ");
		Affiche_Chaine((UCHAR*) P_Info->Ligne_De_Commande);
	}
}
