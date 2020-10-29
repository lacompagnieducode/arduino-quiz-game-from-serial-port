![TeamQuiz](Images/TeamQuiz.png)

# Jeu de quiz Arduino depuis le port série

Le but de ce projet et de permettre, grâce à l'utilisation des branches,
la construction d'un jeu de Quiz étape par étape.

On propose pour commencer de connecter trois LED à la carte Arduino.

Le but est de répondre à une série de questions.

Chaque bonne réponse rapporte un point.

Une mauvaise réponse fait reprendre le jeu de zéro.

Le premier qui arrive à répondre juste aux trois questions d'affilée à gagner ;-)

---

## ![TeamQuiz](Images/quiz-pop-art-x50px.png) Etape 01

Depuis la barre de menu, ouvrez :

  Fichier > Exemples > 01.Basic > Blink

Enregistrez le programme sous le nom de votre choix.

Puis ajouter une fonction `affichageNiveau(int score)`.

Cette nouvelle fonction devra allumer :

* une LED si score vaut 1,
* deux LED si score vaut 2,
* trois LED si score vaut 3,
* aucunes LED si score vaut 0.

Ensuite, faites en sorte que dans la boucle loop,
vous incrémentez votre variable **score_joueur** (pensez à l'initialiser à 0 lors de sa définition),
et tester l'affichage de chaque valeur avec un pas de temps de 1 sec.

---

## ![TeamQuiz](Images/quiz-pop-art-x50px.png) Etape 02

Depuis la barre de menu, ouvrez :

  Fichier > Exemples > 04.Communication > serialEvent

Nous verrons comment poser une question et comparer la saisie du joueur pour la comparer avec la bonne réponse.
