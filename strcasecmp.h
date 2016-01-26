/* header file for strcasecmp() and strncasecmp()
 */

#ifdef	_WIN32
#  define	strcasecmp stricmp
#  define	strncasecmp strnicmp
#endif

/* systems without strcasecmp: */
#if defined(__MWERKS__)
#define NEED_STRCASECMP 1
extern int strcasecmp(const char *, const char *);
extern int strncasecmp(const char *, const char *, size_t);
#endif
