#
# makefile for msglint
#
OBJS=msglint.o imaildate.o md5c.o
CFLAGS=-g

msglint: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm -f $(OBJS) msglint

install: msglint
	mv msglint /service/webserver/cgi-bin/webmsglint

unknown: msglint
	./msglint *.msg | grep "unknown header" | sed -e "s/^[^']*'//" -e "s/'.*//" | sort | uniq
