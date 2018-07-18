FROM ubuntu:latest

RUN apt-get update && apt-get install -y apt-transport-https ca-certificates

RUN sed -i.bak 's/:\/\/archive.ubuntu.com/s:\/\/mirrors.tuna.tsinghua.edu.cn/g' /etc/apt/sources.list
RUN sed -i.bak 's/:\/\/security.ubuntu.com/s:\/\/mirrors.tuna.tsinghua.edu.cn/g' /etc/apt/sources.list
