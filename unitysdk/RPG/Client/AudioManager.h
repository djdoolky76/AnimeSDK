#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/AudioListenerMode.h"
#include "unitysdk/RPG/Client/AudioListenerType.h"
#include "unitysdk/RPG/Client/AudioManager_AudioDownloadState.h"
#include "unitysdk/RPG/Client/AudioManager_InnerState.h"
#include "unitysdk/RPG/Client/AudioSettings_SpeakerModeType.h"
#include "unitysdk/RPG/Client/MusicVisualizeDataSourceType.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterVOType.h"
#include "unitysdk/RPG/GameCore/AudioGameState.h"
#include "unitysdk/RPG/GameCore/SFXPlayType.h"
#include "unitysdk/RPG/GameCore/VoicePlayType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/RPG/Client/AudioManager_UIListenerSnapshot.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AkCallbackInfo;
class AkCallbackManager_EventCallback;
class AkExternalSourceInfoArray;
class AkMarkerCallbackInfo;
class DHCNPPICIAO;
class EBIKHHMFBNE;
class FLKJJAMDMPM;
class HIAMBDKHMIJ;
class HNCKCFCMCBK;
class IDEAGHGONNI;
class ILKDFKIBOKA;
class LJLBLAEMGOA;
class NCDGLNLIBEA;
class NCOONILMDAC;
class OCBJNCNNCNE;
class PJHGKCEAIBC;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AudioLanguageItem; }
namespace RPG::Client { class AudioManager_AudioListenerInfo; }
namespace RPG::Client { class TeamData; }
namespace RPG::GameCore { class AudioConfig; }
namespace RPG::GameCore { class JukeBoxMusicTimesConfig; }
namespace RPG::GameCore { class PropSoundConfigOverrideConfig; }
namespace RPG::GameCore { class PropSoundOverrideConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class CacheLinkedList_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AUDIOMANAGER_ADDSCOPELIMITEDTARGET_OFFSET UNITYSDK_OFFSET(0xD00F250)
#define RPG_CLIENT_AUDIOMANAGER_ADDVOICETARGET_OFFSET UNITYSDK_OFFSET(0xD014200)
#define RPG_CLIENT_AUDIOMANAGER_APPLYAUDIO_OFFSET UNITYSDK_OFFSET(0xD01F070)
#define RPG_CLIENT_AUDIOMANAGER_ASYNCLOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0xD012EE0)
#define RPG_CLIENT_AUDIOMANAGER_ASYNCUPDATELANGSIZE_OFFSET UNITYSDK_OFFSET(0xD01DD60)
#define RPG_CLIENT_AUDIOMANAGER_BACKTOPREVIOUSBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0xD017300)
#define RPG_CLIENT_AUDIOMANAGER_BEFORERESTART_OFFSET UNITYSDK_OFFSET(0xD010210)
#define RPG_CLIENT_AUDIOMANAGER_BREAKEVENT_OFFSET UNITYSDK_OFFSET(0xD017820)
#define RPG_CLIENT_AUDIOMANAGER_CANCELDOWNLOADAUDIO_OFFSET UNITYSDK_OFFSET(0xD01EEF0)
#define RPG_CLIENT_AUDIOMANAGER_CANDELETE_OFFSET UNITYSDK_OFFSET(0xD01CC10)
#define RPG_CLIENT_AUDIOMANAGER_CANPOSTEVENTINCD_OFFSET UNITYSDK_OFFSET(0xD019870)
#define RPG_CLIENT_AUDIOMANAGER_CANSWITCHAUDIO_OFFSET UNITYSDK_OFFSET(0xD01CAC0)
#define RPG_CLIENT_AUDIOMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xD020440)
#define RPG_CLIENT_AUDIOMANAGER_CHECKEMITTERHASOCCLUSION_OFFSET UNITYSDK_OFFSET(0xD018E50)
#define RPG_CLIENT_AUDIOMANAGER_CLEARBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0xD017480)
#define RPG_CLIENT_AUDIOMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xD01FCB0)
#define RPG_CLIENT_AUDIOMANAGER_DELETEAUDIOPACK_OFFSET UNITYSDK_OFFSET(0xD01F990)
#define RPG_CLIENT_AUDIOMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD00F7F0)
#define RPG_CLIENT_AUDIOMANAGER_GAMEOBJECTSOUNDFADE_OFFSET UNITYSDK_OFFSET(0xD017FA0)
#define RPG_CLIENT_AUDIOMANAGER_GETAUDIOITEMBYAUDIOKEY_OFFSET UNITYSDK_OFFSET(0xD01F440)
#define RPG_CLIENT_AUDIOMANAGER_GETAUDIOSIZE_OFFSET UNITYSDK_OFFSET(0xD01F2B0)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOCOUNT_OFFSET UNITYSDK_OFFSET(0xD01F3F0)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOITEMS_OFFSET UNITYSDK_OFFSET(0xD01F520)
#define RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADSTAGE_OFFSET UNITYSDK_OFFSET(0xD01F020)
#define RPG_CLIENT_AUDIOMANAGER_GETEVENTIDLISTBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0xD0180B0)
#define RPG_CLIENT_AUDIOMANAGER_GETEXTERNALSOURCEINFO_OFFSET UNITYSDK_OFFSET(0xD0135A0)
#define RPG_CLIENT_AUDIOMANAGER_GETISMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xD01AB40)
#define RPG_CLIENT_AUDIOMANAGER_GETJUKEBOXMUSICTIME_OFFSET UNITYSDK_OFFSET(0xD0194B0)
#define RPG_CLIENT_AUDIOMANAGER_GETMUSICVISUALIZEDATA_OFFSET UNITYSDK_OFFSET(0xD00EDE0)
#define RPG_CLIENT_AUDIOMANAGER_GETPARTIALDOWNLOADEDAUDIOITEMS_OFFSET UNITYSDK_OFFSET(0xD01F750)
#define RPG_CLIENT_AUDIOMANAGER_GETPCKMGR_OFFSET UNITYSDK_OFFSET(0xD01B010)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITIONBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0xD018170)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0xD018280)
#define RPG_CLIENT_AUDIOMANAGER_GETPLAYINGINFOBYPLAYINGID_OFFSET UNITYSDK_OFFSET(0xD018110)
#define RPG_CLIENT_AUDIOMANAGER_GETPROPSOUNDOVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0xD01ACC0)
#define RPG_CLIENT_AUDIOMANAGER_GETUIBUTTONSOUNDEVENTBYTYPE_OFFSET UNITYSDK_OFFSET(0xD018940)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORGROUP_OFFSET UNITYSDK_OFFSET(0xD01CA80)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORSTATE_OFFSET UNITYSDK_OFFSET(0xD01CAA0)
#define RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMWORLDSTATE_OFFSET UNITYSDK_OFFSET(0xD01CA60)
#define RPG_CLIENT_AUDIOMANAGER_GET_AUDIOPLAYINGCACHEDATA_OFFSET UNITYSDK_OFFSET(0xD01CA40)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMEVENTID_OFFSET UNITYSDK_OFFSET(0xD01C950)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMGAMEMODE_OFFSET UNITYSDK_OFFSET(0xD01C970)
#define RPG_CLIENT_AUDIOMANAGER_GET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0xD01CA00)
#define RPG_CLIENT_AUDIOMANAGER_GET_CANSETMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xD00FF00)
#define RPG_CLIENT_AUDIOMANAGER_GET_DEFAULTEMITTEROBJECT_OFFSET UNITYSDK_OFFSET(0xD017010)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISBGMMUTE_OFFSET UNITYSDK_OFFSET(0xD01C990)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISSFXMUTE_OFFSET UNITYSDK_OFFSET(0xD01C9B0)
#define RPG_CLIENT_AUDIOMANAGER_GET_ISVOMUTE_OFFSET UNITYSDK_OFFSET(0xD01C9D0)
#define RPG_CLIENT_AUDIOMANAGER_GET_LISTENEROBJECT_OFFSET UNITYSDK_OFFSET(0xD01C940)
#define RPG_CLIENT_AUDIOMANAGER_GET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0xD01C9F0)
#define RPG_CLIENT_AUDIOMANAGER_GET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0xD01CA10)
#define RPG_CLIENT_AUDIOMANAGER_GET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0xD01CA30)
#define RPG_CLIENT_AUDIOMANAGER_GET_USEPCKMODE_OFFSET UNITYSDK_OFFSET(0xD01CA50)
#define RPG_CLIENT_AUDIOMANAGER_GET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0xD01CA20)
#define RPG_CLIENT_AUDIOMANAGER_INITGAMEPCKSDEV_OFFSET UNITYSDK_OFFSET(0xD012990)
#define RPG_CLIENT_AUDIOMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD010610)
#define RPG_CLIENT_AUDIOMANAGER_ISAUDIODOWNLOADED_OFFSET UNITYSDK_OFFSET(0xD0189A0)
#define RPG_CLIENT_AUDIOMANAGER_ISAUDIOPARTIALDOWNLOADED_OFFSET UNITYSDK_OFFSET(0xD01F1F0)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTEXISTINPCK_OFFSET UNITYSDK_OFFSET(0xD019440)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTINCD_OFFSET UNITYSDK_OFFSET(0xD0196B0)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTPENDING_OFFSET UNITYSDK_OFFSET(0xD016DC0)
#define RPG_CLIENT_AUDIOMANAGER_ISEVENTPLAYING_OFFSET UNITYSDK_OFFSET(0xD016D60)
#define RPG_CLIENT_AUDIOMANAGER_ISLOCALLANGDIREXIST_OFFSET UNITYSDK_OFFSET(0xD01DAC0)
#define RPG_CLIENT_AUDIOMANAGER_ISSOUNDEVENTMARKER_OFFSET UNITYSDK_OFFSET(0xD00ED40)
#define RPG_CLIENT_AUDIOMANAGER_LOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0xD012F70)
#define RPG_CLIENT_AUDIOMANAGER_MUTEALLAUDIOOFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD01ADE0)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWLOADSUCCEED_OFFSET UNITYSDK_OFFSET(0xD01E5D0)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWNLOADFAILED_OFFSET UNITYSDK_OFFSET(0xD01E720)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZEFAIL_OFFSET UNITYSDK_OFFSET(0xD01EB40)
#define RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZESUCCESS_OFFSET UNITYSDK_OFFSET(0xD01E840)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEBGM_OFFSET UNITYSDK_OFFSET(0xD015280)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEEVENTID_OFFSET UNITYSDK_OFFSET(0xD017D00)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEEVENT_OFFSET UNITYSDK_OFFSET(0xD017580)
#define RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINBATTLE_OFFSET UNITYSDK_OFFSET(0xD015880)
#define RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINCUTSCENE_OFFSET UNITYSDK_OFFSET(0xD015420)
#define RPG_CLIENT_AUDIOMANAGER_PAUSEVOICE_OFFSET UNITYSDK_OFFSET(0xD01A720)
#define RPG_CLIENT_AUDIOMANAGER_PAUSE_OFFSET UNITYSDK_OFFSET(0xD01E050)
#define RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_OFFSET UNITYSDK_OFFSET(0xD01B050)
#define RPG_CLIENT_AUDIOMANAGER_POSTATONCE_OFFSET UNITYSDK_OFFSET(0xD013940)
#define RPG_CLIENT_AUDIOMANAGER_POSTBGM_OFFSET UNITYSDK_OFFSET(0xD012780)
#define RPG_CLIENT_AUDIOMANAGER_POSTEVENTWITHBEGINCALLBACK_OFFSET UNITYSDK_OFFSET(0xD013140)
#define RPG_CLIENT_AUDIOMANAGER_POSTEVENT_OFFSET UNITYSDK_OFFSET(0xD012900)
#define RPG_CLIENT_AUDIOMANAGER_POSTEXTERNALSOURCE_OFFSET UNITYSDK_OFFSET(0xD013500)
#define RPG_CLIENT_AUDIOMANAGER_POSTLOOPSFX_OFFSET UNITYSDK_OFFSET(0xD0146F0)
#define RPG_CLIENT_AUDIOMANAGER_POSTSFX_OFFSET UNITYSDK_OFFSET(0xD0143C0)
#define RPG_CLIENT_AUDIOMANAGER_POSTVOICE_OFFSET UNITYSDK_OFFSET(0xD013C90)
#define RPG_CLIENT_AUDIOMANAGER_PREPAREAUDIODOWNLOADDATA_OFFSET UNITYSDK_OFFSET(0xD01CDF0)
#define RPG_CLIENT_AUDIOMANAGER_PREPAREDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xD01DC00)
#define RPG_CLIENT_AUDIOMANAGER_REFRESHVIBRATIONINTENSITY_OFFSET UNITYSDK_OFFSET(0xD019F80)
#define RPG_CLIENT_AUDIOMANAGER_RELOADALLFULLPCKS_OFFSET UNITYSDK_OFFSET(0xD012E50)
#define RPG_CLIENT_AUDIOMANAGER_RELOADVOBANKS_OFFSET UNITYSDK_OFFSET(0xD018710)
#define RPG_CLIENT_AUDIOMANAGER_REMOVESCOPELIMITEDTARGET_OFFSET UNITYSDK_OFFSET(0xD00F3C0)
#define RPG_CLIENT_AUDIOMANAGER_REMOVEVOICETARGET_OFFSET UNITYSDK_OFFSET(0xD014350)
#define RPG_CLIENT_AUDIOMANAGER_RESETLISTNERMODE_OFFSET UNITYSDK_OFFSET(0xD016BE0)
#define RPG_CLIENT_AUDIOMANAGER_RESETSOUNDENGINE_OFFSET UNITYSDK_OFFSET(0xD012630)
#define RPG_CLIENT_AUDIOMANAGER_RESETUILISTNERMODE_OFFSET UNITYSDK_OFFSET(0xD016B70)
#define RPG_CLIENT_AUDIOMANAGER_RESTOREUILISTNERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD016A30)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEBGM_OFFSET UNITYSDK_OFFSET(0xD015350)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xD01EFB0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEEVENTID_OFFSET UNITYSDK_OFFSET(0xD017DE0)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEEVENT_OFFSET UNITYSDK_OFFSET(0xD017750)
#define RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINBATTLE_OFFSET UNITYSDK_OFFSET(0xD015A10)
#define RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINCUTSCENE_OFFSET UNITYSDK_OFFSET(0xD015650)
#define RPG_CLIENT_AUDIOMANAGER_RESUMEVOICE_OFFSET UNITYSDK_OFFSET(0xD01A840)
#define RPG_CLIENT_AUDIOMANAGER_RESUME_OFFSET UNITYSDK_OFFSET(0xD01E0B0)
#define RPG_CLIENT_AUDIOMANAGER_SAVEVOLUME_OFFSET UNITYSDK_OFFSET(0xD01A1B0)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONBGM_OFFSET UNITYSDK_OFFSET(0xD014D50)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_1_OFFSET UNITYSDK_OFFSET(0xD0183C0)
#define RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_OFFSET UNITYSDK_OFFSET(0xD014DB0)
#define RPG_CLIENT_AUDIOMANAGER_SETBGMGAMESTATE_OFFSET UNITYSDK_OFFSET(0xD0170A0)
#define RPG_CLIENT_AUDIOMANAGER_SETBGMVOLUME_OFFSET UNITYSDK_OFFSET(0xD018A80)
#define RPG_CLIENT_AUDIOMANAGER_SETEXCLUDEVOICEMUTE_OFFSET UNITYSDK_OFFSET(0xD015230)
#define RPG_CLIENT_AUDIOMANAGER_SETISMUTEONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xD01AB90)
#define RPG_CLIENT_AUDIOMANAGER_SETLANGUAGE_OFFSET UNITYSDK_OFFSET(0xD0120A0)
#define RPG_CLIENT_AUDIOMANAGER_SETLISTNERMODE_OFFSET UNITYSDK_OFFSET(0xD016760)
#define RPG_CLIENT_AUDIOMANAGER_SETMASTERVOLUME_OFFSET UNITYSDK_OFFSET(0xD018A30)
#define RPG_CLIENT_AUDIOMANAGER_SETMOTION_OFFSET UNITYSDK_OFFSET(0xD019BB0)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTEBGM_OFFSET UNITYSDK_OFFSET(0xD014EB0)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTESFX_OFFSET UNITYSDK_OFFSET(0xD015010)
#define RPG_CLIENT_AUDIOMANAGER_SETMUTEVO_OFFSET UNITYSDK_OFFSET(0xD015120)
#define RPG_CLIENT_AUDIOMANAGER_SETSFXVOLUME_OFFSET UNITYSDK_OFFSET(0xD018B10)
#define RPG_CLIENT_AUDIOMANAGER_SETSPEAKERMODE_OFFSET UNITYSDK_OFFSET(0xD018C30)
#define RPG_CLIENT_AUDIOMANAGER_SETSTATE_1_OFFSET UNITYSDK_OFFSET(0xD01DCA0)
#define RPG_CLIENT_AUDIOMANAGER_SETSTATE_OFFSET UNITYSDK_OFFSET(0xCFF2CA0)
#define RPG_CLIENT_AUDIOMANAGER_SETSWITCH_OFFSET UNITYSDK_OFFSET(0xD0184C0)
#define RPG_CLIENT_AUDIOMANAGER_SETUILISTNERMODE_OFFSET UNITYSDK_OFFSET(0xD0166B0)
#define RPG_CLIENT_AUDIOMANAGER_SETVIBRATIONINTENSITYACTIVE_OFFSET UNITYSDK_OFFSET(0xD01A0A0)
#define RPG_CLIENT_AUDIOMANAGER_SETVOVOLUME_OFFSET UNITYSDK_OFFSET(0xD018BA0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORGROUP_OFFSET UNITYSDK_OFFSET(0xD01CA90)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORSTATE_OFFSET UNITYSDK_OFFSET(0xD01CAB0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMWORLDSTATE_OFFSET UNITYSDK_OFFSET(0xD01CA70)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMEVENTID_OFFSET UNITYSDK_OFFSET(0xD01C960)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMGAMEMODE_OFFSET UNITYSDK_OFFSET(0xD01C980)
#define RPG_CLIENT_AUDIOMANAGER_SET_BGMVOLUME_OFFSET UNITYSDK_OFFSET(0xD012360)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISBGMMUTE_OFFSET UNITYSDK_OFFSET(0xD01C9A0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISSFXMUTE_OFFSET UNITYSDK_OFFSET(0xD01C9C0)
#define RPG_CLIENT_AUDIOMANAGER_SET_ISVOMUTE_OFFSET UNITYSDK_OFFSET(0xD01C9E0)
#define RPG_CLIENT_AUDIOMANAGER_SET_MASTERVOLUME_OFFSET UNITYSDK_OFFSET(0xD012220)
#define RPG_CLIENT_AUDIOMANAGER_SET_SFXVOLUME_OFFSET UNITYSDK_OFFSET(0xD0123D0)
#define RPG_CLIENT_AUDIOMANAGER_SET_SPEAKERMODE_OFFSET UNITYSDK_OFFSET(0xD0124B0)
#define RPG_CLIENT_AUDIOMANAGER_SET_VOVOLUME_OFFSET UNITYSDK_OFFSET(0xD012440)
#define RPG_CLIENT_AUDIOMANAGER_SHOWSIZE_OFFSET UNITYSDK_OFFSET(0xD01CC50)
#define RPG_CLIENT_AUDIOMANAGER_STARTDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xD01E110)
#define RPG_CLIENT_AUDIOMANAGER_STOPALLLOOPSFX_OFFSET UNITYSDK_OFFSET(0xD014C00)
#define RPG_CLIENT_AUDIOMANAGER_STOPDOWNLOAD_OFFSET UNITYSDK_OFFSET(0xD01EDB0)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENTID_OFFSET UNITYSDK_OFFSET(0xD0149F0)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENTSBYEVENTNAME_OFFSET UNITYSDK_OFFSET(0xD017EC0)
#define RPG_CLIENT_AUDIOMANAGER_STOPEVENT_OFFSET UNITYSDK_OFFSET(0xD0178E0)
#define RPG_CLIENT_AUDIOMANAGER_STOPLOOPSFX_OFFSET UNITYSDK_OFFSET(0xD014910)
#define RPG_CLIENT_AUDIOMANAGER_TICKDYNAMICLISTENER_OFFSET UNITYSDK_OFFSET(0xD015BA0)
#define RPG_CLIENT_AUDIOMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xD0103A0)
#define RPG_CLIENT_AUDIOMANAGER_TRYGETPLAYINGEVENTPOSITION_OFFSET UNITYSDK_OFFSET(0xD018340)
#define RPG_CLIENT_AUDIOMANAGER_TRYGETUILISTNERSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xD016950)
#define RPG_CLIENT_AUDIOMANAGER_TRYPLAYJOINTEAMCHARACTERVO_OFFSET UNITYSDK_OFFSET(0xD01A960)
#define RPG_CLIENT_AUDIOMANAGER_TRYSTOPJOINTEAMCHARACTERVO_OFFSET UNITYSDK_OFFSET(0xD01AAE0)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADINITGAMEPCKS_OFFSET UNITYSDK_OFFSET(0xD0130D0)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADMININUMBANK_OFFSET UNITYSDK_OFFSET(0xD012D40)
#define RPG_CLIENT_AUDIOMANAGER_UNLOADUNUSEDMISSIONPCKS_OFFSET UNITYSDK_OFFSET(0xD01AFC0)
#define RPG_CLIENT_AUDIOMANAGER_UNMUTEALLAUDIOOFGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xD01AF20)
#define RPG_CLIENT_AUDIOMANAGER_UPDATEAUDIODOWNLOADSTATE_OFFSET UNITYSDK_OFFSET(0xD01D650)
#define RPG_CLIENT_AUDIOMANAGER_UPDATEPARTIALDOWNLOADLANG_OFFSET UNITYSDK_OFFSET(0xD01EC30)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__247_0_OFFSET UNITYSDK_OFFSET(0xD020450)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__247_1_OFFSET UNITYSDK_OFFSET(0xD020460)
#define RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__247_2_OFFSET UNITYSDK_OFFSET(0xD020470)
#define RPG_CLIENT_AUDIOMANAGER__DEBUGADD_OFFSET UNITYSDK_OFFSET(0xD00F6B0)
#define RPG_CLIENT_AUDIOMANAGER__DEBUGREMOVE_OFFSET UNITYSDK_OFFSET(0xD00F750)
#define RPG_CLIENT_AUDIOMANAGER__DOPOST_OFFSET UNITYSDK_OFFSET(0xD01B300)
#define RPG_CLIENT_AUDIOMANAGER__DOWNLOADDISPOSE_OFFSET UNITYSDK_OFFSET(0xD00FF70)
#define RPG_CLIENT_AUDIOMANAGER__GETNEEDBANKS_OFFSET UNITYSDK_OFFSET(0xD01B220)
#define RPG_CLIENT_AUDIOMANAGER__GETSFXEVENTNAME_OFFSET UNITYSDK_OFFSET(0xD0145A0)
#define RPG_CLIENT_AUDIOMANAGER__GETTEAMCHARACTERVOPLAYER_OFFSET UNITYSDK_OFFSET(0xD01A9D0)
#define RPG_CLIENT_AUDIOMANAGER__GETVOICEEVENTNAME_OFFSET UNITYSDK_OFFSET(0xD013F30)
#define RPG_CLIENT_AUDIOMANAGER__INITLISTENER_OFFSET UNITYSDK_OFFSET(0xD011500)
#define RPG_CLIENT_AUDIOMANAGER__INITUIBUTTONSOUNDTYPESTRINGCACHE_OFFSET UNITYSDK_OFFSET(0xD0118D0)
#define RPG_CLIENT_AUDIOMANAGER__LOADAUDIOCONFIG_OFFSET UNITYSDK_OFFSET(0xD011440)
#define RPG_CLIENT_AUDIOMANAGER__LOADINITBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0xD01BEA0)
#define RPG_CLIENT_AUDIOMANAGER__ONANDROIDHEADSETBLUETOOTHPERMISSIONREQUESTRESULT_OFFSET UNITYSDK_OFFSET(0xD01C3F0)
#define RPG_CLIENT_AUDIOMANAGER__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0xD01C790)
#define RPG_CLIENT_AUDIOMANAGER__ONINPUTDEVICECLASSSWITCHED_OFFSET UNITYSDK_OFFSET(0xD01C320)
#define RPG_CLIENT_AUDIOMANAGER__ONSDKNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xD01C470)
#define RPG_CLIENT_AUDIOMANAGER__POSTAFTERBANKPREPARED_OFFSET UNITYSDK_OFFSET(0xD0131F0)
#define RPG_CLIENT_AUDIOMANAGER__POSTATONCE_OFFSET UNITYSDK_OFFSET(0xD0139D0)
#define RPG_CLIENT_AUDIOMANAGER__POSTCALLBACK_OFFSET UNITYSDK_OFFSET(0xD01B7B0)
#define RPG_CLIENT_AUDIOMANAGER__PRELOADEVENT_OFFSET UNITYSDK_OFFSET(0xD012B00)
#define RPG_CLIENT_AUDIOMANAGER__RAYCASTOCCLUSION_OFFSET UNITYSDK_OFFSET(0xD018FA0)
#define RPG_CLIENT_AUDIOMANAGER__REFRESHVIBRATIONLEVEL_OFFSET UNITYSDK_OFFSET(0xD019E40)
#define RPG_CLIENT_AUDIOMANAGER__REMOVESOUNDBANKUSAGE_OFFSET UNITYSDK_OFFSET(0xD017C50)
#define RPG_CLIENT_AUDIOMANAGER__SETEVENTCD_OFFSET UNITYSDK_OFFSET(0xD019A60)
#define RPG_CLIENT_AUDIOMANAGER__SETINNERSTATE_OFFSET UNITYSDK_OFFSET(0xD00FEB0)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERAWITHDIST_OFFSET UNITYSDK_OFFSET(0xD016020)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERA_OFFSET UNITYSDK_OFFSET(0xD015E70)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWINGWITHDIRECT_OFFSET UNITYSDK_OFFSET(0xD016550)
#define RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWING_OFFSET UNITYSDK_OFFSET(0xD015C90)
#define RPG_CLIENT_AUDIOMANAGER__TICKMUSICVISUALIZE_OFFSET UNITYSDK_OFFSET(0xD00F0D0)
#define RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENTS_OFFSET UNITYSDK_OFFSET(0xD0104E0)
#define RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENT_OFFSET UNITYSDK_OFFSET(0xD01B5B0)
#define RPG_CLIENT_AUDIOMANAGER__TICKSCOPELIMIT_OFFSET UNITYSDK_OFFSET(0xD00F4D0)
#define RPG_CLIENT_AUDIOMANAGER__UNLOADBANKCALLBACK_OFFSET UNITYSDK_OFFSET(0xD01C0E0)
#define RPG_CLIENT_AUDIOMANAGER__UPDATEAUDIOLISTENERMODE_OFFSET UNITYSDK_OFFSET(0xD016CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudioManager_TypeDefinitionIndex = 61006;

