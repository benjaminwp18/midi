4d 54 68 64	Chunk type: "MThd"

# Reading header chunk
00 00 00 06	Chunk length: 6
00 01      	Format: 1 (multi track)
00 02      	Num tracks: 2
01 e0      	Delta format: 480 ticks/quarter note


4d 54 72 6b	Chunk type: "MTrk"

# Reading track chunk
00 00 00 ae	Chunk length: 174
00         	Delta time: 0
ff 03      	Meta event (sequence/track name)
0f         	Meta event contents length: 15
54 68 65 20 52 75 73 74 79 20 57 68 65 65 6c	(Contents as text: "The Rusty Wheel")
00         	Delta time: 0
ff 02      	Meta event (copyright notice)
09         	Meta event contents length: 9
42 2e 20 50 6f 75 6c 69 6e	(Contents as text: "B. Poulin")
00         	Delta time: 0
ff 59      	Meta event (key signature)
02         	Meta event contents length: 2
01 00      	(Contents as text: "")
00         	Delta time: 0
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
04 03 18 08	(Contents as text: "")
00         	Delta time: 0
ff 51      	Meta event (set tempo)
03         	Meta event contents length: 3
04 e2 00   	(Tempo: 320000 us/quarter)
87 40      	Delta time: 960
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
06 03 18 08	(Contents as text: "")
8b 20      	Delta time: 1440
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
06 03 18 08	(Contents as text: "")
c3 40      	Delta time: 8640
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
02 03 18 08	(Contents as text: "")
83 60      	Delta time: 480
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
04 03 18 08	(Contents as text: "")
87 40      	Delta time: 960
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
06 03 18 08	(Contents as text: "")
8b 20      	Delta time: 1440
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
06 03 18 08	(Contents as text: "")
c3 40      	Delta time: 8640
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
02 03 18 08	(Contents as text: "")
83 60      	Delta time: 480
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
04 03 18 08	(Contents as text: "")
87 40      	Delta time: 960
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
06 03 18 08	(Contents as text: "")
da 00      	Delta time: 11520
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
02 03 18 08	(Contents as text: "")
83 60      	Delta time: 480
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
04 03 18 08	(Contents as text: "")
87 40      	Delta time: 960
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
06 03 18 08	(Contents as text: "")
da 00      	Delta time: 11520
ff 58      	Meta event (time signature)
04         	Meta event contents length: 4
02 03 18 08	(Contents as text: "")
00         	Delta time: 0
ff 2f      	Meta event (end of track)
00         	Meta event contents length: 0
            	(Contents as text: "")
End of track


4d 54 72 6b	Chunk type: "MTrk"

