Séance du 7 mars 2022
Première séance: on a formé un groupe moi et mael, on n'avait pas de projet en tête et nous étions comme qui dirait dans une impasse. On a rencontré Louis Tranchant qui lui avait une idée de projet mais pas de groupe, son idée était une gourde connectée. Nous avons discuté de comment nous allions mettre en place le projet et on avait déjà une idée plus ou moins du matériel qu'il fallait utiliser.

Séance du 12 avril 2022
Dans cette séance nous répétions pour la présentation de mi-parcours du projet, chacun avait sa partie à dire. Maël devait présenter le projet Louis devait parler du matériel nécéssaire et moi des problèmes rencontrés et les résolutions des problèmes.

Séance du 14 avril 2022
Pour la présentation du mi-projet nous étions que deux moi et Maël . On a gardé nos parties respectives et aussi divisé la partie de Louis en deux. Ainsi a la fin de notre présentation les professeurs nous ont donné des idées pour améliorer notre projet.

Première séance Fablab:
Moi et Maël nous nous sommes retrouvé pour la partie électronique du projet, nous avons commencé à souder des fils sur les capteurs DHT22. Comme nous étions au Fablab en dehors des séances organisé par les professeurs nous avions uniquement des fils électrique souple, il fallait donc aussi souder l'autre extremité des fils.

Deuxième séance Fablab:
Moi et Maël nous avons fini de souder les fils électrique, la difficulté étant que la soudure sur l'autre extremité ne devait pas être trop épaisse car ils ne rentreraient pas dans les trous de la carte.

Troisième séance Fablab:
On a remplacé les fils électriques souple par ceux fournit par M. Ferrero bien mieux pour notre projet. Suite à cela on a commencé à chercher un programme pour utiliser un capteur DHT22 sur Arduino, il a été trouvé mais malheureusement la difficulté était de devoir en utiliser deux avec une seule carte.

Quatrième séance Fablab:
J'ai assisté Maël pour le codage après plusieurs tests nous avons eu recours à l'aide d'un professeur, on a enfin pu faire fonctionner deux capteurs DHT22, malheureusement la partie affichage du taux d'humidité n'était pas encore au point . Après un petit récapitulatif avec le professeur, il nous a conseillé des petits changements

Dernière séance Fablab avant la présentation
Avec tout le groupe nous avons donc remplacé les fils du capteur qui ne fonctionnaient plus, et même après les avoir changé, il ne fonctionnait toujours pas. On a utilisé un voltmètre pour vérifier quel broche avait vraiment un problème et il s'est avéré qu'aucune tension ne passait dans le capteur. C'était le capteur qui était défaillant , conclusion : il ne fonctionnait plus (moins d'une heure avant notre présentation, la panique était présente). J'ai donc été voir un professeur pour savoir si l'on pouvait avoir un DHT22 de remplacement, malheureusement il n'y en avait plus. On nous a donc conseillé d'utiliser le capteur intégré à la carte de programmation UCA et d'aller prendre son code de programmation sur le github. Dans un temps très limité, nous avons pu trouver les bonnes lignes de code permettant
 d'utiliser le capteur de la carte, ainsi qu'un message d'alerte si le taux d'humidité devenait trop haut (mais par manque de temps nous n'avions pas pu en faire de même avec la température extérieur).
