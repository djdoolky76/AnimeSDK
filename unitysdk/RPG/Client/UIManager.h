#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoadingStyle.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/Client/UIManager_ClearReason.h"
#include "unitysdk/RPG/Client/UIManager__PauseResolve.h"
#include "unitysdk/RPG/GameCore/CustomScreenTransferType.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
#include "unitysdk/RPG/GameCore/UIAudioStage.h"
#include "unitysdk/System/Object.h"
class AJEKOLJDHAK;
class CGPLPLEELDM;
class DHPKOGKPFNE;
class FBKGNHKJOPJ;
class IDCFNANLPDK;
class JDFPIPINHPH;
class KNKPLOGICFO;
class LPBGLLGGGDN;
namespace RPG::Client { class AboveSwitchDialog; }
namespace RPG::Client { class CartoonTransfer_Config; }
namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RspHandler; }
namespace RPG::Client { class ScreenClickEffect; }
namespace RPG::Client { class UI3DLinkRegistry; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIManager; }
namespace RPG::Client { class UITransitionManager; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class PlayScreenTransfer; }
namespace Sofa { class BaseSofaWindow_SofaUIController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIMANAGER_ADDSCREENTRANSFEREXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x17589710)
#define RPG_CLIENT_UIMANAGER_ADDTICK_OFFSET UNITYSDK_OFFSET(0x17593CD0)
#define RPG_CLIENT_UIMANAGER_ADDUI3DTICK_OFFSET UNITYSDK_OFFSET(0x1758B0D0)
#define RPG_CLIENT_UIMANAGER_BACKTOFIRSTPAGE_OFFSET UNITYSDK_OFFSET(0x1758F0B0)
#define RPG_CLIENT_UIMANAGER_BACKTOPAGE_OFFSET UNITYSDK_OFFSET(0x1758F390)
#define RPG_CLIENT_UIMANAGER_BEGINSHOWGROUP_OFFSET UNITYSDK_OFFSET(0x1758DF60)
#define RPG_CLIENT_UIMANAGER_BLOCKFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x17587740)
#define RPG_CLIENT_UIMANAGER_BLOCKFOREVERTIME_OFFSET UNITYSDK_OFFSET(0x17587800)
#define RPG_CLIENT_UIMANAGER_BLOCKWAITNETPACKET_OFFSET UNITYSDK_OFFSET(0x17587950)
#define RPG_CLIENT_UIMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x175959E0)
#define RPG_CLIENT_UIMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET UNITYSDK_OFFSET(0x17594BB0)
#define RPG_CLIENT_UIMANAGER_CLEARALLFULLSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x17589E80)
#define RPG_CLIENT_UIMANAGER_CLEARFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0x17587BC0)
#define RPG_CLIENT_UIMANAGER_CLEARUI2DSTACK_OFFSET UNITYSDK_OFFSET(0x1758E6B0)
#define RPG_CLIENT_UIMANAGER_CLEARUI3DSTACK_OFFSET UNITYSDK_OFFSET(0x1758AF90)
#define RPG_CLIENT_UIMANAGER_CLEARUISTACK_OFFSET UNITYSDK_OFFSET(0x1758D970)
#define RPG_CLIENT_UIMANAGER_CLEARVIEWCACHE_OFFSET UNITYSDK_OFFSET(0x1758DD90)
#define RPG_CLIENT_UIMANAGER_CLEARWAITNETPACKETFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0x17587CC0)
#define RPG_CLIENT_UIMANAGER_CLOSEBELOWTRANSFER_OFFSET UNITYSDK_OFFSET(0x175896A0)
#define RPG_CLIENT_UIMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x1758A170)
#define RPG_CLIENT_UIMANAGER_CLOSESCREENTRANSFERDIALOG_OFFSET UNITYSDK_OFFSET(0x17589260)
#define RPG_CLIENT_UIMANAGER_CONTROLLERWILLAPPEAR_OFFSET UNITYSDK_OFFSET(0x1758FC30)
#define RPG_CLIENT_UIMANAGER_CONTROLLERWILLDESTROY_OFFSET UNITYSDK_OFFSET(0x1758FD90)
#define RPG_CLIENT_UIMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1758C730)
#define RPG_CLIENT_UIMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1758D740)
#define RPG_CLIENT_UIMANAGER_ENABLEFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0x17587C40)
#define RPG_CLIENT_UIMANAGER_ENDSHOWGROUP_OFFSET UNITYSDK_OFFSET(0x1758E180)
#define RPG_CLIENT_UIMANAGER_EXITABOVEDIALOG_OFFSET UNITYSDK_OFFSET(0x17592410)
#define RPG_CLIENT_UIMANAGER_EXITABOVEPAGE_OFFSET UNITYSDK_OFFSET(0x175923C0)
#define RPG_CLIENT_UIMANAGER_EXITBELOWPAGE_OFFSET UNITYSDK_OFFSET(0x17592330)
#define RPG_CLIENT_UIMANAGER_EXITUI3D_OFFSET UNITYSDK_OFFSET(0x1758A7B0)
#define RPG_CLIENT_UIMANAGER_GETABOVEDIALOGBYNAME_OFFSET UNITYSDK_OFFSET(0x17593E00)
#define RPG_CLIENT_UIMANAGER_GETALLPAGENAMES_OFFSET UNITYSDK_OFFSET(0x1758FF50)
#define RPG_CLIENT_UIMANAGER_GETCACHE_OFFSET UNITYSDK_OFFSET(0x1758E2D0)
#define RPG_CLIENT_UIMANAGER_GETDIALOGBYDIALOGNAME_OFFSET UNITYSDK_OFFSET(0x17592EC0)
#define RPG_CLIENT_UIMANAGER_GETDIALOGBYNAME_OFFSET UNITYSDK_OFFSET(0x17592BD0)
#define RPG_CLIENT_UIMANAGER_GETLAYERROOT_OFFSET UNITYSDK_OFFSET(0x17593FD0)
#define RPG_CLIENT_UIMANAGER_GETMISSIONFULLSCREENTRANSFERSEQID_OFFSET UNITYSDK_OFFSET(0x1758A3F0)
#define RPG_CLIENT_UIMANAGER_GETPAGEBYNAME_OFFSET UNITYSDK_OFFSET(0x17592A00)
#define RPG_CLIENT_UIMANAGER_GETPAGEBYROOTNAME_OFFSET UNITYSDK_OFFSET(0x175930C0)
#define RPG_CLIENT_UIMANAGER_GETSECONDTOPUI3D_OFFSET UNITYSDK_OFFSET(0x1758A4C0)
#define RPG_CLIENT_UIMANAGER_GETSOFAUI3DROOT_OFFSET UNITYSDK_OFFSET(0x1758B090)
#define RPG_CLIENT_UIMANAGER_GETTOPPAGEORDIALOGINSET_OFFSET UNITYSDK_OFFSET(0x17593210)
#define RPG_CLIENT_UIMANAGER_GETTOPUI3D_OFFSET UNITYSDK_OFFSET(0x1758A460)
#define RPG_CLIENT_UIMANAGER_GETTRANSITIONMANAGER_OFFSET UNITYSDK_OFFSET(0x17594DB0)
#define RPG_CLIENT_UIMANAGER_GETUI3DSTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x1758A520)
#define RPG_CLIENT_UIMANAGER_GETVIEWCACHE_OFFSET UNITYSDK_OFFSET(0x1758DB30)
#define RPG_CLIENT_UIMANAGER_GET_BINDINGRESOLVER_OFFSET UNITYSDK_OFFSET(0x1758A450)
#define RPG_CLIENT_UIMANAGER_GET_FOCUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17595890)
#define RPG_CLIENT_UIMANAGER_GET_FORBIDTASKOPENSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x17588DD0)
#define RPG_CLIENT_UIMANAGER_GET_FULLSCREENTRANSFERMANAGER_OFFSET UNITYSDK_OFFSET(0x17588E20)
#define RPG_CLIENT_UIMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x17595980)
#define RPG_CLIENT_UIMANAGER_GET_ISBLOCK_OFFSET UNITYSDK_OFFSET(0x17587D90)
#define RPG_CLIENT_UIMANAGER_GET_ISINAUDIOPAUSEORFILTERING_OFFSET UNITYSDK_OFFSET(0x175957F0)
#define RPG_CLIENT_UIMANAGER_GET_ISINLOADINGPROCESS_OFFSET UNITYSDK_OFFSET(0x175880E0)
#define RPG_CLIENT_UIMANAGER_GET_ISINSTORYMODE_OFFSET UNITYSDK_OFFSET(0x175957D0)
#define RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFERFULLMASK_OFFSET UNITYSDK_OFFSET(0x17588D40)
#define RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x17588CE0)
#define RPG_CLIENT_UIMANAGER_GET_LINKREGISTRY_OFFSET UNITYSDK_OFFSET(0x1758A440)
#define RPG_CLIENT_UIMANAGER_GET_PAGESTACKCOUNT_OFFSET UNITYSDK_OFFSET(0x17593650)
#define RPG_CLIENT_UIMANAGER_GET_SHOWSCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0x17588C00)
#define RPG_CLIENT_UIMANAGER_GET_TOPPAGEDIALOGCOUNT_OFFSET UNITYSDK_OFFSET(0x175936D0)
#define RPG_CLIENT_UIMANAGER_GET_TRANSITIONUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x175958B0)
#define RPG_CLIENT_UIMANAGER_GET_UICONTROLLERGROUP_OFFSET UNITYSDK_OFFSET(0x17595940)
#define RPG_CLIENT_UIMANAGER_HANDLEDESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x17591E70)
#define RPG_CLIENT_UIMANAGER_HANDLEEXITCONTEXT_OFFSET UNITYSDK_OFFSET(0x17591A70)
#define RPG_CLIENT_UIMANAGER_HANDLESHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0x17590F50)
#define RPG_CLIENT_UIMANAGER_HASABOVEDIALOGINSTACK_OFFSET UNITYSDK_OFFSET(0x175905F0)
#define RPG_CLIENT_UIMANAGER_HASDIALOGINSTACK_OFFSET UNITYSDK_OFFSET(0x17590410)
#define RPG_CLIENT_UIMANAGER_HASPAGEINSTACK_OFFSET UNITYSDK_OFFSET(0x17590230)
#define RPG_CLIENT_UIMANAGER_HIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x17587FA0)
#define RPG_CLIENT_UIMANAGER_INITVIEWCACHE_OFFSET UNITYSDK_OFFSET(0x1758D210)
#define RPG_CLIENT_UIMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1758CD40)
#define RPG_CLIENT_UIMANAGER_ISBATTLEGAMEPAGE_OFFSET UNITYSDK_OFFSET(0x17592960)
#define RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET UNITYSDK_OFFSET(0x1758A2C0)
#define RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET UNITYSDK_OFFSET(0x1758A200)
#define RPG_CLIENT_UIMANAGER_ISDIALOGSTACKEMPTY_OFFSET UNITYSDK_OFFSET(0x175907E0)
#define RPG_CLIENT_UIMANAGER_ISFOCUSONABOVEDIALOG_OFFSET UNITYSDK_OFFSET(0x175925C0)
#define RPG_CLIENT_UIMANAGER_ISMAZEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1758FB30)
#define RPG_CLIENT_UIMANAGER_ISONBATTLEGAMEPAGE_OFFSET UNITYSDK_OFFSET(0x17594E80)
#define RPG_CLIENT_UIMANAGER_ISONMAZEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x17594DF0)
#define RPG_CLIENT_UIMANAGER_ISTRANSFERREASONACTIVE_OFFSET UNITYSDK_OFFSET(0x1758A060)
#define RPG_CLIENT_UIMANAGER_ISUILOCKED_OFFSET UNITYSDK_OFFSET(0x17594080)
#define RPG_CLIENT_UIMANAGER_ISVIEWCACHEENABLE_OFFSET UNITYSDK_OFFSET(0x1758D4D0)
#define RPG_CLIENT_UIMANAGER_NEXTPAGE_OFFSET UNITYSDK_OFFSET(0x1758C6E0)
#define RPG_CLIENT_UIMANAGER_NOTIFYPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x175892F0)
#define RPG_CLIENT_UIMANAGER_NOTIFYWAITNETPACKETRETURN_OFFSET UNITYSDK_OFFSET(0x17587B20)
#define RPG_CLIENT_UIMANAGER_ONBACKPRESSED_OFFSET UNITYSDK_OFFSET(0x175924A0)
#define RPG_CLIENT_UIMANAGER_ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x1758E470)
#define RPG_CLIENT_UIMANAGER_ONSCREENTRANSFEREXITFULLMASK_OFFSET UNITYSDK_OFFSET(0x17589C40)
#define RPG_CLIENT_UIMANAGER_ONSCREENTRANSFERFULLMASK_OFFSET UNITYSDK_OFFSET(0x17589BB0)
#define RPG_CLIENT_UIMANAGER_ONUIBLURSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17594FA0)
#define RPG_CLIENT_UIMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x1758A0E0)
#define RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_1_OFFSET UNITYSDK_OFFSET(0x17588F00)
#define RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_OFFSET UNITYSDK_OFFSET(0x17588E70)
#define RPG_CLIENT_UIMANAGER_PLAYCARTOONSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x175897F0)
#define RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFERWITHDURATION_OFFSET UNITYSDK_OFFSET(0x17589DB0)
#define RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x17589D20)
#define RPG_CLIENT_UIMANAGER_REFRESHADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1758D150)
#define RPG_CLIENT_UIMANAGER_RELEASEALLCACHE_OFFSET UNITYSDK_OFFSET(0x1758E430)
#define RPG_CLIENT_UIMANAGER_RELOADENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0x1758ABD0)
#define RPG_CLIENT_UIMANAGER_REMOVECONTROLLER_OFFSET UNITYSDK_OFFSET(0x17591F90)
#define RPG_CLIENT_UIMANAGER_REMOVEDIALOG_OFFSET UNITYSDK_OFFSET(0x175922A0)
#define RPG_CLIENT_UIMANAGER_REMOVEPAGE_OFFSET UNITYSDK_OFFSET(0x17592210)
#define RPG_CLIENT_UIMANAGER_REMOVETICK_OFFSET UNITYSDK_OFFSET(0x17593D90)
#define RPG_CLIENT_UIMANAGER_REMOVEUI3DTICK_OFFSET UNITYSDK_OFFSET(0x1758B1F0)
#define RPG_CLIENT_UIMANAGER_RESETFOCUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x175942F0)
#define RPG_CLIENT_UIMANAGER_RESETVIEWCACHE_OFFSET UNITYSDK_OFFSET(0x1758D580)
#define RPG_CLIENT_UIMANAGER_RETURNTOCACHE_OFFSET UNITYSDK_OFFSET(0x1758E390)
#define RPG_CLIENT_UIMANAGER_SECONDTOPPAGEDIALOG_OFFSET UNITYSDK_OFFSET(0x17593A70)
#define RPG_CLIENT_UIMANAGER_SETAUDIOLOADING_OFFSET UNITYSDK_OFFSET(0x17588030)
#define RPG_CLIENT_UIMANAGER_SETAUDIOOPENNORMALUI_OFFSET UNITYSDK_OFFSET(0x17594770)
#define RPG_CLIENT_UIMANAGER_SETAUDIOOPENSCREENTRANS_OFFSET UNITYSDK_OFFSET(0x17594850)
#define RPG_CLIENT_UIMANAGER_SETAUDIOPAUSEPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x175949E0)
#define RPG_CLIENT_UIMANAGER_SETAUDIOPAUSE_OFFSET UNITYSDK_OFFSET(0x17594930)
#define RPG_CLIENT_UIMANAGER_SETFORBIDTASKOPENSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x17589CD0)
#define RPG_CLIENT_UIMANAGER_SETINLOADINGPROCESS_OFFSET UNITYSDK_OFFSET(0x17587EC0)
#define RPG_CLIENT_UIMANAGER_SETISTRANSFERREASONACTIVELUAFUNC_OFFSET UNITYSDK_OFFSET(0x1758A010)
#define RPG_CLIENT_UIMANAGER_SETLOADINGPROGRESS_OFFSET UNITYSDK_OFFSET(0x17587F20)
#define RPG_CLIENT_UIMANAGER_SETPAUSEGAMESHIELD_OFFSET UNITYSDK_OFFSET(0x17588100)
#define RPG_CLIENT_UIMANAGER_SETTRANSFERLUATABLE_OFFSET UNITYSDK_OFFSET(0x17589FC0)
#define RPG_CLIENT_UIMANAGER_SETUPLONGPRESSHINTSHOW_OFFSET UNITYSDK_OFFSET(0x17594A90)
#define RPG_CLIENT_UIMANAGER_SETVIEWCACHEENABLE_OFFSET UNITYSDK_OFFSET(0x1758D520)
#define RPG_CLIENT_UIMANAGER_SET_FOCUSEDCONTROLLER_OFFSET UNITYSDK_OFFSET(0x175958A0)
#define RPG_CLIENT_UIMANAGER_SET_ISINLOADINGPROCESS_OFFSET UNITYSDK_OFFSET(0x175880F0)
#define RPG_CLIENT_UIMANAGER_SET_ISINSTORYMODE_OFFSET UNITYSDK_OFFSET(0x175957E0)
#define RPG_CLIENT_UIMANAGER_SET_SHOWSCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0x17588C60)
#define RPG_CLIENT_UIMANAGER_SET_TRANSITIONUICONTROLLER_OFFSET UNITYSDK_OFFSET(0x175958F0)
#define RPG_CLIENT_UIMANAGER_SHOULDSHOWANDROIDEXITUI_OFFSET UNITYSDK_OFFSET(0x17592620)
#define RPG_CLIENT_UIMANAGER_SHOULDSHOWCONTEXT_OFFSET UNITYSDK_OFFSET(0x17590EF0)
#define RPG_CLIENT_UIMANAGER_SHOWBELOWTRANSFER_OFFSET UNITYSDK_OFFSET(0x175895E0)
#define RPG_CLIENT_UIMANAGER_SHOWLOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x17587E10)
#define RPG_CLIENT_UIMANAGER_SHOWUI3D_OFFSET UNITYSDK_OFFSET(0x1758A580)
#define RPG_CLIENT_UIMANAGER_SWITCHINABOVETRANSFER_OFFSET UNITYSDK_OFFSET(0x175894C0)
#define RPG_CLIENT_UIMANAGER_SWITCHOUTABOVETRANSFER_OFFSET UNITYSDK_OFFSET(0x17589360)
#define RPG_CLIENT_UIMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x17590870)
#define RPG_CLIENT_UIMANAGER_TOPDIALOGORPAGE_OFFSET UNITYSDK_OFFSET(0x17592520)
#define RPG_CLIENT_UIMANAGER_TOPPAGEDIALOGNAME_OFFSET UNITYSDK_OFFSET(0x175939A0)
#define RPG_CLIENT_UIMANAGER_TOPPAGE_OFFSET UNITYSDK_OFFSET(0x1758BBE0)
#define RPG_CLIENT_UIMANAGER_TRYUNBLOCKFIXEDTIME_OFFSET UNITYSDK_OFFSET(0x17587A60)
#define RPG_CLIENT_UIMANAGER_TRYUNBLOCKWAITNETPACKET_OFFSET UNITYSDK_OFFSET(0x17587AC0)
#define RPG_CLIENT_UIMANAGER_UNACTIVEPAGEBEHINDTOP_OFFSET UNITYSDK_OFFSET(0x17591ED0)
#define RPG_CLIENT_UIMANAGER_UPDATECURSORSTATE_OFFSET UNITYSDK_OFFSET(0x17594120)
#define RPG_CLIENT_UIMANAGER_UPDATEUIPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x1758FA70)
#define RPG_CLIENT_UIMANAGER__ADJUSTSIBLING_OFFSET UNITYSDK_OFFSET(0x1758FD10)
#define RPG_CLIENT_UIMANAGER__CLEARCARTOONSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x175899C0)
#define RPG_CLIENT_UIMANAGER__CREATESCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0x175887A0)
#define RPG_CLIENT_UIMANAGER__DESTROYUI3D_OFFSET UNITYSDK_OFFSET(0x1758A8C0)
#define RPG_CLIENT_UIMANAGER__DISPATCHLUAUI2DSHOW_OFFSET UNITYSDK_OFFSET(0x1758B410)
#define RPG_CLIENT_UIMANAGER__DISPATCHSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x17590D20)
#define RPG_CLIENT_UIMANAGER__DISPATCHSOFAUI2DSHOW_OFFSET UNITYSDK_OFFSET(0x1758B640)
#define RPG_CLIENT_UIMANAGER__DISPATCHUI2DDESTROY_OFFSET UNITYSDK_OFFSET(0x1758BD50)
#define RPG_CLIENT_UIMANAGER__DISPATCHUI2DEXIT_OFFSET UNITYSDK_OFFSET(0x1758B950)
#define RPG_CLIENT_UIMANAGER__DISPATCHUI2DSHOW_OFFSET UNITYSDK_OFFSET(0x1758B340)
#define RPG_CLIENT_UIMANAGER__DISPOSESCREENCLICKEFFECT_OFFSET UNITYSDK_OFFSET(0x17588B90)
#define RPG_CLIENT_UIMANAGER__GETCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x1758D400)
#define RPG_CLIENT_UIMANAGER__GETFIRSTFOCUSABLECONTROLLER_OFFSET UNITYSDK_OFFSET(0x17595110)
#define RPG_CLIENT_UIMANAGER__GETFIRSTMAZEMAINPAGENAME_OFFSET UNITYSDK_OFFSET(0x1758F100)
#define RPG_CLIENT_UIMANAGER__HANDLEEXITUI3D_OFFSET UNITYSDK_OFFSET(0x1758AAD0)
#define RPG_CLIENT_UIMANAGER__HANDLESHOWUI3D_OFFSET UNITYSDK_OFFSET(0x1758A660)
#define RPG_CLIENT_UIMANAGER__HASPAGEINSTACK_OFFSET UNITYSDK_OFFSET(0x1758F720)
#define RPG_CLIENT_UIMANAGER__ISLOGINPAGE_OFFSET UNITYSDK_OFFSET(0x175928A0)
#define RPG_CLIENT_UIMANAGER__ISSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1758BC30)
#define RPG_CLIENT_UIMANAGER__ISTOPINCURRENTLAYER_OFFSET UNITYSDK_OFFSET(0x1758FE40)
#define RPG_CLIENT_UIMANAGER__LOADORUNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1758C4C0)
#define RPG_CLIENT_UIMANAGER__NEXTUI2D_OFFSET UNITYSDK_OFFSET(0x1758C000)
#define RPG_CLIENT_UIMANAGER__ONINPUTDISABLETIMEUP_OFFSET UNITYSDK_OFFSET(0x17595730)
#define RPG_CLIENT_UIMANAGER__ONPRESENTATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1758F8E0)
#define RPG_CLIENT_UIMANAGER__ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x17590DF0)
#define RPG_CLIENT_UIMANAGER__ONTOPCONTROLLERCHANGED_OFFSET UNITYSDK_OFFSET(0x1758F9A0)
#define RPG_CLIENT_UIMANAGER__ONTOPUI3DCHANGE_OFFSET UNITYSDK_OFFSET(0x1758C070)
#define RPG_CLIENT_UIMANAGER__ONUIEXIT_OFFSET UNITYSDK_OFFSET(0x17589A10)
#define RPG_CLIENT_UIMANAGER__PLAYEXITTRANSITION_OFFSET UNITYSDK_OFFSET(0x1758BF70)
#define RPG_CLIENT_UIMANAGER__PLAYSHOWTRANSITION_OFFSET UNITYSDK_OFFSET(0x1758BE60)
#define RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGENTERVIEW_OFFSET UNITYSDK_OFFSET(0x175919B0)
#define RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGEXITVIEW_OFFSET UNITYSDK_OFFSET(0x17591DB0)
#define RPG_CLIENT_UIMANAGER__PROCESSABOVEPAGEENTERVIEW_OFFSET UNITYSDK_OFFSET(0x17591890)
#define RPG_CLIENT_UIMANAGER__PROCESSBELOWPAGEENTERVIEW_OFFSET UNITYSDK_OFFSET(0x175918F0)
#define RPG_CLIENT_UIMANAGER__PROCESSDEFAULTEXITVIEW_OFFSET UNITYSDK_OFFSET(0x17591E10)
#define RPG_CLIENT_UIMANAGER__PROCESSDIALOGENTERVIEW_OFFSET UNITYSDK_OFFSET(0x17591390)
#define RPG_CLIENT_UIMANAGER__PROCESSDIALOGEXITVIEW_OFFSET UNITYSDK_OFFSET(0x17591CD0)
#define RPG_CLIENT_UIMANAGER__PROCESSPAGEENTERVIEW_OFFSET UNITYSDK_OFFSET(0x17591070)
#define RPG_CLIENT_UIMANAGER__PROCESSPAGEEXITVIEW_OFFSET UNITYSDK_OFFSET(0x17591B70)
#define RPG_CLIENT_UIMANAGER__REFRESHAUDIOSTAGE_OFFSET UNITYSDK_OFFSET(0x175943B0)
#define RPG_CLIENT_UIMANAGER__RESETAUDIOPAUSEANDFILTER_OFFSET UNITYSDK_OFFSET(0x1758D9D0)
#define RPG_CLIENT_UIMANAGER__RESETMISSIONFULLSCREENTRANSFERSEQID_OFFSET UNITYSDK_OFFSET(0x17589F10)
#define RPG_CLIENT_UIMANAGER__RESOLVETOPPAUSEMODE_OFFSET UNITYSDK_OFFSET(0x17588280)
#define RPG_CLIENT_UIMANAGER__RESTORESCENE_OFFSET UNITYSDK_OFFSET(0x1758BC80)
#define RPG_CLIENT_UIMANAGER__SETCURRENTFOCUSED_OFFSET UNITYSDK_OFFSET(0x17595500)
#define RPG_CLIENT_UIMANAGER__SHOULDCACHE_OFFSET UNITYSDK_OFFSET(0x1758DBD0)
#define RPG_CLIENT_UIMANAGER__TICKBLOCK_OFFSET UNITYSDK_OFFSET(0x17587D20)
#define RPG_CLIENT_UIMANAGER__TICKFULLSCREENTRANSFERMANAGER_OFFSET UNITYSDK_OFFSET(0x17589F60)
#define RPG_CLIENT_UIMANAGER__TICKUI3D_OFFSET UNITYSDK_OFFSET(0x1758B270)
#define RPG_CLIENT_UIMANAGER__TOPUI2D_OFFSET UNITYSDK_OFFSET(0x1758BEF0)
#define RPG_CLIENT_UIMANAGER__TRYDECIDEPAUSEMODE_OFFSET UNITYSDK_OFFSET(0x175886C0)
#define RPG_CLIENT_UIMANAGER__UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1758C680)
#define RPG_CLIENT_UIMANAGER__UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1758C0D0)
#define RPG_CLIENT_UIMANAGER__UPDATECURSORSTATEBYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17594180)
#define RPG_CLIENT_UIMANAGER__UPDATEMULTITOUCHSTATE_OFFSET UNITYSDK_OFFSET(0x175956B0)
#define RPG_CLIENT_UIMANAGER__UPDATEPAUSESTATE_OFFSET UNITYSDK_OFFSET(0x17588180)

