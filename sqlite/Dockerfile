FROM ubuntu:latest

RUN apt-get update
RUN apt-get install -y tcl-dev tcl make gcc wget unzip libz-dev vim

RUN useradd -ms /bin/bash sqlite
RUN chown -R sqlite:sqlite /home/sqlite
USER sqlite
ENV HOME /home/sqlite

RUN cd && wget -O sqlite.zip https://www.sqlite.org/src/zip/sqlite.zip?r=release && unzip sqlite.zip && rm sqlite.zip
WORKDIR /home/sqlite/sqlite
RUN ./configure && make -j2
