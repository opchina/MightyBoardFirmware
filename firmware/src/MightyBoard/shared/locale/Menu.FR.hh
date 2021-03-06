
#ifndef FRENCH
#	error no french local defined!
#endif



static PROGMEM unsigned char SPLASH1_MSG[]                   = "   La Replicator    ";
static PROGMEM unsigned char SPLASH2_MSG[]                   = "    ----------      ";
static PROGMEM unsigned char SPLASH3_MSG[]                   = "                    ";
static PROGMEM unsigned char SPLASH4_MSG[]                   = "Firmware Version 5. ";
static PROGMEM unsigned char SPLASH5_MSG[]                   = "en Francais, rev XXX";

static PROGMEM unsigned char GO_MSG[] =                        "Prechauffer";
static PROGMEM unsigned char STOP_MSG[] =                      "Refroidir";
static PROGMEM unsigned char RIGHT_TOOL_MSG[] =                "Tete de droite";
static PROGMEM unsigned char LEFT_TOOL_MSG[] =                 "Tete de gauche";
static PROGMEM unsigned char PLATFORM_MSG[] =                  "Platforme";
static PROGMEM unsigned char TOOL_MSG[] =                      "Extrudeur";
                                                              
static PROGMEM unsigned char START_MSG[] =                     "Bonjour !           " "Je suis Replicator  " "   Appuyez sur le M " "rouge pour commencer";
static PROGMEM unsigned char BUTTONS1_MSG[] =                  "Le 'M' clignotant   " "signifie en attente " "de commande pour    " "continuer.          ";
static PROGMEM unsigned char BUTTONS2_MSG[] =                  "Le 'M' fixe signifie" "que je travaille.   " "De nouvelles infos  " "quand travail fini. ";
static PROGMEM unsigned char EXPLAIN_MSG[] =                   "L'etape suivante est" "la configuration.   " "D'abord restaurer la" "plateforme          ";
static PROGMEM unsigned char LEVEL_MSG[] =                     "d'impression.       " "Elle est trop haute " "actuellement.       " "                    ";
static PROGMEM unsigned char BETTER_MSG[] =                    "La plateforme est   " "en bonne place.     " "Mettons du          " "plastique.          ";
static PROGMEM unsigned char TRYAGAIN_MSG[] =                  "Essayez encore...   " "                                                            ";
static PROGMEM unsigned char GO_ON_MSG[]   =                   "Mettez du           " "plastique maintenant" "Pour aide voir      " "makerbot.com/help   ";
static PROGMEM unsigned char SD_MENU_MSG[] =                   "Parfait !           " "Allez dans le menu  " "de la carte SD      " "et choisir un objet.";
static PROGMEM unsigned char FAIL_MSG[] =                      "Allons au menu      " "principal. Pour aide" "voir                " "makerbot.com/help   ";
static PROGMEM unsigned char START_TEST_MSG[] =                "Impression de test  " "pour regler         " "l'alignement des    " "buses.              ";
static PROGMEM unsigned char EXPLAIN1_MSG[] =                  "Choisir le meilleur " "resultat pour chaque" "axe.Les lignes vont " "de 1 a 13 et        ";
static PROGMEM unsigned char EXPLAIN2_MSG[] =                  "la ligne 1 est plus " "longue.             " "Axe Y est a gauche  " "et axe X a droite.  ";
static PROGMEM unsigned char END_MSG [] =                      "Choix enregistres.  " "Imprimez de beaux   " "objets !            " "                    ";
                                                              
static PROGMEM unsigned char SELECT_MSG[] =                    "Selectionnez les    meilleures lignes.  ";
static PROGMEM unsigned char DONE_MSG[]   =                    "Fini!";
static PROGMEM unsigned char NO_MSG[]   =                      "Non";
static PROGMEM unsigned char YES_MSG[]  =                      "Oui";
                                                              
static PROGMEM unsigned char XAXIS_MSG[] =                     "Axe X";
static PROGMEM unsigned char YAXIS_MSG[] =                     "Axe Y";


static PROGMEM unsigned char HEATER_ERROR_MSG[]              = "Les extrudeurs ne   " "chauffent pas.      " "Verifiez les        " "connexions !        ";
static PROGMEM unsigned char EXPLAIN_ONE_MSG[]               = "Appuyer sur la bague" "grise en haut des   " "extrudeurs et       " "tirez sur le guide. ";
static PROGMEM unsigned char EXPLAIN_TWO_MSG[]               = "Envoyez du filament " "dans le tube depuis " "l'arriere jusqu'a   " "ce qu'il...         ";
static PROGMEM unsigned char EXPLAIN_THRE_MSG[]              = "ressorte devant.    " "Extrudeur en chauffe" "Chargement du       " "filament en cours...";
static PROGMEM unsigned char EXPLAIN_FOUR_MSG[]              = "Ceci peut durer     " "quelques minutes.   " "ATTENTION a ne pas  " "vous bruler !       ";
static PROGMEM unsigned char EXPLAIN_ONE_S_MSG[]             = "Appuyer sur la bague" "grise en haut de    " "l'extrudeur et      " "retirez le guide.   ";
static PROGMEM unsigned char EXPLAIN_TWO_S_MSG[]             = "Envoyez du filament " "dans le tube depuis " "l'arriere jusqu'a   " "ce qu'il...         ";

