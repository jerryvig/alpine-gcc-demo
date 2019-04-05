FROM alpine:3.9.2

RUN apk add gcc
RUN apk add g++

COPY . /usr/src/app
WORKDIR /usr/src/app

RUN gcc src/test-proc.c -o test-proc -Wall -Wextra -pedantic

CMD ["/usr/src/app/test-proc", "3377"]
