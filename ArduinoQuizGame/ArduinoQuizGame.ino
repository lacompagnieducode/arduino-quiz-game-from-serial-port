/*
  ArduinoQuizGame

  La boucle principale réalise indéfiniment les instructions suivantes :
    - Allume une LED pendant une seconde;
    - Allume deux LED pendant une seconde;
    - Allume trois LED pendant une seconde;
    - Eteint toutes les LED pendant une seconde.

  Cet exemple de code est dans le domaine public.

  Ce programme a été réalisé depuis l'exemple "Blink"
  http://www.arduino.cc/en/Tutorial/Blink
*/

int LED_LEVEL_1 = 8;  // exemple pour affecter la borche 8 à LED_LEVEL_1
// TODO: Reste à déclarer les autres LED...

// La fonction de configuration "setup()" s'exécute une fois,
// lorsque vous appuyez sur reset ou allumez la carte.
void setup() {
  // Initialiser les broches numériques LED_LEVEL_X comme sortie.
  pinMode(LED_BUILTIN, OUTPUT);
  // TODO: Ajouter les configurations des LED en sortie.
    
}

// La fonction de boucle "loop()" s'exécute encore et encore,
// tant que la carte électronique est alimentée,
// soit par le câble USB, soit par une source d'alimentation externe.
void loop() {
  // TODO: Modifier le comptenu de la boucle principale...
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

// La fonction "affichageNiveau()", devra allumer les LED "LED_LEVEL_X",
// en fonction de la valeur du paramètre "score".
// Soit si score vaut 1, alors LED_LEVEL_1 sera allumée et toutes les autres éteintes;
// Si score vaut 2, alors LED_LEVEL_1 et LED_LEVEL_2 seront allumées et LED_LEVEL_3 éteinte;
// Si score vaut 3, alors toutes les LED seront allumées;
// Et enfin si score vaut 0, toutes les LED seront éteintes.
void affichageNiveau(int score) {
  // TODO: Et compléter la fonction affichageNiveau()
  
}
