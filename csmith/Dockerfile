FROM ubuntu:latest

RUN apt-get update
RUN apt-get install -y cmake make gcc g++ m4 vim wget

WORKDIR /root
RUN wget https://embed.cs.utah.edu/csmith/csmith-2.3.0.tar.gz
RUN tar -xzvf csmith-2.3.0.tar.gz; rm csmith-2.3.0.tar.gz

RUN cd csmith-2.3.0; cmake .; make -j; make install

CMD ["csmith"]
