FROM ubuntu:14.04

RUN apt-get update
RUN apt-get install -y wget patch gcc make

WORKDIR /root
RUN wget https://ftp.gnu.org/gnu/coreutils/coreutils-6.10.tar.gz && tar -xzf coreutils-6.10.tar.gz && rm coreutils-6.10.tar.gz
RUN cd coreutils-6.10 && wget http://web.cs.ucla.edu/classes/winter16/cs35L/assign/coreutils.diff && patch -p0 < coreutils.diff; ./configure && make -j2

COPY gen.c /root/
RUN gcc gen.c && ./a.out && rm gen.c a.out

RUN apt-get install -y vim
