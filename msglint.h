int msglint_parsemessage(const char *msg, int len);

void msglint_initialize();

void msglint_setup(int verbose, int quiet, int silent, int mime_msg,
                   int show_md5, int web_cgi, int do_sendmail,
                   char *from_addr, FILE *outfile);
