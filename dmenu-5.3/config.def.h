/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar                  = 1;         /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha    = 0xff;      /* Amount of opacity. 0xff is opaque             */
static unsigned int lines          = 8;  	/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lineheight     = 40; 	/* -h option; minimum height of a menu line */
static unsigned int min_lineheight = 8;         /* Minimum line height */
static unsigned int border_width   = 0; 	/* Size of the window border */
static int colorprompt 		   = 0;         /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static char *prompt      	   = NULL;      /* -p  option; prompt to the left of input field */

static const char *fonts[] = {   		/* -fn option overrides fonts[0]; default X11 font or font set */
	"Iosevka:style:medium:size=12",
	"NotoColorEmoji:pixelsize=8:antialias=true:autohint=true",
};

static char normfgcolor[] = "#bbbbbb";
static char normbgcolor[] = "#222222";
static char selfgcolor[]  = "#eeeeee";
static char selbgcolor[]  = "#005577";
static char *colors[SchemeLast][2] = {
       /*               fg           bg          */
       [SchemeNorm] = { normfgcolor, normbgcolor },
       [SchemeSel]  = { selfgcolor,  selbgcolor  },
       [SchemeOut]  = { "#000000",   "#00ffff" },
};

/* opacity management */ 
static const unsigned int alphas[SchemeLast][2] = {
	/*               fg      bg          */
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel]  = { OPAQUE, alpha },
	[SchemeOut]  = { OPAQUE, alpha },
};


/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/*
 * Xresources preferences to load at startup
*/
ResourcePref resources[] = {
       { "foreground",  STRING, &normfgcolor },
       { "background",  STRING, &normbgcolor },
       { "background",  STRING, &selfgcolor  },
       { "color1",      STRING, &selbgcolor  },
       { "prompt",      STRING, &prompt      },
};