static PROGMEM unsigned char HEATING_PROG_MSG[]              = "Progression du      " "chauffage :         " "                    " "                    ";
static PROGMEM unsigned char HEATING_BAR_MSG[]               = "Chauffage en cours  " "de l'extrudeur.     " "Merci de patienter. " "                    ";
static PROGMEM unsigned char READY_SS_MSG[]                  = "Replicator prete.   " "Poussez le filament " "dans la tete...     " "                    ";
static PROGMEM unsigned char READY_RIGHT_MSG[]               = "Replicator prete.   " "Chargez du filament " "dans l'extrudeur de " "droite.             ";
static PROGMEM unsigned char READY_SINGLE_MSG[]              = "Replicator prete.   " "Detachez le guide   " "et poussez le       " "filament...         ";
static PROGMEM unsigned char READY_REV_MSG[]                 = "Replicator prete.   " "Detachez le guide et" "retirez doucement le" "filament...         ";
static PROGMEM unsigned char READY_LEFT_MSG[]                = "Chargez maintenant  " "le filament dans    " "l'extrudeur gauche. " "                    ";
static PROGMEM unsigned char TUG_MSG[]                       = "Dans la bague grise " "jusqu'a ce que le   " "moteur aggripe      " "le fil.             ";
static PROGMEM unsigned char STOP_MSG_MSG[]                  = "Quand le filament   " "sort de la buse,    " "appuyez sur M pour  " "stopper l'extrudeur.";
static PROGMEM unsigned char STOP_EXIT_MSG[]                 = "Quand le filament   " "sort de la buse,    " "appuyez sur M pour  " "quitter.            ";
static PROGMEM unsigned char STOP_REVERSE_MSG[]              = "Quand le filament   " "est totalement sorti" "appuyez sur M pour  " "quitter.            ";
static PROGMEM unsigned char PUSH_HARDER_MSG[]               = "Vous devriez        " "ressayer en         " "appuyant plus fort  " "                    ";
static PROGMEM unsigned char KEEP_GOING_MSG[]                = "Continuons !        " "Besoin d'aide ?     " "Allez sur           " "makerbot.com/help   ";
static PROGMEM unsigned char FINISH_MSG[]                    = "Arret extrudeur en  " "cours. Appuyez sur M" "pour continuer.     " "                    ";
static PROGMEM unsigned char GO_ON_LEFT_MSG[]                = "Continuons !        " "Chargez du filament " "dans l'extrudeur    " "gauche...           ";
static PROGMEM unsigned char TIMEOUT_MSG[]	                 = "Le moteur ne repond " "plus depuis 5 min.  " "appuyez sur M pour  " "quitter             ";


static PROGMEM unsigned char READY1_MSG[] =                    "Tout va bien ?     ";
static PROGMEM unsigned char READY2_MSG[] =                    "Lancer impression ?";
static PROGMEM unsigned char NOZZLE_MSG_MSG[]                = "La hauteur de ";
static PROGMEM unsigned char HEIGHT_CHK_MSG[]                = "la buse est ok ? ";
static PROGMEM unsigned char HEIGHT_GOOD_MSG[]               = "Bonne hauteur !   ";
static PROGMEM unsigned char TRY_AGAIN_MSG[]                 = "Recommencons.   ";

static PROGMEM unsigned char QONE_MSG[] =                      "Du plastique sort-  ";
static PROGMEM unsigned char QTWO_MSG[] =                      "il de l'extrudeur ? ";
static PROGMEM unsigned char LOAD_RIGHT_MSG[]                = "Mettre a droite"; 
static PROGMEM unsigned char LOAD_LEFT_MSG[]                 = "Mettre a gauche"; 
static PROGMEM unsigned char LOAD_SINGLE_MSG[]               = "Mettre le plastique"; 
static PROGMEM unsigned char UNLOAD_SINGLE_MSG[]             = "Retirer le plastique"; 
static PROGMEM unsigned char UNLOAD_RIGHT_MSG[]              = "Retirer a gauche"; 
static PROGMEM unsigned char UNLOAD_LEFT_MSG[]               = "Retirer a droite"; 