# Reading track chunk
00 00 06 9b	Chunk length: 1691
00         	Delta time: 0
c0 00      	MIDI message with 1 data byte (unimplemented)
00         	Delta time: 0
90->3b 5f	Note on: C0 N59 V95
83 30      	Delta time: 432
80->3b 00	Note off: C0 N59 V0
30         	Delta time: 48
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
83 30      	Delta time: 432
80->36 00	Note off: C0 N54 V0
30         	Delta time: 48
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->2f 5f	Note on: C0 N47 V95
81 58      	Delta time: 216
80->2f 00	Note off: C0 N47 V0
18         	Delta time: 24
90->31 5f	Note on: C0 N49 V95
81 58      	Delta time: 216
80->31 00	Note off: C0 N49 V0
18         	Delta time: 24
90->33 5f	Note on: C0 N51 V95
81 58      	Delta time: 216
80->33 00	Note off: C0 N51 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
83 30      	Delta time: 432
80->34 00	Note off: C0 N52 V0
30         	Delta time: 48
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
83 30      	Delta time: 432
80->36 00	Note off: C0 N54 V0
30         	Delta time: 48
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->33 5f	Note on: C0 N51 V95
81 58      	Delta time: 216
80->33 00	Note off: C0 N51 V0
18         	Delta time: 24
90->2f 5f	Note on: C0 N47 V95
81 58      	Delta time: 216
80->2f 00	Note off: C0 N47 V0
18         	Delta time: 24
90->31 5f	Note on: C0 N49 V95
81 58      	Delta time: 216
80->31 00	Note off: C0 N49 V0
18         	Delta time: 24
90->33 5f	Note on: C0 N51 V95
81 58      	Delta time: 216
80->33 00	Note off: C0 N51 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
83 60      	Delta time: 480
80->34 00	Note off: C0 N52 V0
00         	Delta time: 0
90->3b 5f	Note on: C0 N59 V95
83 30      	Delta time: 432
80->3b 00	Note off: C0 N59 V0
30         	Delta time: 48
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
83 30      	Delta time: 432
80->36 00	Note off: C0 N54 V0
30         	Delta time: 48
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->2f 5f	Note on: C0 N47 V95
81 58      	Delta time: 216
80->2f 00	Note off: C0 N47 V0
18         	Delta time: 24
90->31 5f	Note on: C0 N49 V95
81 58      	Delta time: 216
80->31 00	Note off: C0 N49 V0
18         	Delta time: 24
90->33 5f	Note on: C0 N51 V95
81 58      	Delta time: 216
80->33 00	Note off: C0 N51 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
83 30      	Delta time: 432
80->34 00	Note off: C0 N52 V0
30         	Delta time: 48
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
83 30      	Delta time: 432
80->36 00	Note off: C0 N54 V0
30         	Delta time: 48
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->33 5f	Note on: C0 N51 V95
81 58      	Delta time: 216
80->33 00	Note off: C0 N51 V0
18         	Delta time: 24
90->2f 5f	Note on: C0 N47 V95
81 58      	Delta time: 216
80->2f 00	Note off: C0 N47 V0
18         	Delta time: 24
90->31 5f	Note on: C0 N49 V95
81 58      	Delta time: 216
80->31 00	Note off: C0 N49 V0
18         	Delta time: 24
90->33 5f	Note on: C0 N51 V95
81 58      	Delta time: 216
80->33 00	Note off: C0 N51 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
85 08      	Delta time: 648
80->34 00	Note off: C0 N52 V0
48         	Delta time: 72
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
83 30      	Delta time: 432
80->37 00	Note off: C0 N55 V0
30         	Delta time: 48
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3c 5f	Note on: C0 N60 V95
81 58      	Delta time: 216
80->3c 00	Note off: C0 N60 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
83 30      	Delta time: 432
80->37 00	Note off: C0 N55 V0
30         	Delta time: 48
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->33 5f	Note on: C0 N51 V95
81 58      	Delta time: 216
80->33 00	Note off: C0 N51 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->30 5f	Note on: C0 N48 V95
81 58      	Delta time: 216
80->30 00	Note off: C0 N48 V0
18         	Delta time: 24
90->2f 5f	Note on: C0 N47 V95
81 58      	Delta time: 216
80->2f 00	Note off: C0 N47 V0
18         	Delta time: 24
90->30 5f	Note on: C0 N48 V95
81 58      	Delta time: 216
80->30 00	Note off: C0 N48 V0
18         	Delta time: 24
90->2f 5f	Note on: C0 N47 V95
81 58      	Delta time: 216
80->2f 00	Note off: C0 N47 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
83 30      	Delta time: 432
80->34 00	Note off: C0 N52 V0
30         	Delta time: 48
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
83 30      	Delta time: 432
80->37 00	Note off: C0 N55 V0
30         	Delta time: 48
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3c 5f	Note on: C0 N60 V95
81 58      	Delta time: 216
80->3c 00	Note off: C0 N60 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
83 30      	Delta time: 432
80->37 00	Note off: C0 N55 V0
30         	Delta time: 48
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->3b 5f	Note on: C0 N59 V95
81 58      	Delta time: 216
80->3b 00	Note off: C0 N59 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->39 5f	Note on: C0 N57 V95
81 58      	Delta time: 216
80->39 00	Note off: C0 N57 V0
18         	Delta time: 24
90->37 5f	Note on: C0 N55 V95
81 58      	Delta time: 216
80->37 00	Note off: C0 N55 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->33 5f	Note on: C0 N51 V95
81 58      	Delta time: 216
80->33 00	Note off: C0 N51 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->36 5f	Note on: C0 N54 V95
81 58      	Delta time: 216
80->36 00	Note off: C0 N54 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
81 58      	Delta time: 216
80->34 00	Note off: C0 N52 V0
18         	Delta time: 24
90->32 5f	Note on: C0 N50 V95
81 58      	Delta time: 216
80->32 00	Note off: C0 N50 V0
18         	Delta time: 24
90->30 5f	Note on: C0 N48 V95
81 58      	Delta time: 216
80->30 00	Note off: C0 N48 V0
18         	Delta time: 24
90->2f 5f	Note on: C0 N47 V95
81 58      	Delta time: 216
80->2f 00	Note off: C0 N47 V0
18         	Delta time: 24
90->30 5f	Note on: C0 N48 V95
81 58      	Delta time: 216
80->30 00	Note off: C0 N48 V0
18         	Delta time: 24
90->2f 5f	Note on: C0 N47 V95
81 58      	Delta time: 216
80->2f 00	Note off: C0 N47 V0
18         	Delta time: 24
90->34 5f	Note on: C0 N52 V95
83 30      	Delta time: 432
80->34 00	Note off: C0 N52 V0
83 60      	Delta time: 480
ff 2f      	Meta event (end of track)
00         	Meta event contents length: 0
            	(Contents as text: "")
End of track
