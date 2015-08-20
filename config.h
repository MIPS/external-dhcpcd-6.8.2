/* linux */
#define SYSCONFDIR	"/system/etc/dhcpcd-6.8.2"
#define SBINDIR	"/system/etc/dhcpcd-6.8.2"
#define LIBEXECDIR	"/system/etc/dhcpcd-6.8.2"
#define DBDIR	"/data/misc/dhcp-6.8.2"
#define RUNDIR	"/data/misc/dhcp-6.8.2"
#define HAVE_EPOLL
#ifndef NBBY
#define NBBY  8
#endif
#include "compat/queue.h"
#include "compat/endian.h"

#include <signal.h>
#include <linux/rtnetlink.h>