static PROGMEM unsigned char JOG1_MSG[]                      = "    Mode manuel     ";
static PROGMEM unsigned char JOG2X_MSG[]                     = "        X+          ";
static PROGMEM unsigned char JOG3X_MSG[]                     = "      Retour   Y->  ";
static PROGMEM unsigned char JOG4X_MSG[]                     = "        X-          ";
static PROGMEM unsigned char JOG2Y_MSG[]                     = "        Y+          ";
static PROGMEM unsigned char JOG3Y_MSG[]                     = "  <-X Retour  Z->   ";
static PROGMEM unsigned char JOG4Y_MSG[]                     = "        Y-          ";
static PROGMEM unsigned char JOG2Z_MSG[]                     = "        Z-          ";
static PROGMEM unsigned char JOG3Z_MSG[]                     = "  <-Y Retour        ";
static PROGMEM unsigned char JOG4Z_MSG[]                     = "        Z+          ";

static PROGMEM unsigned char DISTANCESHORT_MSG[] =             "COURT";
static PROGMEM unsigned char DISTANCELONG_MSG[] =              "LONG";
static PROGMEM unsigned char GAMEOVER_MSG[] =                  "PERDU !";

static PROGMEM unsigned char HEATING_MSG[] =                   "Chauffe:";
static PROGMEM unsigned char HEATING_SPACES_MSG[] =            "Chauffe:            ";

static PROGMEM unsigned char BUILD_PERCENT_MSG[]             = " --%";
static PROGMEM unsigned char EXTRUDER1_TEMP_MSG[]            = "Tete Droite ---/---C";
static PROGMEM unsigned char EXTRUDER2_TEMP_MSG[]            = "Tete Gauche ---/---C";
static PROGMEM unsigned char PLATFORM_TEMP_MSG[]             = "Plateforme  ---/---C";
static PROGMEM unsigned char EXTRUDER_TEMP_MSG[]             = "Extrudeur:  ---/---C";

static PROGMEM unsigned char PREHEAT_SET_MSG[]               = "Param. Prechauffage ";
static PROGMEM unsigned char RIGHT_SPACES_MSG[]              =  "Tete de Droite     ";
static PROGMEM unsigned char LEFT_SPACES_MSG[]               = "Tete de Gauche     ";
static PROGMEM unsigned char PLATFORM_SPACES_MSG[]           = "Platforme       ";
static PROGMEM unsigned char RESET1_MSG[]                    = "  Retour Parametres  ";
static PROGMEM unsigned char RESET2_MSG[]                    = "     d'Usine ?      ";
static PROGMEM unsigned char CANCEL_MSG[]                    = "Annuler Impression?";
static PROGMEM unsigned char CANCEL_PROCESS_MSG[]            = "Quitter Processus? ";

static PROGMEM unsigned char PAUSE_MSG[]                     = "Pause              ";
static PROGMEM unsigned char UNPAUSE_MSG[]                   = "Reprendre          ";

static PROGMEM unsigned char NOCARD_MSG[]                    = "CarteSD Introuvable";
static PROGMEM unsigned char CARDERROR_MSG[]                 = "Err Lecture CarteSD";
static PROGMEM unsigned char CARDFORMAT_MSG[]                = "Impossible de lire  " "ce format de carteSD" "Reformatez cette    " "carte en FAT16.    ";
static PROGMEM unsigned char STATICFAIL_MSG[]                = "Une erreur a eu lieu" "en lisant la carteSD" "                    " "                   ";
static PROGMEM unsigned char CARDSIZE_MSG[]                  = "Les cartes SD d'une " "capacite superieure " " a 2Go ne sont pas  " "supportees         ";



static PROGMEM unsigned char BUILD_MSG[] =                     "Imprimer depuis SD ";
static PROGMEM unsigned char PREHEAT_MSG[] =                   "Prechauffage       ";
static PROGMEM unsigned char UTILITIES_MSG[] =                 "Utilitaires        ";
static PROGMEM unsigned char MONITOR_MSG[] =                   "Visu Temp          ";
static PROGMEM unsigned char JOG_MSG[]   =                     "Mode Manuel        ";
static PROGMEM unsigned char CALIBRATION_MSG[] =               "Calibration Axes   ";
static PROGMEM unsigned char HOME_AXES_MSG[] =                 "Axes a l'Origine   ";
static PROGMEM unsigned char FILAMENT_OPTIONS_MSG[] =          "Options du Filament";
static PROGMEM unsigned char STARTUP_MSG[] =                   "Script de Demarrage";
static PROGMEM unsigned char DSTEPS_MSG[] =                    "Debloquer Moteurs  ";
static PROGMEM unsigned char ESTEPS_MSG[] =                    "Bloquer Moteurs    ";
static PROGMEM unsigned char PLATE_LEVEL_MSG[] =               "Ajuster Plateforme ";
static PROGMEM unsigned char LED_BLINK_MSG[] =                 "Clignotement LED   ";
static PROGMEM unsigned char LED_STOP_MSG[] =                  "Stop Clignotement  ";
static PROGMEM unsigned char PREHEAT_SETTINGS_MSG[] =          "Param. Prechauffage";
static PROGMEM unsigned char VERSION_MSG[] = 		           "Numero de Version  ";
static PROGMEM unsigned char SETTINGS_MSG[] =                  "Parametres Generaux";
static PROGMEM unsigned char RESET_MSG[] =                     "RAZ Usine          ";
static PROGMEM unsigned char NOZZLES_MSG[] =                   "Calibration Buses  ";
static PROGMEM unsigned char TOOL_COUNT_MSG[]  =               "Nb Tetes:          ";
static PROGMEM unsigned char SOUND_MSG[] =                     "Son Active         ";
static PROGMEM unsigned char LED_MSG[] =                       "Eclairage          ";
static PROGMEM unsigned char LED_HEAT_MSG[] =                  "Coul Chauffe       ";
static PROGMEM unsigned char HELP_SCREENS_MSG[] =              "Affich Aide        ";
static PROGMEM unsigned char EXIT_MSG[] =                      "Sortir du Menu     ";
static PROGMEM unsigned char ACCELERATE_MSG[]                = "Accelerer          ";
static PROGMEM unsigned char BOT_STATS_MSG[]                 = "Statistiques       ";
static PROGMEM unsigned char INFO_MSG[] 		             = "Infos et Reglages  ";

