/********************************************************************************
	RCP_HmsEffectDust
														[ June 16, 1995 ]
 ********************************************************************************/


extern Gfx RCP_dust1[];
extern Gfx RCP_dust2[];
extern Gfx RCP_dust3[];
extern Gfx RCP_dust4[];
extern Gfx RCP_dust5[];
extern Gfx RCP_dust6[];
extern Gfx RCP_dust7[];


/********************************************************************************/
/*	Hierarchy map data.															*/
/********************************************************************************/

const GeoLayout smoke_geo[] = {
	GEO_SWITCH_CASE(7, geo_switch_anim_state),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_dust1),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_dust2),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_dust3),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_dust4),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_dust5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_dust6),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, RCP_dust7),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
