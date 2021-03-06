#ifndef CFLAGS_H
#define CFLAGS_H

#define C_CHDIR      0x00000001
#define C_CHROOT     0x00000002
#define C_CREATEFILE 0x00000004
#define C_CREATEDIR  0x00000008 
#define C_EXEC       0x00000010
#define C_LOOKUP     0x00000020
#define C_CONTENT    0x00000040
#define C_ADDLNK     0x00000100
#define C_MAKELNK    0x00000200
#define C_UNLINKFILE 0x00000400
#define C_UNLINKDIR  0x00000800
#define C_READ       0x00001000
#define C_WRITE      0x00002000
#define C_APPEND     0x00004000
#define C_CHMODE     0x00010000
#define C_CHOWN      0x00020000
#define C_CHFLAGS    0x00040000
#define C_CHTIMES    0x00080000
#define C_STAT       0x00100000
#define C_READLINK   0x00200000
#define C_ADDSYMLNK  0x00400000
#define C_UNLINK     0x01000000
#define C_RDEXTATTR  0x02000000
#define C_WREXTATTR  0x04000000
#define C_UNLINKSYM  0x08000000
#define C_MASKS      0x80808080

#endif /* CFLAGS_H */
