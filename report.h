/* This file is a part of groinc
 * 
 * Copyright (C) 2006, 2007 Sarzyniec Luc <olbat@xiato.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * see the COPYING file for more informations */

#ifndef _REPORT_H
#define _REPORT_H

#include "network/my_types.h"

struct linked_list_rpt_value
{
	void (*func_rpt)(__u8 *,long int,long int,long int);
	__u8 *val;
};

void report(long int id_dl, long int id_nl, long int id_tl);
void rpt_countpacketstot(__u8 *val,long int id_dl, long int id_nl, long int id_tl);
void rpt_countpacketsfiltred(__u8 *val, long int id_dl, long int id_nl, long int id_tl);

#endif