static PROGMEM unsigned char PLATFORM_EXIST_MSG[]            = "Plaque Chauffante";

static PROGMEM unsigned char RED_COLOR_MSG[]                 = "ROUGE ";
static PROGMEM unsigned char ORANGE_COLOR_MSG[]              = "ORANGE ";
static PROGMEM unsigned char PINK_COLOR_MSG[]                = "ROSE  ";
static PROGMEM unsigned char GREEN_COLOR_MSG[]               = "VERT  ";
static PROGMEM unsigned char BLUE_COLOR_MSG[]                = "BLEU  ";
static PROGMEM unsigned char PURPLE_COLOR_MSG[]              = "VIOLET";
static PROGMEM unsigned char WHITE_COLOR_MSG[]               = "BLANC ";
static PROGMEM unsigned char CUSTOM_COLOR_MSG[]              = "AUTRE ";
static PROGMEM unsigned char OFF_COLOR_MSG[]                 = "OFF   ";

static PROGMEM unsigned char TOOL_SINGLE_MSG[]               = "SIMPLE";
static PROGMEM unsigned char TOOL_DUAL_MSG[]                 = "DOUBLE";

static PROGMEM unsigned char RIGHT_MSG[]                     = "Droite";
static PROGMEM unsigned char LEFT_MSG[]                      = "Gauche";
static PROGMEM unsigned char ERROR_MSG[]                     = "Erreur";

static PROGMEM unsigned char NA_MSG[]                        = "  NA    ";
static PROGMEM unsigned char WAITING_MSG[]                   = "Attente ";

static PROGMEM unsigned char HEATER_INACTIVITY_MSG[]         = "Coupure des tetes   " "due a l'inactivite  ";
static PROGMEM unsigned char HEATER_FAIL_SOFTWARE_CUTOFF_MSG[]= "Surchauffe des tetes" "Temperature limite  " "Atteinte! Veuillez  " "Redemarrer.         ";
static PROGMEM unsigned char HEATER_FAIL_HARDWARE_CUTOFF_MSG[]= "Surchauffe des tetes" "Extinction securite " "Declenchee! Veuillez" "Redemarrer.         ";
static PROGMEM unsigned char HEATER_FAIL_NOT_HEATING_MSG[]   = "Surchauffe des tetes" "Elles ne chauffent  " "pas correctement !  " "Verif. connectiques.";
static PROGMEM unsigned char HEATER_FAIL_DROPPING_TEMP_MSG[] = "Echec du chauffage !" "La temperature des  " "tetes chute !       " "Verif. connectiques.";
static PROGMEM unsigned char HEATER_FAIL_NOT_PLUGGED_IN_MSG[]= "Erreur de chauffe ! " "Echec du releve de  " "temperature !       " "Verif. connectiques.";
static PROGMEM unsigned char HEATER_FAIL_READ_MSG[]			 = "Erreur de chauffe ! " "Temperatures au-dela" "des limites !       " "Verif. connectiques.";


static PROGMEM unsigned char TOTAL_TIME_MSG[]                = "Temps Fabrication   " "Total:             h";
static PROGMEM unsigned char LAST_TIME_MSG[]                 = "Derniere:       h  m";
static PROGMEM unsigned char BUILD_TIME_MSG[]	             = "Temps Fabric:   h  m"; 
static PROGMEM unsigned char LINE_NUMBER_MSG[]               = "Ligne               ";
static PROGMEM unsigned char BUILD_FINISHED_MSG []           = "Fabrication Terminee" "                    " "Temps passe     h  m";
                                                            