	class AudioManager : public ::System::Object
	{
	public:
		::System::String* s_ExternalSourceFormat; // 0x10
		::System::String* DownLoadAudioKey; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* _AudioListenerInfoList; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UIButtonSoundType, ::System::String*>* _UIButtonSoundTypeStringCache; // 0x28
		::DHCNPPICIAO* _AudioPlayingCacheData_k__BackingField; // 0x30
		::System::Action* audioSizeFailCb; // 0x38
		::FLKJJAMDMPM* _PckMgr; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::Client::MusicVisualizeDataSourceType, ::EBIKHHMFBNE*>* _MusicVisualzieDataDict; // 0x48
		::RPG::Client::AudioManager_AudioListenerInfo* _ListenerInfo; // 0x50
		::IDEAGHGONNI* audioLangSizeLoader; // 0x58
		::System::Collections::Generic::Stack_1<::RPG::GameCore::AudioGameState>* _BGMGameStateStack; // 0x60
		::System::String* _AdventureBGMWorldState_k__BackingField; // 0x68
		::PJHGKCEAIBC* _SoundBankTicker; // 0x70
		::NCDGLNLIBEA* SoundBankLookUpData; // 0x78
		::System::Collections::Generic::List_1<::System::UInt32>* _PreLoadBanks; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* _VoiceTargets; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt64>* EventCDDict; // 0x90
		::Il2CppArray<::UnityEngine::RaycastHit>* _OcclusionHitInfos; // 0x98
		::AkCallbackManager_EventCallback* _PostCallBackAction; // 0xA0
		::System::String* _AdventureBGMFloorGroup_k__BackingField; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* reverseDict; // 0xB0
		::System::String* s_DefaultListenerName; // 0xB8
		::System::String* _AdventureBGMFloorState_k__BackingField; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _LoopSFXPlayingIds; // 0xC8
		::RPG::GameCore::AudioConfig* AudioConfig; // 0xD0
		::System::Collections::Generic::HashSet_1<::System::String*>* downloadedLanguage; // 0xD8
		::System::Collections::Generic::HashSet_1<::System::String*>* partialDownloadedLanguage; // 0xE0
		::System::Collections::Generic::List_1<::System::Object*>* _LimitedInstanceList; // 0xE8
		::System::Collections::Generic::HashSet_1<::System::Int32>* _WillMuteGameObjectIDs; // 0xF0
		::OCBJNCNNCNE* updateOneAudioLangAsset; // 0xF8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::AudioLanguageItem*>* languageItems; // 0x100
		::System::Action* audioSizeSuccessCb; // 0x108
		::RPG::GameCore::JukeBoxMusicTimesConfig* JukeBoxConfig; // 0x110
		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* items; // 0x118
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _VoiceTypeExternalEventDict; // 0x120
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int64>* audioDict; // 0x128
		::System::Collections::Generic::CacheLinkedList_1<::NCOONILMDAC*>* _PendingAudioEvents; // 0x130
		::LJLBLAEMGOA* _TeamCharacterVOPlayer; // 0x138
		::UnityEngine::GameObject* _ListenerObject; // 0x140
		::RPG::GameCore::PropSoundOverrideConfig* _PropSoundOverrideConfig; // 0x148
		::System::Single _ScopeLimitTickCooldown; // 0x150
		::System::Boolean ShowSizeDirty; // 0x154
		::System::Boolean _IsUsingMiniBank; // 0x155
		::System::Boolean _UsePckMode; // 0x156
		::System::Boolean _IsBGMMute_k__BackingField; // 0x157
		::System::Single s_LoadSoundBankProtectTime; // 0x158
		::System::UInt32 _VOVolume; // 0x15C
		::System::UInt64 _CurrentOutputID; // 0x160
		::System::Single _ScopeLimitTickInterval; // 0x168
		::RPG::Client::AudioManager_InnerState _InnerState; // 0x16C
		::System::Boolean isDownloading; // 0x170
		::System::Boolean _IsMuteOnLostFocus; // 0x171
		::System::Boolean ShowSizeState; // 0x172
		::System::Byte _padding0[0x1];
		::System::UInt32 _BGMEventID_k__BackingField; // 0x174
		::System::UInt32 _BGMVolume; // 0x178
		::System::UInt32 _MasterVolume; // 0x17C
		::RPG::GameCore::AudioGameState _BGMGameMode_k__BackingField; // 0x180
		::System::UInt32 _SFXVolume; // 0x184
		::RPG::Client::AudioManager_AudioDownloadState downloadState; // 0x188
		::RPG::Client::AudioSettings_SpeakerModeType _SpeakerMode; // 0x18C
		::System::Boolean _IsSFXMute_k__BackingField; // 0x190
		::System::Boolean _IsResourceLoaded; // 0x191
		::System::Boolean _IsVOMute_k__BackingField; // 0x192
		::System::Boolean _ExcludeVoiceMute; // 0x193
		static ::System::UInt32* StaticGet_MAX_AUDIO_VOLUME()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "AudioManager")->GetStaticField(0x103E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CCTOR_OFFSET))();
		}

		::System::Boolean IsSoundEventMarker(::AkMarkerCallbackInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AkMarkerCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISSOUNDEVENTMARKER_OFFSET))(this, a1);
		}

		::EBIKHHMFBNE* GetMusicVisualizeData(::RPG::Client::MusicVisualizeDataSourceType a1)
		{
			return ((::EBIKHHMFBNE*(*)(::PVOID, ::RPG::Client::MusicVisualizeDataSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETMUSICVISUALIZEDATA_OFFSET))(this, a1);
		}

		::System::Void _TickMusicVisualize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKMUSICVISUALIZE_OFFSET))(this, a1);
		}

		::System::Void AddScopeLimitedTarget(::HNCKCFCMCBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNCKCFCMCBK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ADDSCOPELIMITEDTARGET_OFFSET))(this, a1);
		}

		::System::Void RemoveScopeLimitedTarget(::HNCKCFCMCBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNCKCFCMCBK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REMOVESCOPELIMITEDTARGET_OFFSET))(this, a1);
		}

		::System::Void _TickScopeLimit(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKSCOPELIMIT_OFFSET))(this, a1);
		}

		::System::Void _DebugAdd(::HNCKCFCMCBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNCKCFCMCBK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DEBUGADD_OFFSET))(this, a1);
		}

		::System::Void _DebugRemove(::HNCKCFCMCBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNCKCFCMCBK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DEBUGREMOVE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void BeforeRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_BEFORERESTART_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_INIT_OFFSET))(this);
		}

		::System::Void ResetSoundEngine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESETSOUNDENGINE_OFFSET))(this);
		}

		::System::Void PostBGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTBGM_OFFSET))(this, a1);
		}

		::System::Void InitGamePcksDev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_INITGAMEPCKSDEV_OFFSET))(this);
		}

		::System::Void ReloadAllFullPcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RELOADALLFULLPCKS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* AsyncLoadInitGamePcks(::System::Action* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ASYNCLOADINITGAMEPCKS_OFFSET))(this, a1);
		}

		::System::Void LoadInitGamePcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_LOADINITGAMEPCKS_OFFSET))(this);
		}

		::System::Void UnloadMininumBank()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNLOADMININUMBANK_OFFSET))(this);
		}

		::System::Void UnloadInitGamePcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNLOADINITGAMEPCKS_OFFSET))(this);
		}

		::System::UInt32 PostEventWithBeginCallback(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::System::Action_1<::System::UInt32>* a4, ::AkCallbackType a5)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTEVENTWITHBEGINCALLBACK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 PostEvent(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::AkCallbackType a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTEVENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 PostExternalSource(::System::String* a1, ::AkExternalSourceInfoArray* a2, ::UnityEngine::GameObject* a3, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::AkExternalSourceInfoArray*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTEXTERNALSOURCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::AkExternalSourceInfoArray* GetExternalSourceInfo(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::AkExternalSourceInfoArray*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETEXTERNALSOURCEINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 PostAtOnce(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::AkCallbackType a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTATONCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 PostVoice(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::System::Action_1<::System::UInt32>* a4, ::AkCallbackType a5, ::System::String* a6)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*, ::AkCallbackType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTVOICE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AddVoiceTarget(::System::UInt32 a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ADDVOICETARGET_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveVoiceTarget(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REMOVEVOICETARGET_OFFSET))(this, a1);
		}

		::System::UInt32 PostSFX(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::System::Action_1<::System::UInt32>* a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTSFX_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 PostLoopSFX(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_POSTLOOPSFX_OFFSET))(this, a1);
		}

		::System::Void StopLoopSFX(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPLOOPSFX_OFFSET))(this, a1, a2);
		}

		::System::Void StopAllLoopSFX()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPALLLOOPSFX_OFFSET))(this);
		}

		::System::Void SeekOnBGM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SEEKONBGM_OFFSET))(this, a1);
		}

		::System::Void SetMuteBGM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMUTEBGM_OFFSET))(this, a1, a2);
		}

		::System::Void SetMuteSFX(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMUTESFX_OFFSET))(this, a1);
		}

		::System::Void SetMuteVO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMUTEVO_OFFSET))(this, a1);
		}

		::System::Void SetExcludeVoiceMute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETEXCLUDEVOICEMUTE_OFFSET))(this, a1);
		}

		::System::Void PauseBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEBGM_OFFSET))(this);
		}

		::System::Void ResumeBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEBGM_OFFSET))(this);
		}

		::System::Void PauseSoundInCutScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINCUTSCENE_OFFSET))(this);
		}

		::System::Void ResumeSoundInCutScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINCUTSCENE_OFFSET))(this);
		}

		::System::Void PauseSoundInBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSESOUNDINBATTLE_OFFSET))(this);
		}

		::System::Void ResumeSoundInBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMESOUNDINBATTLE_OFFSET))(this);
		}

		::System::Void TickDynamicListener(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TICKDYNAMICLISTENER_OFFSET))(this, a1);
		}

		::System::Void SetUIListnerMode(::RPG::Client::AudioListenerMode a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Nullable_1<::UnityEngine::Vector3> a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioListenerMode, ::UnityEngine::Transform*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETUILISTNERMODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean TryGetUIListnerSnapshot(::RPG::Client::AudioManager_UIListenerSnapshot a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AudioManager_UIListenerSnapshot))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYGETUILISTNERSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Void RestoreUIListnerSnapshot(::RPG::Client::AudioManager_UIListenerSnapshot a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioManager_UIListenerSnapshot))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESTOREUILISTNERSNAPSHOT_OFFSET))(this, a1);
		}

		::System::Void ResetUIListnerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESETUILISTNERMODE_OFFSET))(this);
		}

		::System::Void ResetListnerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESETLISTNERMODE_OFFSET))(this);
		}

		::System::Void SetListnerMode(::RPG::Client::AudioListenerMode a1, ::UnityEngine::Transform* a2, ::System::Single a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::RPG::Client::AudioListenerType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioListenerMode, ::UnityEngine::Transform*, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>, ::RPG::Client::AudioListenerType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETLISTNERMODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean IsEventPlaying(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTPLAYING_OFFSET))(this, a1);
		}

		::System::Boolean IsEventPending(::System::String* a1, ::UnityEngine::GameObject* a2, ::NCOONILMDAC* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::NCOONILMDAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTPENDING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetBGMGameState(::RPG::GameCore::AudioGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AudioGameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETBGMGAMESTATE_OFFSET))(this, a1);
		}

		::System::Void BackToPreviousBGMGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_BACKTOPREVIOUSBGMGAMESTATE_OFFSET))(this);
		}

		::System::Void ClearBGMGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CLEARBGMGAMESTATE_OFFSET))(this);
		}

		::System::Void PauseEvent(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void ResumeEvent(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BreakEvent(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_BREAKEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void StopEvent(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPEVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopEventID(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPEVENTID_OFFSET))(this, a1, a2);
		}

		::System::Void PauseEventID(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEEVENTID_OFFSET))(this, a1, a2);
		}

		::System::Void ResumeEventID(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEEVENTID_OFFSET))(this, a1, a2);
		}

		::System::Void StopEventsByEventName(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPEVENTSBYEVENTNAME_OFFSET))(this, a1, a2);
		}

		::System::Void GameobjectSoundFade(::System::Boolean a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GAMEOBJECTSOUNDFADE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEventIDListByEventName(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETEVENTIDLISTBYEVENTNAME_OFFSET))(this, a1);
		}

		::ILKDFKIBOKA* GetPlayingInfoByPlayingID(::System::UInt32 a1)
		{
			return ((::ILKDFKIBOKA*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPLAYINGINFOBYPLAYINGID_OFFSET))(this, a1);
		}

		::System::Int32 GetPlayingEventPositionByEventName(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITIONBYEVENTNAME_OFFSET))(this, a1);
		}

		::System::Boolean TryGetPlayingEventPosition(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYGETPLAYINGEVENTPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetPlayingEventPosition(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPLAYINGEVENTPOSITION_OFFSET))(this, a1);
		}

		::System::Void SeekOnEventID(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_OFFSET))(this, a1, a2);
		}

		::System::Void SeekOnEventID_1(::System::UInt32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SEEKONEVENTID_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean SetSwitch(::System::String* a1, ::System::String* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSWITCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SetState(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void ReloadVoBanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RELOADVOBANKS_OFFSET))(this);
		}

		::System::String* GetUIButtonSoundEventByType(::RPG::Client::UIButtonSoundType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::UIButtonSoundType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETUIBUTTONSOUNDEVENTBYTYPE_OFFSET))(this, a1);
		}

		::System::Void SetLanguage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETLANGUAGE_OFFSET))(this, a1);
		}

		::System::Void SetMasterVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMASTERVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetBGMVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETBGMVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetSFXVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSFXVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetVOVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETVOVOLUME_OFFSET))(this, a1);
		}

		::System::Void SetSpeakerMode(::RPG::Client::AudioSettings_SpeakerModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings_SpeakerModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSPEAKERMODE_OFFSET))(this, a1);
		}

		::System::Single CheckEmitterHasOcclusion(::UnityEngine::Transform* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CHECKEMITTERHASOCCLUSION_OFFSET))(this, a1);
		}

		::System::Boolean IsEventExistInPck(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTEXISTINPCK_OFFSET))(this, a1);
		}

		::System::Int32 GetJukeBoxMusicTime(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETJUKEBOXMUSICTIME_OFFSET))(this, a1);
		}

		::System::Boolean IsEventInCD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISEVENTINCD_OFFSET))(this, a1);
		}

		::System::Boolean CanPostEventInCD(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANPOSTEVENTINCD_OFFSET))(this, a1, a2);
		}

		::System::Void SetMotion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETMOTION_OFFSET))(this);
		}

		::System::Void RefreshVibrationIntensity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_REFRESHVIBRATIONINTENSITY_OFFSET))(this);
		}

		::System::Void SetVibrationIntensityActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETVIBRATIONINTENSITYACTIVE_OFFSET))(this, a1);
		}

		::System::Void SaveVolume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SAVEVOLUME_OFFSET))(this);
		}

		::System::Void PauseVoice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSEVOICE_OFFSET))(this, a1);
		}

		::System::Void ResumeVoice(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEVOICE_OFFSET))(this, a1);
		}

		::System::Void TryPlayJoinTeamCharacterVO(::RPG::AvatarSystem::IAvatar* a1, ::RPG::Client::TeamData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYPLAYJOINTEAMCHARACTERVO_OFFSET))(this, a1, a2);
		}

		::System::Void TryStopJoinTeamCharacterVO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_TRYSTOPJOINTEAMCHARACTERVO_OFFSET))(this);
		}

		::System::Boolean GetIsMuteOnLostFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETISMUTEONLOSTFOCUS_OFFSET))(this);
		}

		::System::Void SetIsMuteOnLostFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETISMUTEONLOSTFOCUS_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropSoundConfigOverrideConfig* GetPropSoundOverrideConfig(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::PropSoundConfigOverrideConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPROPSOUNDOVERRIDECONFIG_OFFSET))(this, a1);
		}

		::System::Void MuteAllAudioOfGameobject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_MUTEALLAUDIOOFGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void UnmuteAllAudioOfGameobject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNMUTEALLAUDIOOFGAMEOBJECT_OFFSET))(this, a1);
		}

		::System::Void UnloadUnusedMissionPcks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UNLOADUNUSEDMISSIONPCKS_OFFSET))(this);
		}

		::FLKJJAMDMPM* GetPckMgr()
		{
			return ((::FLKJJAMDMPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPCKMGR_OFFSET))(this);
		}

		::System::Void PlayUICharacterVO(::RPG::GameCore::AdventureCharacterVOType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterVOType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PLAYUICHARACTERVO_OFFSET))(this, a1, a2);
		}

		::System::Void _InitListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__INITLISTENER_OFFSET))(this);
		}

		::System::UInt32 _PostAtOnce(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::System::Action_1<::System::UInt32>* a4, ::AkExternalSourceInfoArray* a5, ::AkCallbackType a6)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::System::Action_1<::System::UInt32>*, ::AkExternalSourceInfoArray*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__POSTATONCE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::UInt32 _PostAfterBankPrepared(::System::String* a1, ::UnityEngine::GameObject* a2, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a3, ::AkExternalSourceInfoArray* a4, ::System::Action_1<::System::UInt32>* a5, ::AkCallbackType a6)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::AkExternalSourceInfoArray*, ::System::Action_1<::System::UInt32>*, ::AkCallbackType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__POSTAFTERBANKPREPARED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _TickPendingEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENTS_OFFSET))(this);
		}

		::System::Boolean _TickPendingEvent(::NCOONILMDAC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCOONILMDAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKPENDINGEVENT_OFFSET))(this, a1);
		}

		::System::UInt32 _DoPost(::NCOONILMDAC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::NCOONILMDAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DOPOST_OFFSET))(this, a1);
		}

		::System::Void _PostCallback(::System::Object* a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__POSTCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _LoadInitBankCallback(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__LOADINITBANKCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _UnLoadBankCallback(::System::UInt32 a1, ::System::IntPtr a2, ::AKRESULT a3, ::System::Object* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::IntPtr, ::AKRESULT, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__UNLOADBANKCALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RemoveSoundBankUsage(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__REMOVESOUNDBANKUSAGE_OFFSET))(this, a1);
		}

		::System::Void _TickListenerFollowing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWING_OFFSET))(this);
		}

		::System::Void _TickListenerFollowingWithDirect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKLISTENERFOLLOWINGWITHDIRECT_OFFSET))(this);
		}

		::System::Void _TickListenerCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERA_OFFSET))(this);
		}

		::System::Void _TickListenerCameraWithDist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__TICKLISTENERCAMERAWITHDIST_OFFSET))(this);
		}

		::System::Void _LoadAudioConfig(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__LOADAUDIOCONFIG_OFFSET))(this, a1);
		}

		::System::Void _InitUIButtonSoundTypeStringCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__INITUIBUTTONSOUNDTYPESTRINGCACHE_OFFSET))(this);
		}

		::System::Void _PreLoadEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__PRELOADEVENT_OFFSET))(this);
		}

		::System::Void _GetNeedBanks(::System::String* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETNEEDBANKS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _RayCastOcclusion(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__RAYCASTOCCLUSION_OFFSET))(this, a1, a2);
		}

		::System::String* _GetVoiceEventName(::RPG::GameCore::VoicePlayType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::VoicePlayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETVOICEEVENTNAME_OFFSET))(this, a1);
		}

		::System::String* _GetSFXEventName(::RPG::GameCore::SFXPlayType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::SFXPlayType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETSFXEVENTNAME_OFFSET))(this, a1);
		}

		::System::Void _SetEventCD(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__SETEVENTCD_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshVibrationLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__REFRESHVIBRATIONLEVEL_OFFSET))(this);
		}

		::System::Void _OnInputDeviceClassSwitched(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONINPUTDEVICECLASSSWITCHED_OFFSET))(this, a1);
		}

		::System::Void _OnAndroidHeadsetBluetoothPermissionRequestResult(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONANDROIDHEADSETBLUETOOTHPERMISSIONREQUESTRESULT_OFFSET))(this, a1);
		}

		::System::Void _OnSDKNotification(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONSDKNOTIFICATION_OFFSET))(this, a1);
		}

		::System::Void _OnFocusChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ONFOCUSCHANGED_OFFSET))(this, a1);
		}

		::LJLBLAEMGOA* _GetTeamCharacterVOPlayer()
		{
			return ((::LJLBLAEMGOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__GETTEAMCHARACTERVOPLAYER_OFFSET))(this);
		}

		::System::Void _UpdateAudioListenerMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__UPDATEAUDIOLISTENERMODE_OFFSET))(this);
		}

		::System::Void _SetInnerState(::RPG::Client::AudioManager_InnerState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioManager_InnerState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__SETINNERSTATE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_ListenerObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_LISTENEROBJECT_OFFSET))(this);
		}

		::System::UInt32 get_BGMEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_BGMEVENTID_OFFSET))(this);
		}

		::System::Void set_BGMEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_BGMEVENTID_OFFSET))(this, a1);
		}

		::RPG::GameCore::AudioGameState get_BGMGameMode()
		{
			return ((::RPG::GameCore::AudioGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_BGMGAMEMODE_OFFSET))(this);
		}

		::System::Void set_BGMGameMode(::RPG::GameCore::AudioGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AudioGameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_BGMGAMEMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBGMMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ISBGMMUTE_OFFSET))(this);
		}

		::System::Void set_IsBGMMute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ISBGMMUTE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSFXMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ISSFXMUTE_OFFSET))(this);
		}

		::System::Void set_IsSFXMute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ISSFXMUTE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVOMute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ISVOMUTE_OFFSET))(this);
		}

		::System::Void set_IsVOMute(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ISVOMUTE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MasterVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_MASTERVOLUME_OFFSET))(this);
		}

		::System::Void set_MasterVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_MASTERVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 get_BGMVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_BGMVOLUME_OFFSET))(this);
		}

		::System::Void set_BGMVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_BGMVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 get_SFXVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_SFXVOLUME_OFFSET))(this);
		}

		::System::Void set_SFXVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_SFXVOLUME_OFFSET))(this, a1);
		}

		::System::UInt32 get_VOVolume()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_VOVOLUME_OFFSET))(this);
		}

		::System::Void set_VOVolume(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_VOVOLUME_OFFSET))(this, a1);
		}

		::RPG::Client::AudioSettings_SpeakerModeType get_SpeakerMode()
		{
			return ((::RPG::Client::AudioSettings_SpeakerModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_SPEAKERMODE_OFFSET))(this);
		}

		::System::Void set_SpeakerMode(::RPG::Client::AudioSettings_SpeakerModeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioSettings_SpeakerModeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_SPEAKERMODE_OFFSET))(this, a1);
		}

		::DHCNPPICIAO* get_AudioPlayingCacheData()
		{
			return ((::DHCNPPICIAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_AUDIOPLAYINGCACHEDATA_OFFSET))(this);
		}

		::System::Boolean get_UsePckMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_USEPCKMODE_OFFSET))(this);
		}

		::System::Boolean get_CanSetMuteOnLostFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_CANSETMUTEONLOSTFOCUS_OFFSET))(this);
		}

		::System::String* get_AdventureBGMWorldState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMWORLDSTATE_OFFSET))(this);
		}

		::System::Void set_AdventureBGMWorldState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMWORLDSTATE_OFFSET))(this, a1);
		}

		::System::String* get_AdventureBGMFloorGroup()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORGROUP_OFFSET))(this);
		}

		::System::Void set_AdventureBGMFloorGroup(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORGROUP_OFFSET))(this, a1);
		}

		::System::String* get_AdventureBGMFloorState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_ADVENTUREBGMFLOORSTATE_OFFSET))(this);
		}

		::System::Void set_AdventureBGMFloorState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SET_ADVENTUREBGMFLOORSTATE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_DefaultEmitterObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GET_DEFAULTEMITTEROBJECT_OFFSET))(this);
		}

		::System::Boolean CanSwitchAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANSWITCHAUDIO_OFFSET))(this);
		}

		::System::Boolean CanDelete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANDELETE_OFFSET))(this);
		}

		::System::Boolean ShowSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SHOWSIZE_OFFSET))(this);
		}

		::System::Void PrepareAudioDownloadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PREPAREAUDIODOWNLOADDATA_OFFSET))(this);
		}

		::System::Void UpdateAudioDownloadState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UPDATEAUDIODOWNLOADSTATE_OFFSET))(this);
		}

		::System::Void PrepareDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PREPAREDOWNLOAD_OFFSET))(this);
		}

		::System::Boolean AsyncUpdateLangSize(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ASYNCUPDATELANGSIZE_OFFSET))(this, a1, a2);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUME_OFFSET))(this);
		}

		::System::Void StartDownload(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STARTDOWNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAudioDowloadSucceed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWLOADSUCCEED_OFFSET))(this, a1);
		}

		::System::Void OnAudioDownloadFailed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIODOWNLOADFAILED_OFFSET))(this, a1);
		}

		::System::Void OnAudioSizeSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZESUCCESS_OFFSET))(this);
		}

		::System::Void OnAudioSizeFail(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ONAUDIOSIZEFAIL_OFFSET))(this, a1);
		}

		::System::Void UpdatePartialDownloadLang(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_UPDATEPARTIALDOWNLOADLANG_OFFSET))(this, a1);
		}

		::System::Boolean IsLocalLangDirExist(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISLOCALLANGDIREXIST_OFFSET))(this, a1);
		}

		::System::Void StopDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_STOPDOWNLOAD_OFFSET))(this);
		}

		::System::Void ResumeDownload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_RESUMEDOWNLOAD_OFFSET))(this);
		}

		::System::Void CancelDownloadAudio(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_CANCELDOWNLOADAUDIO_OFFSET))(this, a1);
		}

		::RPG::Client::AudioManager_AudioDownloadState GetDownloadStage()
		{
			return ((::RPG::Client::AudioManager_AudioDownloadState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADSTAGE_OFFSET))(this);
		}

		::System::Boolean ApplyAudio(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_APPLYAUDIO_OFFSET))(this, a1);
		}

		::System::Boolean IsAudioDownloaded(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISAUDIODOWNLOADED_OFFSET))(this, a1);
		}

		::System::Boolean IsAudioPartialDownloaded(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_ISAUDIOPARTIALDOWNLOADED_OFFSET))(this, a1);
		}

		::System::String* GetAudioSize(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETAUDIOSIZE_OFFSET))(this, a1);
		}

		::System::Int32 GetDownloadedAudioCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOCOUNT_OFFSET))(this);
		}

		::RPG::Client::AudioLanguageItem* GetAudioItemByAudioKey(::System::String* a1)
		{
			return ((::RPG::Client::AudioLanguageItem*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETAUDIOITEMBYAUDIOKEY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* GetDownloadedAudioItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETDOWNLOADEDAUDIOITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>* GetPartialDownloadedAudioItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AudioLanguageItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_GETPARTIALDOWNLOADEDAUDIOITEMS_OFFSET))(this);
		}

		::System::Void DeleteAudioPack(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_DELETEAUDIOPACK_OFFSET))(this, a1);
		}

		::System::Void SetState_1(::RPG::Client::AudioManager_AudioDownloadState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AudioManager_AudioDownloadState))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER_SETSTATE_1_OFFSET))(this, a1);
		}

		::System::Void _DownloadDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__DOWNLOADDISPOSE_OFFSET))(this);
		}

		::System::Void _AsyncUpdateLangSize_b__247_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__247_0_OFFSET))(this);
		}

		::System::Void _AsyncUpdateLangSize_b__247_1(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__247_1_OFFSET))(this, a1);
		}

		::System::Void _AsyncUpdateLangSize_b__247_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIOMANAGER__ASYNCUPDATELANGSIZE_B__247_2_OFFSET))(this);
		}

	};
}
