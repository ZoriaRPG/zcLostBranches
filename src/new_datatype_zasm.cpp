//Graphics->Colors[]
GFXCOLOURS

//drop an item: CreateDrop(int x, int y, int z)
CREATEDROP:
	
//item_drop_sets[MAXITEMDROPSETS];
DROPDATANAME	//CHAR[64]
DROPDATAITEM	//W, 10 INDICES
DROPDATACHANCE	//W, 11 INDICES

//miscQdata
QUESTTRIFORCE		//C, 8 INDICES
QUESTENDSTRING		//W, STRING EDITOR VALUE
QUESTICON		//W, 4 INDICES

//warpring
WARPRINGNAME 	//CHAR[32]
WARPRINGDMAP	//W, 9 INDICES
WARPRINGSCREEN	//W, 9 INDICES
WARPRINGSIZE	//C

//ZCHEATS
CHEATFLAGS	//W
CHEATCODELV1	//CHAR[41], LET'S USE A DIRECT STRING?
CHEATCODELV2	//CHAR[41], LET'S USE A DIRECT STRING?
CHEATCODELV3	//CHAR[41], LET'S USE A DIRECT STRING?
CHEATCODELV4	//CHAR[41], LET'S USE A DIRECT STRING?
	
PALCYCLEFIRST	//C
PALCYCLECOUNT	//C
PALCYCLESPEED	//C

ZCTUNETITLE	//CHAR[36]
ZCTUNESTART	//LONG
ZCTUNELOOPSTART	//LONG
ZCTUNELOOPEND	//LONG
ZCTUNELOOP	//SHORT
ZCTUNEVOLUME	//SHORT
ZCTUNEFLAGS	//C
ZCTUNEFORMAT	//C --READ ONLY IS PROBABLY BEST

GAMEQUESTVERSION	//CHAR[9]
GAMEQUESTTITLE		//CHAR[65]

//zcolors --these should all be palette indices, not raw RGB data
ZCOLOURTEXT	//C
ZCOLOURCAPTION	//C
ZCOLOUROVERWORLDBG	//C
ZCOLOURDUNGEONBG	//C
ZCOLOURDUNGEONFG	//C
ZCOLOURCAVEFG		//C
ZCOLOURBSDARK		//C
ZCOLOURBSGOAL		//C
ZCOLOURCOMPASSLIGHT	//C
ZCOLOURCOMPASSDARK	//C
ZCOLOURSUBSCREENBG	//C
ZCOLOURSUBSCREENSHADOW	//C
ZCOLOURTRIFRAME		//C
ZCOLOURBIGMAPBG		//C
ZCOLOURBIGMAPFG		//C
ZCOLOURLINKDOT		//C
ZCOLOURTRIFORCECSET	//C
ZCOLOURTRIFRAMECSET	//C
ZCOLOUROVERWORLDMAPCSET	//C
ZCOLOURDUNGEONMAPCSET	//C
ZCOLOURBLUEFRAMECSET	//C
ZCOLOURTRIFORCETILE	//W
ZCOLOURTRIFRAMETILE	//W
ZCOLOUROVERWORLDMAPTILE	//W
ZCOLOURDUNGEONMAPTILE	//W
ZCOLOURBLUEFRAMETILE	//W
ZCOLOURHCPIECETILE	//W
ZCOLOURHCPIECECSET	//C
ZCOLOURMSGTEXT		//C
ZCOLOURFOO		//C, 6 INDICES
ZCOLOURFOO2		//C, 256 INDICES