static PROGMEM unsigned char BACK_TO_MONITOR_MSG[]           = "Retour             ";
static PROGMEM unsigned char STATS_MSG[]		             = "Statistiques       ";
static PROGMEM unsigned char CANCEL_BUILD_MSG[]              = "Annuler Fabrication"; 
static PROGMEM unsigned char CHANGE_FILAMENT_MSG[]           = "Changer Filaments  "; 
                                                            
static PROGMEM unsigned char CANCEL_PLATE_MSG[]              = "Annulation en cours." "Veuillez patienter. ";
                                                            
static PROGMEM unsigned char SLEEP_MSG[]  			         = "Mise en Veille     ";
static PROGMEM unsigned char RESTART_MSG[]			         = "Redemarrer         ";
                                                            
static PROGMEM unsigned char CHANGE_FILAMENT_WAIT_MSG[]      = "Changement Filament:" "Completion d'actions" "en cours.    " ;
static PROGMEM unsigned char CHANGE_FILAMENT_PREP_MSG[]      = "Changement Filament:" "Retour a la position" "d'attente.";
static PROGMEM unsigned char SLEEP_WAIT_MSG[]                = "Mise en veille:     " "Completion d'actions" "en cours.    "  ;
static PROGMEM unsigned char SLEEP_PREP_MSG[]                = "Mise en veille:     " "Refroidissement des " "tetes, et retour en " "position d'attente. ";
static PROGMEM unsigned char RESTARTING_MSG[]                = "Relance Fabrication ";

static PROGMEM unsigned char ERROR_STREAM_INCOMPATIBLE_REP1[] = "Warning:Build speedsfaster than 50mm/s  require x3g format  for best results.   "; 
static PROGMEM unsigned char ERROR_STREAM_VERSION[] = "This is not the x3g version I work best with. For help see: makerbot.com/help   ";
static PROGMEM unsigned char ERROR_BOT_TYPE_REP1[] = "I am a Replicator.  This build is for   another bot. See:   makerbot.com/help";
static PROGMEM unsigned char ERROR_BOT_TYPE_REP2[] = "I am a Replicator 2.This build is for   another bot. See:   makerbot.com/help";
static PROGMEM unsigned char ERROR_SRAM[]                    = "UTIL MEMOIRE AU DELA" "DE LA LIMITE DE 8KO!";
static PROGMEM unsigned char ERROR_SD_CARD_REMOVED[]         = "CarteSD Retiree";
static PROGMEM unsigned char ERROR_PLATFORM_HEATING_TIMEOUT[]= "Attente trop longue " "pour chauffe de la  " "plateforme. ";
static PROGMEM unsigned char ERROR_HEATING_TIMEOUT[]         = "Attente trop longue " "pour la chauffe de  " "l'extrudeur.";
static PROGMEM unsigned char ERROR_INVALID_PLATFORM[]        = "COMMANDE INVALIDE:  " "Recu une commande   " "pour plaque chauff. " "non presente.       ";
static PROGMEM unsigned char ERROR_INVALID_TOOL[]            = "TETE INVALIDE:      " "Recu une commande   " "pour la tete 2 or il" "n'y a qu'une tete.  ";
static PROGMEM unsigned char ERROR_SD_CARD_BUILDING[]        = " En cours de fabric. ";
static PROGMEM unsigned char ERROR_SD_CARD_GENERIC[]         = " Err lecture carte ";
static PROGMEM unsigned char ERROR_SD_CARD_FILE_LENGTH[]     = " Lecture impossible:" " nom de fichier trop" " long. Essayer avec " " moins de 27 caract. ";
static PROGMEM unsigned char ERROR_TEMP_RESET_EXTERNALLY[]   = "Temperature changee " "par autre chose.    " "Reessayer de select." "le menu Filament. ";
static PROGMEM unsigned char ACTIVE_FAN_MSG[]		         = "Ventilateur         ";

