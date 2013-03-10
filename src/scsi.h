/* --------------------------------------------------------------------------

   MusicBrainz -- The Internet music metadatabase

   Copyright (C) 2013 Johannes Dewender
   
   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
   
   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA

----------------------------------------------------------------------------*/

/* 
 * Send a scsi command to a file descriptor (fd) and receive data.
 */
int scsi_cmd_unportable(int fd, unsigned char *cmd, int cmd_len,
			unsigned char *data, int data_len);

/* 
 * read an ISRC using the READ SUB-CHANNEL command (0x42)
 */
void read_track_isrc(int fd, mb_disc_private *disc, int track_num);

/* 
 * parsing the sub-channel and an ISRC using the READ command (0xbe)
 */
void read_track_isrc_raw(int fd, mb_disc_private *disc, int track_num);
