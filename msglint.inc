[external, unbound]
function msglint_parsemessage (
  %immed msg : char_array_ptr;
  %immed len : integer) : integer; external;

[external, unbound]
procedure msglint_initialize; external;

[external, unbound]
procedure msglint_setup (
  %immed verbose : integer := %immed 0;
  %immed quiet : integer := %immed 0;
  %immed silent : integer := %immed 0;
  %immed mime_msg : integer := %immed 0;
  %immed show_md5 : integer := %immed 0;
  %immed web_cgi : integer := %immed 0;
  %immed do_sendmail : integer := %immed 0;
  %ref from_addr : packed array [l1..u1 : integer] of char := %immed 0;
  %immed outfile : integer_address := %immed 0); external;
