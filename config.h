/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0xff;     /* Amount of opacity. 0xff is opaque             */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[]          = {
	//"Cascadia Code:style=regular:pixelsize=18:antialias=true:autohint=true",
	"Cascadia Code:style=SemiLight:size=12:antialias=true:autohint=true",
	//"Terminus:size=14:antialias=true:autohint=true",
	/* "Cascadia Code PL:style=Regular:size=11:antialias=true:autohint=true", */
	/* "Misc Tamsyn:style=Regular:pixelsize=15", */
	"Noto Emoji:size=11",
	"monospace:size=8"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

/* static const char col_black[]       = "#282828"; */
static const char col_black[]       = "#32302f";
/* static const char col_white[]       = "#d7d7d7"; */

/* static const char col_black[]       = "#32302f"; */
/* static const char col_white[]       = "#d7d7d7"; */
/* static const char col_white[]       = "#f1f1f1"; */
static const char col_white[]       = "#ebdbb2";
/* static const char col_orange[]      = "#fabd2f"; */

static const char col_gray[]       = "#928374";
static const char col_red[]        = "#cc241d";
static const char col_green[]      = "#b8bb26";
static const char col_yellow[]     = "#fabd2f";
static const char col_blue[]       = "#83a598";
static const char col_purple[]     = "#d3869b";
static const char col_aqua[]       = "#8ec07c";
static const char col_orange[]     = "#fe8019";


static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { col_yellow, col_black },
	[SchemeSel] = { col_black, col_white },
	[SchemeOut] = { col_white, col_black },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 15;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 3;