namespace RPG::Client
{
	inline static constexpr unsigned int UIManager_TypeDefinitionIndex = 75190;

	class UIManager : public ::System::Object
	{
	public:
		::LPBGLLGGGDN* _DialogStack; // 0x10
		::UnityEngine::Transform* _PageRoot; // 0x18
		::RPG::Client::UITransitionManager* _TransitionMgr; // 0x20
		::RPG::Client::UIController* _FocusedController_k__BackingField; // 0x28
		::UnityEngine::Transform* _3DRoot; // 0x30
		::RPG::Client::LuaUIController* _ScreenTransferDialog; // 0x38
		::FBKGNHKJOPJ* _ControllerGroup; // 0x40
		::RPG::Client::LuaUIController* _TransitionUIController; // 0x48
		::CGPLPLEELDM* _BindingResolver_k__BackingField; // 0x50
		::LPBGLLGGGDN* _PageStack; // 0x58
		::UnityEngine::Transform* _DialogRoot; // 0x60
		::KNKPLOGICFO* _InputDisableTickTimer; // 0x68
		::System::String* _CurrentEnvProfilePath; // 0x70
		::RPG::Client::ScreenClickEffect* _MonoScreenClickEffect; // 0x78
		::UnityEngine::GameObject* _ObjScreenClickEffect; // 0x80
		::IDCFNANLPDK* _BelowTransfer; // 0x88
		::LPBGLLGGGDN* _BelowPages; // 0x90
		::UnityEngine::Transform* _AbovePageRoot; // 0x98
		::System::Collections::Generic::List_1<::RPG::Client::UIController*>* _TickList; // 0xA0
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::UIAudioStage, ::System::Int32>* _UIAudioStages; // 0xA8
		::System::Collections::Generic::List_1<::System::Action_1<::System::Single>*>* _UI3DTicks; // 0xB0
		::LPBGLLGGGDN* _AboveDialogStack; // 0xB8
		::UnityEngine::Transform* _BelowPageRoot; // 0xC0
		::RPG::Client::AboveSwitchDialog* _AboveTransfer; // 0xC8
		::RPG::Client::UI3DLinkRegistry* _LinkRegistry_k__BackingField; // 0xD0
		::System::Collections::Generic::List_1<::System::Action*>* _ScreenTransferUIExitCallbacks; // 0xD8
		::RPG::Client::LuaUIController* _CartoonScreenTransferDialog; // 0xE0
		::UnityEngine::Transform* _AboveDialogRoot; // 0xE8
		::XLua::LuaTable* _ScreenTransferLuaTable; // 0xF0
		::JDFPIPINHPH* _FullScreenBlock; // 0xF8
		::System::Func_3<::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason, ::System::Boolean>* _IsTransferReasonActiveLuaFunc; // 0x100
		::DHPKOGKPFNE* _FullScreenTransferManager; // 0x108
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::AJEKOLJDHAK*>* _ViewCacheByLayer; // 0x110
		::RPG::GameCore::UIAudioStage _CurrentUIAudioStage; // 0x118
		::System::Boolean _SceneUnloaded; // 0x11C
		::System::Boolean _IsInLoadingProcess_k__BackingField; // 0x11D
		::System::Boolean _isScreenFullMask; // 0x11E
		::System::Boolean _IsAlreadyDisposed; // 0x11F
		::System::Int32 _CachedScreenWidth; // 0x120
		::System::UInt32 _MissionFullScreenTransferSeqID; // 0x124
		::System::Boolean _UseViewCache; // 0x128
		::System::Boolean _IsScreenSizeChanged; // 0x129
		::System::Boolean _ForbidTaskOpenScreenTransfer; // 0x12A
		::System::Boolean _IsInStoryMode_k__BackingField; // 0x12B
		::System::UInt32 _BlockUID; // 0x12C
		::System::Int32 _CachedScreenHeight; // 0x130
		static ::RPG::Client::RPGProfilerMarker** StaticGet__TickListMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAA0);
		}

		static ::System::String** StaticGet_TALK_OPTION_UIPREFAB_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAA8);
		}

		static ::System::String** StaticGet_SCREEN_TRANSFER_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAB0);
		}

		static ::System::String** StaticGet_BATTLETOMAZE_SWITCH_PAGE_UIPREFAB_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAB8);
		}

		static ::System::String** StaticGet_GACHA_RESULT_DIALOG_PAHT()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAC0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__FullScreenTransferManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAC8);
		}

		static ::System::String** StaticGet_GACHA_OBTAIN_DIALOG_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAD0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__UIButtonEventManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAD8);
		}

		static ::System::String** StaticGet_COMMON_SWITCH_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAE0);
		}

		static ::System::String** StaticGet_LOGIN_UI3D_PREFAB_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAE8);
		}

		static ::System::String** StaticGet_TALK_DIALOG_UIPREFAB_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAF0);
		}

		static ::System::String** StaticGet_MAZETOBATTLE_SWITCH_PAGE_UIPREFAB_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AAF8);
		}

		static ::System::String** StaticGet_SCREEN_CLICK_EFFECT_PREFAB_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AB00);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__InputDisableTickTimerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AB08);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet__FullScreenBlockMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AB10);
		}

		static ::System::String** StaticGet_BATTLEGAMEPHASE_UIPREFAB_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0x4AB18);
		}

		static ::System::Int32* StaticGet_ADV_DEFAULT_PAGE_COUNT()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "UIManager")->GetStaticField(0xE580);
		}

		// static const ::System::String* CARTOON_TRANSFER_DIALOG; // 0x0
		// static const ::System::Object MIN_ASPECT_RATIO; // 0x0
		// static const ::System::Object MAX_ASPECT_RATIO; // 0x0
		// static const ::System::String* MAZE_MAIN_PAGE_NAME; // 0x0
		// static const ::System::String* LOGIN_PAGE_NAME; // 0x0
		// static const ::System::String* BATTLE_GAME_PAGE_NAME; // 0x0
		// static const ::System::String* FIVEDIM_MAIN_PAGE_NAME; // 0x0
		// static const ::System::String* FIVEDIM_WINDOW_STAGE_PAGE_NAME; // 0x0
		// static const ::System::String* FOUR_ROTATE_VOXEL_MAIN_PAGE_NAME; // 0x0
		// static const ::System::String* UI_ENABLE_VIEW_CACHE_KEY; // 0x0
		// static const ::System::String* PAGE_LRU_CACHE_CAPACITY_KEY; // 0x0
		// static const ::System::String* DIALOG_LRU_CACHE_CAPACITY_KEY; // 0x0
		// static const ::System::String* PAGE_LRU_CACHE_CAPACITY_IOS_KEY; // 0x0
		// static const ::System::String* DIALOG_LRU_CACHE_CAPACITY_IOS_KEY; // 0x0
		// static const ::System::Object INPUT_DISABLE_TIME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CCTOR_OFFSET))();
		}

		::System::UInt32 BlockFixedTime(::System::Single a1, ::System::Single a2, ::System::Action* a3, ::System::Boolean a4, ::System::String* a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BLOCKFIXEDTIME_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 BlockForeverTime(::System::Boolean a1, ::System::Single a2, ::System::Boolean a3, ::System::String* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BLOCKFOREVERTIME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BlockWaitNetPacket(::System::UInt16 a1, ::RPG::Client::RspHandler* a2, ::System::Action* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Boolean a7, ::System::String* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::RPG::Client::RspHandler*, ::System::Action*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BLOCKWAITNETPACKET_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void TryUnblockFixedTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TRYUNBLOCKFIXEDTIME_OFFSET))(this, a1);
		}

		::System::Void TryUnblockWaitNetPacket(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TRYUNBLOCKWAITNETPACKET_OFFSET))(this, a1);
		}

		::System::Void NotifyWaitNetPacketReturn(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_NOTIFYWAITNETPACKETRETURN_OFFSET))(this, a1, a2);
		}

		::System::Void ClearFullScreenBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARFULLSCREENBLOCK_OFFSET))(this);
		}

		::System::Void EnableFullScreenBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ENABLEFULLSCREENBLOCK_OFFSET))(this, a1);
		}

		::System::Void ClearWaitNetPacketFullScreenBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARWAITNETPACKETFULLSCREENBLOCK_OFFSET))(this);
		}

		::System::Void _TickBlock(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__TICKBLOCK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISBLOCK_OFFSET))(this);
		}

		::System::Void ShowLoadingPage(::RPG::Client::LoadingStyle a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LoadingStyle))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOWLOADINGPAGE_OFFSET))(this, a1);
		}

		::System::Void SetLoadingProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETLOADINGPROGRESS_OFFSET))(this, a1);
		}

		::System::Void HideLoadingPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HIDELOADINGPAGE_OFFSET))(this);
		}

		::System::Void SetInLoadingProcess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETINLOADINGPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInLoadingProcess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISINLOADINGPROCESS_OFFSET))(this);
		}

		::System::Void set_IsInLoadingProcess(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_ISINLOADINGPROCESS_OFFSET))(this, a1);
		}

		::System::Void SetPauseGameShield(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETPAUSEGAMESHIELD_OFFSET))(this, a1);
		}

		::System::Void _UpdatePauseState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__UPDATEPAUSESTATE_OFFSET))(this);
		}

		::RPG::Client::UIManager__PauseResolve _ResolveTopPauseMode()
		{
			return ((::RPG::Client::UIManager__PauseResolve(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__RESOLVETOPPAUSEMODE_OFFSET))(this);
		}

		static ::System::Boolean _TryDecidePauseMode(::RPG::Client::UIController* a1, ::RPG::Client::UIManager__PauseResolve a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::UIController*, ::RPG::Client::UIManager__PauseResolve))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__TRYDECIDEPAUSEMODE_OFFSET))(a1, a2);
		}

		::System::Void _CreateScreenClickEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__CREATESCREENCLICKEFFECT_OFFSET))(this);
		}

		::System::Void _DisposeScreenClickEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DISPOSESCREENCLICKEFFECT_OFFSET))(this);
		}

		::System::Boolean get_ShowScreenClickEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_SHOWSCREENCLICKEFFECT_OFFSET))(this);
		}

		::System::Void set_ShowScreenClickEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_SHOWSCREENCLICKEFFECT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsScreenTransfer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFER_OFFSET))(this);
		}

		::System::Boolean get_IsScreenTransferFullMask()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISSCREENTRANSFERFULLMASK_OFFSET))(this);
		}

		::System::Boolean get_ForbidTaskOpenScreenTransfer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_FORBIDTASKOPENSCREENTRANSFER_OFFSET))(this);
		}

		::DHPKOGKPFNE* get_FullScreenTransferManager()
		{
			return ((::DHPKOGKPFNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_FULLSCREENTRANSFERMANAGER_OFFSET))(this);
		}

		::System::Void OpenScreenTransferDialog(::System::Single a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void OpenScreenTransferDialog_1(::RPG::GameCore::PlayScreenTransfer* a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_OPENSCREENTRANSFERDIALOG_1_OFFSET))(this, a1, a2);
		}

		::System::Void CloseScreenTransferDialog(::System::Single a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLOSESCREENTRANSFERDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void NotifyPlayScreenTransfer(::RPG::GameCore::PlayScreenTransfer* a1, ::RPG::GameCore::ScreenTransferReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayScreenTransfer*, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_NOTIFYPLAYSCREENTRANSFER_OFFSET))(this, a1, a2);
		}

		::System::Void SwitchOutAboveTransfer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SWITCHOUTABOVETRANSFER_OFFSET))(this, a1);
		}

		::System::Void SwitchInAboveTransfer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SWITCHINABOVETRANSFER_OFFSET))(this, a1);
		}

		::System::Void ShowBelowTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOWBELOWTRANSFER_OFFSET))(this);
		}

		::System::Void CloseBelowTransfer(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLOSEBELOWTRANSFER_OFFSET))(this, a1);
		}

		::System::Void AddScreenTransferExitCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ADDSCREENTRANSFEREXITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void PlayCartoonScreenTransfer(::RPG::Client::CartoonTransfer_Config* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CartoonTransfer_Config*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_PLAYCARTOONSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void _ClearCartoonScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__CLEARCARTOONSCREENTRANSFER_OFFSET))(this);
		}

		::System::Void _OnUIExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONUIEXIT_OFFSET))(this);
		}

		::System::Void OnScreenTransferFullMask(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONSCREENTRANSFERFULLMASK_OFFSET))(this, a1);
		}

		::System::Void OnScreenTransferExitFullMask(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONSCREENTRANSFEREXITFULLMASK_OFFSET))(this, a1);
		}

		::System::Void SetForbidTaskOpenScreenTransfer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETFORBIDTASKOPENSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void PlayFullScreenTransfer(::RPG::GameCore::ScreenTransferReason a1, ::System::Action* a2, ::System::Func_1<::System::Boolean>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Action*, ::System::Func_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PlayFullScreenTransferWithDuration(::RPG::GameCore::ScreenTransferReason a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Action* a5, ::System::Func_1<::System::Boolean>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason, ::System::Single, ::System::Single, ::System::Single, ::System::Action*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_PLAYFULLSCREENTRANSFERWITHDURATION_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ClearAllFullScreenTransfer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARALLFULLSCREENTRANSFER_OFFSET))(this);
		}

		::System::Void _TickFullScreenTransferManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__TICKFULLSCREENTRANSFERMANAGER_OFFSET))(this);
		}

		::System::Void SetTransferLuaTable(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETTRANSFERLUATABLE_OFFSET))(this, a1);
		}

		::System::Void SetIsTransferReasonActiveLuaFunc(::System::Func_3<::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::XLua::LuaTable*, ::RPG::GameCore::ScreenTransferReason, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETISTRANSFERREASONACTIVELUAFUNC_OFFSET))(this, a1);
		}

		::System::Boolean IsTransferReasonActive(::RPG::GameCore::ScreenTransferReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ScreenTransferReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISTRANSFERREASONACTIVE_OFFSET))(this, a1);
		}

		::System::Void OpenCustomScreenTransfer(::RPG::GameCore::CustomScreenTransferType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_OPENCUSTOMSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void CloseCustomScreenTransfer(::RPG::GameCore::CustomScreenTransferType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLOSECUSTOMSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Boolean IsCustomScreenTransferOpened(::RPG::GameCore::CustomScreenTransferType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFEROPENED_OFFSET))(this, a1);
		}

		::System::Boolean IsCustomScreenTransferFullOpened(::RPG::GameCore::CustomScreenTransferType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CustomScreenTransferType))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISCUSTOMSCREENTRANSFERFULLOPENED_OFFSET))(this, a1);
		}

		::System::UInt32 GetMissionFullScreenTransferSeqID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETMISSIONFULLSCREENTRANSFERSEQID_OFFSET))(this);
		}

		::System::Void _ResetMissionFullScreenTransferSeqID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__RESETMISSIONFULLSCREENTRANSFERSEQID_OFFSET))(this);
		}

		::RPG::Client::UI3DLinkRegistry* get_LinkRegistry()
		{
			return ((::RPG::Client::UI3DLinkRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_LINKREGISTRY_OFFSET))(this);
		}

		::CGPLPLEELDM* get_BindingResolver()
		{
			return ((::CGPLPLEELDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_BINDINGRESOLVER_OFFSET))(this);
		}

		::RPG::Client::IUI3DController* GetTopUI3D()
		{
			return ((::RPG::Client::IUI3DController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETTOPUI3D_OFFSET))(this);
		}

		::RPG::Client::IUI3DController* GetSecondTopUI3D()
		{
			return ((::RPG::Client::IUI3DController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETSECONDTOPUI3D_OFFSET))(this);
		}

		::System::Int32 GetUI3DStackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETUI3DSTACKCOUNT_OFFSET))(this);
		}

		::System::Void ShowUI3D(::RPG::Client::IUI3DController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOWUI3D_OFFSET))(this, a1);
		}

		::System::Void ExitUI3D(::RPG::Client::IUI3DController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITUI3D_OFFSET))(this, a1);
		}

		::System::Void ReloadEnvironmentProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RELOADENVIRONMENTPROFILE_OFFSET))(this);
		}

		::System::Void ClearUI3DStack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARUI3DSTACK_OFFSET))(this);
		}

		::UnityEngine::Transform* GetSofaUI3DRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETSOFAUI3DROOT_OFFSET))(this);
		}

		::System::Void AddUI3DTick(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ADDUI3DTICK_OFFSET))(this, a1);
		}

		::System::Void RemoveUI3DTick(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVEUI3DTICK_OFFSET))(this, a1);
		}

		::System::Void _TickUI3D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__TICKUI3D_OFFSET))(this, a1);
		}

		::System::Void _DispatchUI2DShow(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DISPATCHUI2DSHOW_OFFSET))(this, a1);
		}

		::System::Void _DispatchUI2DExit(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DISPATCHUI2DEXIT_OFFSET))(this, a1);
		}

		::System::Void _DispatchUI2DDestroy(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DISPATCHUI2DDESTROY_OFFSET))(this, a1);
		}

		::System::Void _DispatchLuaUI2DShow(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DISPATCHLUAUI2DSHOW_OFFSET))(this, a1);
		}

		::System::Void _DispatchSofaUI2DShow(::Sofa::BaseSofaWindow_SofaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow_SofaUIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DISPATCHSOFAUI2DSHOW_OFFSET))(this, a1);
		}

		::System::Void _HandleShowUI3D(::RPG::Client::IUI3DController* a1, ::RPG::Client::IUI3DController* a2, ::RPG::Client::UIController* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IUI3DController*, ::RPG::Client::IUI3DController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__HANDLESHOWUI3D_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::Promise* _PlayShowTransition(::RPG::Client::IUI3DController* a1, ::RPG::Client::IUI3DController* a2, ::RPG::Client::UIController* a3)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::IUI3DController*, ::RPG::Client::IUI3DController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PLAYSHOWTRANSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _HandleExitUI3D(::RPG::Client::IUI3DController* a1, ::RPG::Client::IUI3DController* a2, ::RPG::Client::UIController* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IUI3DController*, ::RPG::Client::IUI3DController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__HANDLEEXITUI3D_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::Promise* _PlayExitTransition(::RPG::Client::IUI3DController* a1, ::RPG::Client::IUI3DController* a2, ::RPG::Client::UIController* a3)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::RPG::Client::IUI3DController*, ::RPG::Client::IUI3DController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PLAYEXITTRANSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DestroyUI3D(::RPG::Client::IUI3DController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DESTROYUI3D_OFFSET))(this, a1);
		}

		::System::Void _OnTopUI3DChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONTOPUI3DCHANGE_OFFSET))(this);
		}

		::System::Void _UpdateCameraState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__UPDATECAMERASTATE_OFFSET))(this);
		}

		::System::Void _LoadOrUnloadScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__LOADORUNLOADSCENE_OFFSET))(this);
		}

		::System::Void _UnloadScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__UNLOADSCENE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _RestoreScene()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__RESTORESCENE_OFFSET))(this);
		}

		::System::Boolean _IsSceneUnloaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ISSCENEUNLOADED_OFFSET))(this);
		}

		::RPG::Client::UIController* _TopUI2D()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__TOPUI2D_OFFSET))(this);
		}

		::RPG::Client::UIController* _NextUI2D()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__NEXTUI2D_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_INIT_OFFSET))(this);
		}

		::System::Void RefreshAdaptiveDeviceType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REFRESHADAPTIVEDEVICETYPE_OFFSET))(this);
		}

		::System::Void InitViewCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_INITVIEWCACHE_OFFSET))(this);
		}

		::System::Boolean IsViewCacheEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISVIEWCACHEENABLE_OFFSET))(this);
		}

		::System::Void SetViewCacheEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETVIEWCACHEENABLE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_DISPOSE_OFFSET))(this);
		}

		::AJEKOLJDHAK* GetViewCache(::RPG::Client::UILayer a1)
		{
			return ((::AJEKOLJDHAK*(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETVIEWCACHE_OFFSET))(this, a1);
		}

		::System::Void ClearViewCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARVIEWCACHE_OFFSET))(this);
		}

		::System::Void ResetViewCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RESETVIEWCACHE_OFFSET))(this);
		}

		::System::Void BeginShowGroup(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BEGINSHOWGROUP_OFFSET))(this, a1);
		}

		::System::Void EndShowGroup(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ENDSHOWGROUP_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetCache(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETCACHE_OFFSET))(this, a1);
		}

		::System::Void ReturnToCache(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RETURNTOCACHE_OFFSET))(this, a1);
		}

		::System::Void ReleaseAllCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RELEASEALLCACHE_OFFSET))(this);
		}

		::System::Void OnNetworkReconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONNETWORKRECONNECTED_OFFSET))(this);
		}

		::System::Void ClearUIStack(::RPG::Client::UIManager_ClearReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIManager_ClearReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARUISTACK_OFFSET))(this, a1);
		}

		::System::Void ClearUI2DStack(::RPG::Client::UIManager_ClearReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIManager_ClearReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CLEARUI2DSTACK_OFFSET))(this, a1);
		}

		::System::Void BackToFirstPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BACKTOFIRSTPAGE_OFFSET))(this);
		}

		::System::Void BackToPage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_BACKTOPAGE_OFFSET))(this, a1);
		}

		::System::String* _GetFirstMazeMainPageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__GETFIRSTMAZEMAINPAGENAME_OFFSET))(this);
		}

		::System::Boolean _HasPageInStack(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__HASPAGEINSTACK_OFFSET))(this, a1);
		}

		::System::Void ControllerWillAppear(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CONTROLLERWILLAPPEAR_OFFSET))(this, a1);
		}

		::System::Void ControllerWillDestroy(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CONTROLLERWILLDESTROY_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* TopPage()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TOPPAGE_OFFSET))(this);
		}

		::RPG::Client::UIController* NextPage()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_NEXTPAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetAllPageNames()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETALLPAGENAMES_OFFSET))(this);
		}

		::System::Boolean HasPageInStack(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HASPAGEINSTACK_OFFSET))(this, a1);
		}

		::System::Boolean HasDialogInStack(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HASDIALOGINSTACK_OFFSET))(this, a1);
		}

		::System::Boolean HasAboveDialogInStack(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HASABOVEDIALOGINSTACK_OFFSET))(this, a1);
		}

		::System::Boolean IsDialogStackEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISDIALOGSTACKEMPTY_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Boolean ShouldShowContext(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOULDSHOWCONTEXT_OFFSET))(this, a1);
		}

		::System::Void HandleShowContext(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HANDLESHOWCONTEXT_OFFSET))(this, a1);
		}

		::System::Void HandleExitContext(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HANDLEEXITCONTEXT_OFFSET))(this, a1);
		}

		::System::Void HandleDestroyContext(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_HANDLEDESTROYCONTEXT_OFFSET))(this, a1);
		}

		::System::Void UnactivePageBehindTop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_UNACTIVEPAGEBEHINDTOP_OFFSET))(this);
		}

		::System::Void RemoveController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVECONTROLLER_OFFSET))(this, a1);
		}

		::System::Void RemovePage(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVEPAGE_OFFSET))(this, a1);
		}

		::System::Void RemoveDialog(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVEDIALOG_OFFSET))(this, a1);
		}

		::System::Void OnBackPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONBACKPRESSED_OFFSET))(this);
		}

		::RPG::Client::UIController* TopDialogOrPage()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TOPDIALOGORPAGE_OFFSET))(this);
		}

		::System::Boolean IsFocusOnAboveDialog()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISFOCUSONABOVEDIALOG_OFFSET))(this);
		}

		::System::Boolean ShouldShowAndroidExitUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SHOULDSHOWANDROIDEXITUI_OFFSET))(this);
		}

		::RPG::Client::UIController* GetPageByName(::System::String* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETPAGEBYNAME_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* GetDialogByName(::System::String* a1, ::System::String* a2)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETDIALOGBYNAME_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIController* GetDialogByDialogName(::System::String* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETDIALOGBYDIALOGNAME_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* GetPageByRootName(::System::String* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETPAGEBYROOTNAME_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* GetTopPageOrDialogInSet(::System::Collections::Generic::HashSet_1<::RPG::Client::UIController*>* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETTOPPAGEORDIALOGINSET_OFFSET))(this, a1);
		}

		::System::Int32 get_PageStackCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_PAGESTACKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_TopPageDialogCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_TOPPAGEDIALOGCOUNT_OFFSET))(this);
		}

		::System::String* TopPageDialogName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_TOPPAGEDIALOGNAME_OFFSET))(this);
		}

		::RPG::Client::UIController* SecondTopPageDialog()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SECONDTOPPAGEDIALOG_OFFSET))(this);
		}

		::System::Void ExitBelowPage(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITBELOWPAGE_OFFSET))(this, a1);
		}

		::System::Void ExitAbovePage(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITABOVEPAGE_OFFSET))(this, a1);
		}

		::System::Void ExitAboveDialog(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_EXITABOVEDIALOG_OFFSET))(this, a1);
		}

		::System::Void AddTick(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ADDTICK_OFFSET))(this, a1);
		}

		::System::Void RemoveTick(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_REMOVETICK_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* GetAboveDialogByName(::System::String* a1)
		{
			return ((::RPG::Client::UIController*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETABOVEDIALOGBYNAME_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetLayerRoot(::RPG::Client::UILayer a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETLAYERROOT_OFFSET))(this, a1);
		}

		::System::Boolean IsUILocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISUILOCKED_OFFSET))(this);
		}

		::System::Void UpdateCursorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_UPDATECURSORSTATE_OFFSET))(this);
		}

		::System::Void ResetFocusedController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_RESETFOCUSEDCONTROLLER_OFFSET))(this);
		}

		::System::Void SetAudioLoading(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOLOADING_OFFSET))(this, a1);
		}

		::System::Void SetAudioOpenNormalUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOOPENNORMALUI_OFFSET))(this, a1);
		}

		::System::Void SetAudioOpenScreenTrans(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOOPENSCREENTRANS_OFFSET))(this, a1);
		}

		::System::Void SetAudioPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOPAUSE_OFFSET))(this, a1);
		}

		::System::Void SetAudioPausePerformance(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETAUDIOPAUSEPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Void SetupLongPressHintShow(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SETUPLONGPRESSHINTSHOW_OFFSET))(this, a1, a2);
		}

		::System::Void CheckInPerformanceShowUI(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_CHECKINPERFORMANCESHOWUI_OFFSET))(this, a1);
		}

		::RPG::Client::UITransitionManager* GetTransitionManager()
		{
			return ((::RPG::Client::UITransitionManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GETTRANSITIONMANAGER_OFFSET))(this);
		}

		::System::Boolean IsMazeMainPage(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISMAZEMAINPAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsBattleGamePage(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISBATTLEGAMEPAGE_OFFSET))(this, a1);
		}

		::System::Boolean IsOnMazeMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISONMAZEMAINPAGE_OFFSET))(this);
		}

		::System::Boolean IsOnBattleGamePage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ISONBATTLEGAMEPAGE_OFFSET))(this);
		}

		::System::Void OnUIBlurStateChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_ONUIBLURSTATECHANGE_OFFSET))(this, a1);
		}

		::System::Int32 _GetConstValue(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__GETCONSTVALUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ShouldCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__SHOULDCACHE_OFFSET))(this);
		}

		::System::Void _ProcessPageEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSPAGEENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessDialogEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSDIALOGENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessAbovePageEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSABOVEPAGEENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessBelowPageEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSBELOWPAGEENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessAboveDialogEnterView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGENTERVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessPageExitView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSPAGEEXITVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessDialogExitView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSDIALOGEXITVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessAboveDialogExitView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSABOVEDIALOGEXITVIEW_OFFSET))(this, a1);
		}

		::System::Void _ProcessDefaultExitView(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__PROCESSDEFAULTEXITVIEW_OFFSET))(this, a1);
		}

		::System::Void _OnPresentationChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONPRESENTATIONCHANGED_OFFSET))(this);
		}

		::System::Void _OnTopControllerChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONTOPCONTROLLERCHANGED_OFFSET))(this);
		}

		::System::Boolean _IsTopInCurrentLayer(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ISTOPINCURRENTLAYER_OFFSET))(this, a1);
		}

		::System::Void _SetCurrentFocused(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__SETCURRENTFOCUSED_OFFSET))(this, a1);
		}

		::RPG::Client::UIController* _GetFirstFocusableController()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__GETFIRSTFOCUSABLECONTROLLER_OFFSET))(this);
		}

		::System::Void _OnScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONSCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void _DispatchScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__DISPATCHSCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void UpdateUIPostProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_UPDATEUIPOSTPROCESS_OFFSET))(this);
		}

		::System::Void _OnInputDisableTimeup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ONINPUTDISABLETIMEUP_OFFSET))(this);
		}

		::System::Void _UpdateCursorStateByController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__UPDATECURSORSTATEBYCONTROLLER_OFFSET))(this, a1);
		}

		::System::Void _UpdateMultiTouchState(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__UPDATEMULTITOUCHSTATE_OFFSET))(this, a1);
		}

		::System::Void _ResetAudioPauseAndFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__RESETAUDIOPAUSEANDFILTER_OFFSET))(this);
		}

		::System::Void _RefreshAudioStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__REFRESHAUDIOSTAGE_OFFSET))(this);
		}

		::System::Void _AdjustSibling(::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::UIController*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::UIController*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ADJUSTSIBLING_OFFSET))(this, a1);
		}

		::System::Boolean _IsLoginPage(::RPG::Client::UIController* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER__ISLOGINPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInStoryMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISINSTORYMODE_OFFSET))(this);
		}

		::System::Void set_IsInStoryMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_ISINSTORYMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInAudioPauseOrFiltering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_ISINAUDIOPAUSEORFILTERING_OFFSET))(this);
		}

		::RPG::Client::UIController* get_FocusedController()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_FOCUSEDCONTROLLER_OFFSET))(this);
		}

		::System::Void set_FocusedController(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_FOCUSEDCONTROLLER_OFFSET))(this, a1);
		}

		::RPG::Client::LuaUIController* get_TransitionUIController()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_TRANSITIONUICONTROLLER_OFFSET))(this);
		}

		::System::Void set_TransitionUIController(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_SET_TRANSITIONUICONTROLLER_OFFSET))(this, a1);
		}

		::FBKGNHKJOPJ* get_UIControllerGroup()
		{
			return ((::FBKGNHKJOPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_UICONTROLLERGROUP_OFFSET))(this);
		}

		static ::RPG::Client::UIManager* get_Instance()
		{
			return ((::RPG::Client::UIManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIMANAGER_GET_INSTANCE_OFFSET))();
		}

	};
}
