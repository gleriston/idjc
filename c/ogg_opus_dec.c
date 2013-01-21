/*
#   ogg_opus_dec.c: opus decoder for oggdec.c
#   Copyright (C) 2012 Stephen Fairchild (s-fairchild@users.sourceforge.net)
#
#   This program is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 2 of the License, or
#   (at your option) any later version.
#
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with this program in the file entitled COPYING.
#   If not, see <http://www.gnu.org/licenses/>.
*/

#include "../config.h"

#ifdef HAVE_OPUS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "oggdec.h"
#include "ogg_opus_dec.h"

#define ACCEPTED 1
#define REJECTED 0
#define TRUE 1
#define FALSE 0

int ogg_opusdec_init(struct xlplayer *xlplayer)
    {
    fprintf(stderr, "##### rejecting\n");
        
        
    return REJECTED;
    }

#endif /* HAVE_OPUS */