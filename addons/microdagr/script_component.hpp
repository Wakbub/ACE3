#define COMPONENT microdagr
#include "\z\ace\addons\main\script_mod.hpp"

#ifdef DEBUG_ENABLED_MICRODAGR
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MICRODAGR
    #define DEBUG_SETTINGS DEBUG_SETTINGS_MICRODAGR
#endif

#include "\z\ace\addons\main\script_macros.hpp"

#define DUMMY_POS [-1,-1]
#define DUMMY_ZOOM 0.1

#define APP_MODE_NULL -1
#define APP_MODE_INFODISPLAY 0
#define APP_MODE_COMPASS 1
#define APP_MODE_MAP 2
#define APP_MODE_MENU 3
#define APP_MODE_MARK 4
#define APP_MODE_WAYPOINTS 5
#define APP_MODE_SETUP 6

#define DISPLAY_MODE_CLOSED 0
#define DISPLAY_MODE_DISPLAY 1
#define DISPLAY_MODE_DIALOG 2

#define IDC_RANGEFINDERCONNECTEDICON 77700
#define IDC_CLOCKTEXT 77701
#define IDC_MAPPLAIN 77702
#define IDC_MAPDETAILS 77703
#define IDC_MAPCOMPASS 77704

#define IDC_MODEDISPLAY 144000
#define IDC_MODEDISPLAY_UTMGRID 144001
#define IDC_MODEDISPLAY_EASTING 144002
#define IDC_MODEDISPLAY_NORTHING 144003
#define IDC_MODEDISPLAY_ELEVATIONNUM 144004
#define IDC_MODEDISPLAY_HEADINGNUM 144005
#define IDC_MODEDISPLAY_SPEEDNUM 144006
#define IDC_MODEDISPLAY_MODEPOSTIMECG 144010
#define IDC_MODEDISPLAY_TIMEDISPLAYGREEN1 144011
#define IDC_MODEDISPLAY_TIMEDISPLAYGREEN2 144012
#define IDC_MODEDISPLAY_MODEPOSTARGETCG 144020
#define IDC_MODEDISPLAY_TARGETICON 144021
#define IDC_MODEDISPLAY_TRACKNUM 144022
#define IDC_MODEDISPLAY_TARGETRANGENUM 144023
#define IDC_MODEDISPLAY_TARGETELEVATIONNUM 144024
#define IDC_MODEDISPLAY_TARGETNAME 144025

#define IDC_MODECOMPASS 144100
#define IDC_MODECOMPASS_HEADING 144110
#define IDC_MODECOMPASS_SPEED 144111
#define IDC_MODECOMPASS_BEARING 144112
#define IDC_MODECOMPASS_RANGE 144113
#define IDC_MODECOMPASS_TARGET 144114

#define IDC_MODEMAP_MAPTRACKBUTTON 144211
#define IDC_MODEMAP_MAPZOOMIN 144212
#define IDC_MODEMAP_MAPZOOMOUT 144213

#define IDC_MODEMENU 144300

#define IDC_MODEMARK 144400
#define IDC_MODEMARK_HEADER 144411
#define IDC_MODEMARK_CORDSEDIT 144412

#define IDC_MODEWAYPOINTS 144500
#define IDC_MODEWAYPOINTS_LISTOFWAYPOINTS 144501

#define IDC_BUTTONBG0 77710
#define IDC_BUTTONBG1 77711
#define IDC_BUTTONBG2 77712
#define IDC_MICRODAGRSHELL 77713
