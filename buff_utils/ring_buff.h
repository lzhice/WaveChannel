/*
#
# Copyright 2018, sohu ipc
# author: ChenFawang
# main.cc
# 2018-01-26
# mail: fawangchen@sohu-inc.com
*/
#ifndef __RING_BUFF_H__
#define __RING_BUFF_H__

typedef void RingBuffFd;


RingBuffFd *RingBuffCreate(int byte_len);

void RingBuffDestroy(RingBuffFd *fd);

int RingBuffWriteData(RingBuffFd *fd,const void *data, int len);

int RingBuffReadData(RingBuffFd *fd, void *data, int len);



#endif
