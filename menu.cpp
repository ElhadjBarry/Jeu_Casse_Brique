#include "menu.h"

void Menu::AffichageMenu(Window *background)
{
	background->clear();
	background->print(39, 5, "Casse brique", BRED);
	background->print(38, 9, "Menu principal", BRED);    
	background->print(27, 12, "APPUYEZ SUR S POUR JOUER AU NOUVEAU JEU", BRED);
	background->print(27, 15, "APPUYEZ SUR L POUR CHARGER LE JEU SAUVE", BRED);
	background->print(33, 18, "PRESSE H POUR les scores", BRED);
	background->print(33, 21, "PRESSE C POUR les crédits", BRED);
}
void Menu::AffichageGagnant(Window *background)
{
	background->print(40, 17, "Niveau fait", WGREEN);
	background->print(35, 18, "Appuyez sur C pour continuer!", WGREEN);
}
void Menu::AffichagePerdant(Window *background)
{
	background->print(40, 17, "Jeu terminé!", WRED);
	background->print(35, 18, "Appuyez sur C pour continuer!", WRED);
}
void Menu::AffichageAide(Window *background)
{
	background->clear();
	background->print(43, 5, "Aidez-moi");
	background->print(25, 8, "Utilisez la flèche pour déplacer, S pour lancer");
	background->print(25, 9, "Retour à l'écran précédent - Q");
	char ch; while((ch = getch()) != 'q') {}
}
void Menu::AffichageInfo(Window *background)
{
	background->clear();
	background->print(43, 5, "Crédits");
	background->print(35, 8, "Barry Elhadj");
	background->print(35, 9, "RAPHAEL");
	background->print(35, 10, "IFEOMA");
	background->print(35, 11, "TIAVINA  ");
	char ch; while((ch = getch()) != 'q') {}
}
