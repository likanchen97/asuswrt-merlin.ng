/*
 * netlink/route/sch/nssfifo.c	NSSFIFO Qdisc
 */
/*
 **************************************************************************
 * Copyright (c) 2015, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 **************************************************************************
 */

#ifndef NETLINK_NSSFIFO_H_
#define NETLINK_NSSFIFO_H_

#include <netlink/netlink.h>
#include <netlink/route/qdisc.h>

#ifdef __cplusplus
extern "C" {
#endif

extern int	rtnl_nssfifo_set_limit(struct rtnl_qdisc *, uint32_t);
extern uint32_t	rtnl_nssfifo_get_limit(struct rtnl_qdisc *);

extern int	rtnl_nssfifo_set_default(struct rtnl_qdisc *, uint8_t);
extern uint8_t	rtnl_nssfifo_get_default(struct rtnl_qdisc *);

#ifdef __cplusplus
}
#endif

#endif
