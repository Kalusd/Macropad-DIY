# Macropad DIY
Un appareil de la taille d'un pavé numérique sur lequel il est possible d'associer chaque bouton à une séquence de touches.  

## Attention
Ce guide à été rédigé après avoir fabriqué cet appareil, par conséquent, il n'y a pas de photos pendant la fabrication et des erreurs peuvent s'y être glissées.  
Je (Kalusd) décline toute responsabilité en cas de dommages matériels ou de blessures causées par une mauvaise utilisation du matériel ainsi que des outils nécessaires a la fabrication de cet appareil, ou causées par des erreurs dans ce guide. Veuillez faire vos recherches pendant le téléversement du code sur l'arduino.  

## Matériel requis
- Le logiciel "Arduino IDE" (disponible [ici](https://www.arduino.cc/en/software))
- 1 Arduino Micro avec processeur ATmega32U4  
- 9 Petits boutons poussoirs  
- 9 Résistances de 10K Ohms  
- 1 LED de la couleur choisie (ici vert)  
- 1 Résistance de 220 Ohms  
- 1 Interrupteur a glissière  
- Des fils électriques simples pour effectuer les connexions  

## Instructions 
1 - Imprimer les 3 fichiers STL dans le dossier "3D-Parts" avec une imprimante 3D (il éxiste des entreprises qui impriment les fichiers que vous leur fournissez si vous ne possedez pas d'imprimante 3D).  
2 - Connecter les composants selon le schéma électrique nommé "Schematic.png".  
3 - Fixer l'arduino au fond de la coque de manière à avoir le port micro usb aligné avec l'emplacement prévu.  
Note : Il sera peut être nécessaire d'agrandir l'emplacement du port micro usb dans la coque a l'aide d'une lime selon la taille de votre câble.  
4 - Fixer les boutons poussoirs et l'interrupteur à glissière à la façade (ici j'ai utilisé de la colle chaude, mais il faut faire attention à ce qu'elle ne soit pas trop chaude pour ne pas déformer la façade en plastique).  
5 - Fermer le boîtier à l'aide de 4 petites vis ou de colle chaude.  

## Explication du fonctionnement
Grâce au microprocesseur ATmega32U4, l'arduino est capable d'envoyer des données similaires à celles envoyées par un clavier.
Les touches fonction de F1 à F12 sont présente sur quasiment tous les claviers modernes, mais il existe en fait des touches fonction supplémentaires, de F13 à F24.  
De base, le programme envoie les touches fonction de F13 à F21, afin de ne pas interférer avec les commandes déja présentes, mais il est possible de les modifier (les touches spéciales sont disponibles [ici](https://reference.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardmodifiers/)).  
La fréquence de répétition des touches si le bouton est maintenu appuyé est également modifiable.

### Téléversement du programme sur l'arduino
Une fois l'arduino branché à votre ordinateur, ouvrez le logiciel "Arduino IDE".  
Dans l'onglet "Outils", sélectionnez "Port" et choisissez le port série sur lequel est branché votre arduino. Le type de carte doit s'afficher à côté du nom du port (exemple : "COM9 (Arduino Leonardo)"), ce nom sera utile lors de la prochaine étape. S'il ne s'affiche pas, passez à l'étape suivante.  
Toujours dans l'onglet "Outils", sélectionnez "Type de carte" puis choisissez le type de carte correspondant à celui affiché à l'étape précedente. Si aucun type de carte ne s'est affiché à l'étape précedente, sélectionnez "Arduino Micro".  
Copiez-collez le programme nommé "main.ino" dans le logiciel 'Arduino IDE" puis cliquez sur le bouton en forme de flèche en haut à gauche pour téléverser le programme.  
Votre appareil est censé être opérationnel.