// XXX REALLY UGLY HACK
// to change me, take the gcode source in s3g scripts directory of firmware/src
// change the strings inside it
// compile the gcode into s3g using replicatorg (or any kind of cli tool)
// run loadDataFile.py to get a byte array
#   define LEVEL_PLATE_DUAL static uint8_t LevelPlateDual[] PROGMEM = { 149,  0,  0,  0,  0,  84,  111,  117,  114,  110,  101,  122,  32,  108,  101,  115,  32,  52,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  115,  111,  117,  115,  32,  108,  97,  32,  112,  108,  97,  113,  117,  101,  32,  32,  32,  32,  32,  32,  0,  149,  1,  0,  0,  0,  99,  104,  97,  117,  102,  102,  97,  110,  116,  101,  32,  101,  116,  32,  115,  101,  114,  114,  101,  122,  0,  149,  7,  0,  0,  0,  100,  101,  32,  52,  32,  111,  117,  32,  53,  32,  116,  111,  117,  114,  115,  46,  0,  149,  0,  0,  0,  0,  79,  110,  32,  118,  97,  32,  97,  106,  117,  115,  116,  101,  114,  32,  108,  101,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  116,  101,  116,  101,  115,  44,  32,  106,  101,  32,  118,  97,  105,  115,  32,  100,  111,  110,  99,  32,  0,  149,  1,  0,  0,  0,  108,  101,  115,  32,  100,  101,  112,  108,  97,  99,  101,  114,  32,  100,  97,  110,  115,  32,  32,  32,  0,  149,  7,  0,  0,  0,  100,  105,  102,  102,  101,  114,  101,  110,  116,  101,  115,  32,  112,  111,  115,  105,  116,  46,  0,  149,  0,  0,  0,  0,  80,  111,  117,  114,  32,  99,  104,  97,  113,  117,  101,  32,  112,  111,  115,  105,  116,  44,  32,  32,  0,  149,  1,  0,  0,  0,  110,  111,  117,  115,  32,  97,  108,  108,  111,  110,  115,  32,  97,  106,  117,  115,  116,  101,  114,  32,  0,  149,  7,  0,  0,  0,  50,  32,  118,  105,  115,  32,  97,  32,  108,  97,  32,  102,  111,  105,  115,  46,  0,  149,  0,  0,  0,  0,  76,  101,  115,  32,  116,  101,  116,  101,  115,  32,  115,  111,  110,  116,  32,  97,  32,  108,  97,  32,  0,  149,  1,  0,  0,  0,  98,  111,  110,  110,  101,  32,  104,  97,  117,  116,  101,  117,  114,  32,  113,  117,  97,  110,  100,  32,  0,  149,  1,  0,  0,  0,  118,  111,  117,  115,  32,  112,  111,  117,  118,  101,  122,  32,  103,  108,  105,  115,  115,  101,  114,  32,  0,  149,  7,  0,  0,  0,  117,  110,  101,  32,  102,  101,  117,  105,  108,  108,  101,  0,  149,  0,  0,  0,  0,  101,  110,  116,  114,  101,  32,  108,  97,  32,  116,  101,  116,  101,  32,  101,  116,  32,  32,  32,  32,  0,  149,  1,  0,  0,  0,  108,  97,  32,  112,  108,  97,  113,  117,  101,  32,  99,  104,  97,  117,  102,  102,  97,  110,  116,  101,  0,  149,  1,  0,  0,  0,  80,  114,  101,  110,  101,  122,  32,  117,  110,  101,  32,  102,  101,  117,  105,  108,  108,  101,  32,  32,  0,  149,  7,  0,  0,  0,  112,  111,  117,  114,  32,  118,  111,  117,  115,  32,  97,  105,  100,  101,  114,  46,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  132,  3,  105,  1,  0,  0,  20,  0,  131,  4,  136,  0,  0,  0,  20,  0,  140,  0,  0,  0,  0,  0,  0,  0,  0,  48,  248,  255,  255,  0,  0,  0,  0,  0,  0,  0,  0,  142,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  87,  41,  4,  0,  24,  131,  4,  220,  5,  0,  0,  20,  0,  140,  229,  55,  0,  0,  148,  27,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  229,  55,  0,  0,  149,  27,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  17,  6,  0,  0,  201,  228,  255,  255,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  218,  223,  55,  0,  24,  142,  18,  6,  0,  0,  202,  228,  255,  255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  65,  106,  117,  115,  116,  101,  122,  32,  108,  101,  115,  32,  50,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  100,  101,  32,  100,  101,  118,  97,  110,  116,  32,  106,  117,  115,  113,  117,  39,  97,  32,  32,  32,  0,  149,  1,  0,  0,  0,  112,  111,  117,  118,  111,  105,  114,  32,  103,  108,  105,  115,  115,  101,  114,  32,  108,  97,  32,  32,  0,  149,  7,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  97,  117,  32,  109,  105,  108,  105,  101,  117,  46,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  17,  6,  0,  0,  202,  228,  255,  255,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  17,  6,  0,  0,  122,  26,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  81,  129,  40,  0,  24,  142,  18,  6,  0,  0,  122,  26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  65,  106,  117,  115,  116,  101,  122,  32,  108,  101,  115,  32,  50,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  97,  114,  114,  105,  101,  114,  101,  32,  106,  117,  115,  113,  117,  39,  97,  32,  32,  32,  32,  32,  0,  149,  1,  0,  0,  0,  112,  111,  117,  118,  111,  105,  114,  32,  103,  108,  105,  115,  115,  101,  114,  32,  108,  97,  32,  32,  0,  149,  7,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  97,  117,  32,  109,  105,  108,  105,  101,  117,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  17,  6,  0,  0,  122,  26,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  42,  39,  0,  0,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  207,  249,  31,  0,  24,  142,  42,  39,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  65,  106,  117,  115,  116,  101,  122,  32,  108,  101,  115,  32,  50,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  100,  101,  32,  100,  114,  111,  105,  116,  101,  32,  106,  117,  115,  113,  117,  39,  97,  32,  32,  32,  0,  149,  1,  0,  0,  0,  112,  111,  117,  118,  111,  105,  114,  32,  103,  108,  105,  115,  115,  101,  114,  32,  108,  97,  32,  32,  0,  149,  7,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  97,  117,  32,  109,  105,  108,  105,  101,  117,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  41,  39,  0,  0,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  249,  228,  255,  255,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  23,  240,  49,  0,  24,  142,  249,  228,  255,  255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  65,  106,  117,  115,  116,  101,  122,  32,  108,  101,  115,  32,  50,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  100,  101,  32,  103,  97,  117,  99,  104,  101,  32,  106,  117,  115,  113,  117,  39,  97,  32,  32,  32,  0,  149,  1,  0,  0,  0,  112,  111,  117,  118,  111,  105,  114,  32,  103,  108,  105,  115,  115,  101,  114,  32,  108,  97,  32,  32,  0,  149,  7,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  97,  117,  32,  109,  105,  108,  105,  101,  117,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  249,  228,  255,  255,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  17,  6,  0,  0,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  11,  248,  24,  0,  24,  142,  17,  6,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  86,  101,  114,  105,  102,  105,  101,  122,  32,  113,  117,  101,  32,  108,  97,  32,  32,  32,  32,  32,  0,  149,  1,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  103,  108,  105,  115,  115,  101,  32,  32,  32,  32,  32,  32,  0,  149,  7,  0,  0,  0,  98,  105,  101,  110,  32,  115,  111,  117,  115,  32,  108,  101,  115,  32,  116,  101,  116,  101,  115,  46,  0,  137,  31 };
#   define LEVEL_PLATE_SINGLE static uint8_t LevelPlateSingle[] PROGMEM = { 149,  0,  0,  0,  0,  84,  111,  117,  114,  110,  101,  122,  32,  108,  101,  115,  32,  52,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  115,  111,  117,  115,  32,  108,  97,  32,  112,  108,  97,  113,  117,  101,  32,  32,  32,  32,  32,  32,  0,  149,  1,  0,  0,  0,  99,  104,  97,  117,  102,  102,  97,  110,  116,  101,  32,  101,  116,  32,  115,  101,  114,  114,  101,  122,  0,  149,  7,  0,  0,  0,  100,  101,  32,  52,  32,  111,  117,  32,  53,  32,  116,  111,  117,  114,  115,  46,  0,  149,  0,  0,  0,  0,  79,  110,  32,  118,  97,  32,  97,  106,  117,  115,  116,  101,  114,  32,  108,  101,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  116,  101,  116,  101,  115,  44,  32,  106,  101,  32,  118,  97,  105,  115,  32,  100,  111,  110,  99,  32,  0,  149,  1,  0,  0,  0,  108,  101,  115,  32,  100,  101,  112,  108,  97,  99,  101,  114,  32,  100,  97,  110,  115,  32,  32,  32,  0,  149,  7,  0,  0,  0,  100,  105,  102,  102,  101,  114,  101,  110,  116,  101,  115,  32,  112,  111,  115,  105,  116,  46,  0,  149,  0,  0,  0,  0,  80,  111,  117,  114,  32,  99,  104,  97,  113,  117,  101,  32,  112,  111,  115,  105,  116,  44,  32,  32,  0,  149,  1,  0,  0,  0,  110,  111,  117,  115,  32,  97,  108,  108,  111,  110,  115,  32,  97,  106,  117,  115,  116,  101,  114,  32,  0,  149,  7,  0,  0,  0,  50,  32,  118,  105,  115,  32,  97,  32,  108,  97,  32,  102,  111,  105,  115,  46,  0,  149,  0,  0,  0,  0,  76,  101,  115,  32,  116,  101,  116,  101,  115,  32,  115,  111,  110,  116,  32,  97,  32,  108,  97,  32,  0,  149,  1,  0,  0,  0,  98,  111,  110,  110,  101,  32,  104,  97,  117,  116,  101,  117,  114,  32,  113,  117,  97,  110,  100,  32,  0,  149,  1,  0,  0,  0,  118,  111,  117,  115,  32,  112,  111,  117,  118,  101,  122,  32,  103,  108,  105,  115,  115,  101,  114,  32,  0,  149,  7,  0,  0,  0,  117,  110,  101,  32,  102,  101,  117,  105,  108,  108,  101,  0,  149,  0,  0,  0,  0,  101,  110,  116,  114,  101,  32,  108,  97,  32,  116,  101,  116,  101,  32,  101,  116,  32,  32,  32,  32,  0,  149,  1,  0,  0,  0,  108,  97,  32,  112,  108,  97,  113,  117,  101,  32,  99,  104,  97,  117,  102,  102,  97,  110,  116,  101,  0,  149,  1,  0,  0,  0,  80,  114,  101,  110,  101,  122,  32,  117,  110,  101,  32,  102,  101,  117,  105,  108,  108,  101,  32,  32,  0,  149,  7,  0,  0,  0,  112,  111,  117,  114,  32,  118,  111,  117,  115,  32,  97,  105,  100,  101,  114,  46,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  132,  3,  105,  1,  0,  0,  20,  0,  131,  4,  136,  0,  0,  0,  20,  0,  140,  0,  0,  0,  0,  0,  0,  0,  0,  48,  248,  255,  255,  0,  0,  0,  0,  0,  0,  0,  0,  142,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  87,  41,  4,  0,  24,  131,  4,  220,  5,  0,  0,  20,  0,  140,  229,  55,  0,  0,  148,  27,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  229,  55,  0,  0,  148,  27,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  0,  0,  0,  0,  202,  228,  255,  255,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  42,  13,  59,  0,  24,  142,  0,  0,  0,  0,  202,  228,  255,  255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  65,  106,  117,  115,  116,  101,  122,  32,  108,  101,  115,  32,  50,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  100,  101,  32,  100,  101,  118,  97,  110,  116,  32,  106,  117,  115,  113,  117,  39,  97,  32,  32,  32,  0,  149,  1,  0,  0,  0,  112,  111,  117,  118,  111,  105,  114,  32,  103,  108,  105,  115,  115,  101,  114,  32,  108,  97,  32,  32,  0,  149,  7,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  97,  117,  32,  109,  105,  108,  105,  101,  117,  46,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  0,  0,  0,  0,  201,  228,  255,  255,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  0,  0,  0,  0,  122,  26,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  81,  129,  40,  0,  24,  142,  0,  0,  0,  0,  122,  26,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  65,  106,  117,  115,  116,  101,  122,  32,  108,  101,  115,  32,  50,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  97,  114,  114,  105,  101,  114,  101,  32,  106,  117,  115,  113,  117,  39,  97,  32,  32,  32,  32,  32,  0,  149,  1,  0,  0,  0,  112,  111,  117,  118,  111,  105,  114,  32,  103,  108,  105,  115,  115,  101,  114,  32,  108,  97,  32,  32,  0,  149,  7,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  97,  117,  32,  109,  105,  108,  105,  101,  117,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  0,  0,  0,  0,  123,  26,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  198,  36,  0,  0,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  168,  47,  34,  0,  24,  142,  198,  36,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  65,  106,  117,  115,  116,  101,  122,  32,  108,  101,  115,  32,  50,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  100,  101,  32,  100,  114,  111,  105,  116,  101,  32,  106,  117,  115,  113,  117,  39,  97,  32,  32,  32,  0,  149,  1,  0,  0,  0,  112,  111,  117,  118,  111,  105,  114,  32,  103,  108,  105,  115,  115,  101,  114,  32,  108,  97,  32,  32,  0,  149,  7,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  97,  117,  32,  109,  105,  108,  105,  101,  117,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  198,  36,  0,  0,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  58,  219,  255,  255,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  139,  124,  55,  0,  24,  142,  58,  219,  255,  255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  65,  106,  117,  115,  116,  101,  122,  32,  108,  101,  115,  32,  50,  32,  118,  105,  115,  32,  32,  32,  0,  149,  1,  0,  0,  0,  100,  101,  32,  103,  97,  117,  99,  104,  101,  32,  106,  117,  115,  113,  117,  39,  97,  32,  32,  32,  0,  149,  1,  0,  0,  0,  112,  111,  117,  118,  111,  105,  114,  32,  103,  108,  105,  115,  115,  101,  114,  32,  108,  97,  32,  32,  0,  149,  7,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  97,  117,  32,  109,  105,  108,  105,  101,  117,  0,  149,  2,  0,  0,  0,  65,  116,  116,  101,  110,  100,  101,  122,  46,  46,  46,  0,  142,  58,  219,  255,  255,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  142,  0,  0,  0,  0,  0,  0,  0,  0,  208,  7,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  69,  190,  27,  0,  24,  142,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  154,  233,  3,  0,  24,  149,  0,  0,  0,  0,  86,  101,  114,  105,  102,  105,  101,  122,  32,  113,  117,  101,  32,  108,  97,  32,  32,  32,  32,  32,  0,  149,  1,  0,  0,  0,  102,  101,  117,  105,  108,  108,  101,  32,  103,  108,  105,  115,  115,  101,  32,  32,  32,  32,  32,  32,  0,  149,  7,  0,  0,  0,  98,  105,  101,  110,  32,  115,  111,  117,  115,  32,  108,  101,  115,  32,  116,  101,  116,  101,  115,  46,  0,  137,  31 };
#   define LEVEL_PLATE_LEN 1540
