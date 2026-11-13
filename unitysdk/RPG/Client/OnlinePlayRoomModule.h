#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/OnlineRoomDIYType.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class AGJOIILGIHK;
class CGPJCPKCPHC;
class IKBDJLNEPBH;
class JBJNJPAOCDA;
class KFGPAHIEDKH;
class KHBEIDOCBCN;
class POBLGKIGINE;
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LittleWheelSelectConfig; }
namespace RPG::Client { class OnlinePlayRoomModule_PendingOutgoingVisitInfo; }
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitDisplayData; }
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitUIDInfo; }
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::SocialPlay { class OnlinePlayMapContext; }
namespace RPG::Client::SocialPlay { class SocialPlayMapInfo; }
namespace RPG::Client::SocialPlay { class SocialPlayMapUIBridge; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE_CLEARPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x1ADA8E10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_CREATEONLINEPLAYMAPCONTEXT_OFFSET UNITYSDK_OFFSET(0x1ADA96D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE7E00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISBANDONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x1ADA7F70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADA1180)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x1ADA1840)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ENUMERATEGUESTENTITIES_OFFSET UNITYSDK_OFFSET(0x1ADA7C90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCHATMESSAGEDATALIST_OFFSET UNITYSDK_OFFSET(0x1ADA8530)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCURRENTONLINEFLOORMAPINFO_OFFSET UNITYSDK_OFFSET(0x1ADA7920)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCURRENTONLINEROOMTYPE_OFFSET UNITYSDK_OFFSET(0x1ADA7A10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCURRENTSESSIONMAPNAME_OFFSET UNITYSDK_OFFSET(0x1ADA85A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETMAPUIBRIDGELIST_OFFSET UNITYSDK_OFFSET(0x1ADA93A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALISTBYFLOOR_OFFSET UNITYSDK_OFFSET(0x1ADA6B90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET UNITYSDK_OFFSET(0x1AD9F720)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET UNITYSDK_OFFSET(0x1ADA74E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET UNITYSDK_OFFSET(0x1ADA84D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETPENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x1ADA8DD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET UNITYSDK_OFFSET(0x1ADA9050)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMNAME_OFFSET UNITYSDK_OFFSET(0x1ADA3B80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMPOPULARITYVALUE_OFFSET UNITYSDK_OFFSET(0x1ADA8630)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_CURRENTROOMOWNERUID_OFFSET UNITYSDK_OFFSET(0x1BEE7A70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISINSESSION_OFFSET UNITYSDK_OFFSET(0x1BEE59F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0x1BEE7AC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0x1BEE7AE0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__FIRSTPENDINGVISITINFO_OFFSET UNITYSDK_OFFSET(0x1BEE7B80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLIST_OFFSET UNITYSDK_OFFSET(0x1BEE7B00)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x1BEE7B40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOUTGOINGVISIT_OFFSET UNITYSDK_OFFSET(0x1BEE7B20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0x1BEE7B60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1ADA0540)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISANYONEVISITING_OFFSET UNITYSDK_OFFSET(0x1ADA8390)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISINSELFROOM_OFFSET UNITYSDK_OFFSET(0x1ADA82D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISONLINESESSIONDIMENSION_OFFSET UNITYSDK_OFFSET(0x1ADA5B30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISONLINESESSIONFLOOR_OFFSET UNITYSDK_OFFSET(0x1ADA5AD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET UNITYSDK_OFFSET(0x1ADA8410)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ISSOCIALPLAYMAPUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1ADA54B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x1ADA7E70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1ADA1040)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x1ADA7D60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SENDLIKEROOMDIY_OFFSET UNITYSDK_OFFSET(0x1ADA80F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0x1ADA8E80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET UNITYSDK_OFFSET(0x1BEE7AD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET UNITYSDK_OFFSET(0x1BEE7AF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLIST_OFFSET UNITYSDK_OFFSET(0x1BEE7B10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x1BEE7B50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOUTGOINGVISIT_OFFSET UNITYSDK_OFFSET(0x1BEE7B30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET UNITYSDK_OFFSET(0x1BEE7B70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET UNITYSDK_OFFSET(0x1ADA8EE0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOARRANGEPAGE_OFFSET UNITYSDK_OFFSET(0x1ADA8680)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOSOCIALPLAYMAPPROMISE_OFFSET UNITYSDK_OFFSET(0x1ADA13C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETGUESTPLAYERINFOBYUID_OFFSET UNITYSDK_OFFSET(0x1ADA7C20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPHANDLER_OFFSET UNITYSDK_OFFSET(0x1ADA2900)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPINFOBYDIMENSION_OFFSET UNITYSDK_OFFSET(0x1ADA5940)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPINFOBYFLOOR_OFFSET UNITYSDK_OFFSET(0x1ADA57B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPINFO_OFFSET UNITYSDK_OFFSET(0x1ADA17E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPUIBRIDGEBYFLOOR_OFFSET UNITYSDK_OFFSET(0x1ADA5590)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPUIBRIDGE_OFFSET UNITYSDK_OFFSET(0x1ADA53E0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1ADA75B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERMAPNAME_OFFSET UNITYSDK_OFFSET(0x1ADA7610)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1ADA88A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x1ADA7A70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET UNITYSDK_OFFSET(0x1ADA5B90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET UNITYSDK_OFFSET(0x1ADA8F50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ACCEPTANDTRACKPREMISSION_OFFSET UNITYSDK_OFFSET(0x1ADA6770)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1ADA0E70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1ADA0680)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x1BEE5C40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CLEARMAPINFOS_OFFSET UNITYSDK_OFFSET(0x1BEE7870)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__COMPAREONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1ADA9E30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET UNITYSDK_OFFSET(0x1BEE7240)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEPLAYERINFOLISTINROOM_OFFSET UNITYSDK_OFFSET(0x1ADA6970)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__GETROOMTYPE_OFFSET UNITYSDK_OFFSET(0x1ADA9C40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__HANDLEPARKLOCKEDFLOOR_OFFSET UNITYSDK_OFFSET(0x1ADA6370)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__INITMAPINFOS_OFFSET UNITYSDK_OFFSET(0x1BEE75C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ISEARLYACCESSPETPARKACTIVE_OFFSET UNITYSDK_OFFSET(0x1ADA19A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET UNITYSDK_OFFSET(0x1ADA2CD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET UNITYSDK_OFFSET(0x1BEE6900)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYSESSIONREFRESHEDIFCROSSROOM_OFFSET UNITYSDK_OFFSET(0x1ADA9BD0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x1ADA4AA0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x1ADA4AF0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA3830)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPETPARKDIYSCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA4CC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERDAILYREFRESHED_OFFSET UNITYSDK_OFFSET(0x1ADA51B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET UNITYSDK_OFFSET(0x1ADA4A10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET UNITYSDK_OFFSET(0x1BEE5590)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSELFPETDATACHANGED_OFFSET UNITYSDK_OFFSET(0x1ADA5150)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1ADA1C60)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA3C50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGETONLINEROOMDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA4420)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGETOWNERROOMDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA4580)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA2E50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA4C40)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1ADA2D30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA47D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA39A0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINPETDIYLIKESCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA4FC0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINPETDIYSCRSP_OFFSET UNITYSDK_OFFSET(0x1ADA4E90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x1BEE7410)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__REMOVEINVALIDPENDINGVISITINFOS_OFFSET UNITYSDK_OFFSET(0x1ADA89F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__RESETONLINEPLAYERINFOLIST_OFFSET UNITYSDK_OFFSET(0x1ADA3E50)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__RESOLVEMAPHANDLER_OFFSET UNITYSDK_OFFSET(0x1ADA4730)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x1BEE6DE0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET UNITYSDK_OFFSET(0x1ADA2A90)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET UNITYSDK_OFFSET(0x1ADA1200)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET UNITYSDK_OFFSET(0x1BEE6F80)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET UNITYSDK_OFFSET(0x1BEE52D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYNOTIFYGUESTENTERROOMTOAST_OFFSET UNITYSDK_OFFSET(0x1BEE5200)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYNOTIFYGUESTLEAVEROOMTOAST_OFFSET UNITYSDK_OFFSET(0x1BEE56F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYNOTIFYGUESTROOMTOAST_OFFSET UNITYSDK_OFFSET(0x1BEE57C0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET UNITYSDK_OFFSET(0x1ADA4500)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET UNITYSDK_OFFSET(0x1ADA9CA0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET UNITYSDK_OFFSET(0x1BEE4F70)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule_TypeDefinitionIndex = 68334;

	class OnlinePlayRoomModule : public ::RPG::Client::BaseModule
	{
	public:
		::KFGPAHIEDKH* _InviteService; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* __PendingOperationRecordList_k__BackingField; // 0x18
		::AGJOIILGIHK* __CurrentSession_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* __PendingVisitDict_k__BackingField; // 0x28
		::RPG::Client::OnlinePlayRoomModule_PendingOutgoingVisitInfo* __PendingOutgoingVisit_k__BackingField; // 0x30
		::CGPJCPKCPHC* _InviteCommand; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JBJNJPAOCDA*>* __OnlinePlayerInfoList_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::KHBEIDOCBCN*>* _MapHandlers; // 0x48
		::System::Boolean _IsVisitToastActive_k__BackingField; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* TransferToSocialPlayMapPromise(::CBPDACMBHGL a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::CBPDACMBHGL, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOSOCIALPLAYMAPPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsEarlyAccessPetParkActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ISEARLYACCESSPETPARKACTIVE_OFFSET))(this);
		}

		::System::Void _OnSocialPlayGameplayOperationScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayRoomPlayerMoveScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYROOMPLAYERMOVESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayPreCheckEnterRoomScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYPRECHECKENTERROOMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEnterSceneScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONENTERSCENESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainCakeCatchDiyLikeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINCAKECATCHDIYLIKESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayGetOnlineRoomDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGETONLINEROOMDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayGetOwnerRoomDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYGETOWNERROOMDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSocialPlayTalkScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYTALKSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerInfoChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERINFOCHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnSocialPlayQueryRecentVisitorsScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSOCIALPLAYQUERYRECENTVISITORSSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetParkDiyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPETPARKDIYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPetDiyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINPETDIYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTrainPetDiyLikeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONTRAINPETDIYLIKESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSelfPetDataChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONSELFPETDATACHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerDailyRefreshed(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERDAILYREFRESHED_OFFSET))(this, a1);
		}

		::RPG::Client::SocialPlay::SocialPlayMapInfo* TryGetMapInfo(::CBPDACMBHGL a1)
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapInfo*(*)(::PVOID, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPINFO_OFFSET))(this, a1);
		}

		::KHBEIDOCBCN* TryGetMapHandler(::CBPDACMBHGL a1)
		{
			return ((::KHBEIDOCBCN*(*)(::PVOID, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPHANDLER_OFFSET))(this, a1);
		}

		::RPG::Client::SocialPlay::SocialPlayMapUIBridge* TryGetMapUIBridge(::CBPDACMBHGL a1)
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapUIBridge*(*)(::PVOID, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPUIBRIDGE_OFFSET))(this, a1);
		}

		::System::Boolean IsSocialPlayMapUnlocked(::CBPDACMBHGL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISSOCIALPLAYMAPUNLOCKED_OFFSET))(this, a1);
		}

		::RPG::Client::SocialPlay::SocialPlayMapUIBridge* TryGetMapUIBridgeByFloor(::System::UInt32 a1)
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapUIBridge*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPUIBRIDGEBYFLOOR_OFFSET))(this, a1);
		}

		::RPG::Client::SocialPlay::SocialPlayMapInfo* TryGetMapInfoByFloor(::System::UInt32 a1)
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPINFOBYFLOOR_OFFSET))(this, a1);
		}

		::RPG::Client::SocialPlay::SocialPlayMapInfo* TryGetMapInfoByDimension(::System::UInt32 a1)
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETMAPINFOBYDIMENSION_OFFSET))(this, a1);
		}

		::System::Boolean IsOnlineSessionFloor(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISONLINESESSIONFLOOR_OFFSET))(this, a1);
		}

		::System::Boolean IsOnlineSessionDimension(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISONLINESESSIONDIMENSION_OFFSET))(this, a1);
		}

		::System::Void TryqueryOnlineRoomStatus(::System::UInt32 a1, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::SocialPlay::SocialPlayMapUIBridge*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYONLINEROOMSTATUS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _HandleParkLockedFloor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__HANDLEPARKLOCKEDFLOOR_OFFSET))(this, a1);
		}

		::System::Void _AcceptAndTrackPreMission(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ACCEPTANDTRACKPREMISSION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* GetOnlineRoomPlayerBriefDisplayDataList(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>* GetOnlineRoomPlayerBriefDisplayDataListByFloor(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlayerBriefDisplayData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERBRIEFDISPLAYDATALISTBYFLOOR_OFFSET))(this, a1);
		}

		::System::UInt32 GetOnlineRoomPlayerCapacity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERCAPACITY_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* TryGetOnlineRoomPlayerBriefDisplayData(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::System::Boolean TryGetOnlineRoomPlayerMapName(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETONLINEROOMPLAYERMAPNAME_OFFSET))(this, a1, a2);
		}

		::CBPDACMBHGL GetCurrentOnlineRoomType()
		{
			return ((::CBPDACMBHGL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCURRENTONLINEROOMTYPE_OFFSET))(this);
		}

		::RPG::Client::SocialPlay::SocialPlayMapInfo* GetCurrentOnlineFloorMapInfo()
		{
			return ((::RPG::Client::SocialPlay::SocialPlayMapInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCURRENTONLINEFLOORMAPINFO_OFFSET))(this);
		}

		::System::Boolean TryInviteFriend(::System::UInt32 a1, ::CBPDACMBHGL a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYINVITEFRIEND_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetGuestPlayerInfoByUid(::System::UInt32 a1, ::JBJNJPAOCDA* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETGUESTPLAYERINFOBYUID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::GameEntity*>>* EnumerateGuestEntities()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::GameCore::GameEntity*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ENUMERATEGUESTENTITIES_OFFSET))(this);
		}

		::System::Void EnterOnlinePlayRoom(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ENTERONLINEPLAYROOM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void QuitOnlinePlayRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_QUITONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void KickOutOnlinePlayRoom(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_KICKOUTONLINEPLAYROOM_OFFSET))(this, a1);
		}

		::System::Void DisbandOnlinePlayRoom()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_DISBANDONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void SendLikeRoomDIY(::RPG::Client::OnlineRoomDIYType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnlineRoomDIYType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SENDLIKEROOMDIY_OFFSET))(this, a1);
		}

		::System::Boolean IsInSelfRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISINSELFROOM_OFFSET))(this);
		}

		::System::Boolean IsAnyoneVisiting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISANYONEVISITING_OFFSET))(this);
		}

		::System::Boolean IsPlayerVisiting(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_ISPLAYERVISITING_OFFSET))(this, a1);
		}

		::System::UInt32 GetOnlineRoomPlayerIndex(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETONLINEROOMPLAYERINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* GetChatMessageDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCHATMESSAGEDATALIST_OFFSET))(this);
		}

		::System::String* GetRoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMNAME_OFFSET))(this);
		}

		::System::String* GetCurrentSessionMapName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETCURRENTSESSIONMAPNAME_OFFSET))(this);
		}

		::System::UInt32 GetRoomPopularityValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETROOMPOPULARITYVALUE_OFFSET))(this);
		}

		::System::Void TransferToArrangePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRANSFERTOARRANGEPAGE_OFFSET))(this);
		}

		::RPG::Client::OnlinePlayRoomModule_PendingVisitDisplayData* TryGetPendingVisitPlayerBriefDisplayData()
		{
			return ((::RPG::Client::OnlinePlayRoomModule_PendingVisitDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetPendingOperationRecordList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETPENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void ClearPendingOperationRecordList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_CLEARPENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void SetVisitToastActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SETVISITTOASTACTIVE_OFFSET))(this, a1);
		}

		::System::Void ToggleOnlinePlayRoomGuestVisible(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TOGGLEONLINEPLAYROOMGUESTVISIBLE_OFFSET))(this, a1, a2);
		}

		::System::Void TryQueryRecentVisitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_TRYQUERYRECENTVISITOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>* GetRecentVisitorList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETRECENTVISITORLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SocialPlay::SocialPlayMapUIBridge*>* GetMapUIBridgeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SocialPlay::SocialPlayMapUIBridge*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GETMAPUIBRIDGELIST_OFFSET))(this);
		}

		::RPG::Client::SocialPlay::OnlinePlayMapContext* CreateOnlinePlayMapContext()
		{
			return ((::RPG::Client::SocialPlay::OnlinePlayMapContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_CREATEONLINEPLAYMAPCONTEXT_OFFSET))(this);
		}

		::System::Void _RemoveInvalidPendingVisitInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__REMOVEINVALIDPENDINGVISITINFOS_OFFSET))(this);
		}

		::System::Boolean _IsValidSessionForRoom(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ISVALIDSESSIONFORROOM_OFFSET))(this, a1);
		}

		::System::Void _NotifySessionRefreshedIfCrossRoom(::CBPDACMBHGL a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYSESSIONREFRESHEDIFCROSSROOM_OFFSET))(this, a1);
		}

		::System::Void _TryCreateSession(::POBLGKIGINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYCREATESESSION_OFFSET))(this, a1);
		}

		::KHBEIDOCBCN* _ResolveMapHandler(::POBLGKIGINE* a1)
		{
			return ((::KHBEIDOCBCN*(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__RESOLVEMAPHANDLER_OFFSET))(this, a1);
		}

		static ::CBPDACMBHGL _GetRoomType(::POBLGKIGINE* a1)
		{
			return ((::CBPDACMBHGL(*)(::POBLGKIGINE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__GETROOMTYPE_OFFSET))(a1);
		}

		::System::Void _TryRestoreSession(::POBLGKIGINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTORESESSION_OFFSET))(this, a1);
		}

		::System::Void _TryDisposeSession()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYDISPOSESESSION_OFFSET))(this);
		}

		::System::Void _TryRestoreOnlineSession(::POBLGKIGINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYRESTOREONLINESESSION_OFFSET))(this, a1);
		}

		::System::Int32 _CompareOnlineRoomPlayerBriefDisplayData(::RPG::Client::PlayerBriefDisplayData* a1, ::RPG::Client::PlayerBriefDisplayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__COMPAREONLINEROOMPLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::JBJNJPAOCDA*>* _GetOnlinePlayerInfoListInRoom()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::JBJNJPAOCDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__GETONLINEPLAYERINFOLISTINROOM_OFFSET))(this);
		}

		::System::Void _ResetOnlinePlayerInfoList(::System::Collections::Generic::IEnumerable_1<::JBJNJPAOCDA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::JBJNJPAOCDA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__RESETONLINEPLAYERINFOLIST_OFFSET))(this, a1);
		}

		::System::Void _UpdateOnlinePlayerInfo(::JBJNJPAOCDA* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBJNJPAOCDA*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__UPDATEONLINEPLAYERINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPlayerLeaveRoom(::System::UInt32 a1, ::CBPDACMBHGL a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__ONPLAYERLEAVEROOM_OFFSET))(this, a1, a2);
		}

		::System::Void _TryNotifyGuestEnterRoomToast(::JBJNJPAOCDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYNOTIFYGUESTENTERROOMTOAST_OFFSET))(this, a1);
		}

		::System::Void _TryNotifyGuestLeaveRoomToast(::JBJNJPAOCDA* a1, ::CBPDACMBHGL a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBJNJPAOCDA*, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYNOTIFYGUESTLEAVEROOMTOAST_OFFSET))(this, a1, a2);
		}

		::System::Void _TryNotifyGuestRoomToast(::RPG::Client::TextID a1, ::JBJNJPAOCDA* a2, ::CBPDACMBHGL a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::JBJNJPAOCDA*, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYNOTIFYGUESTROOMTOAST_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CacheOperationRecordList(::IKBDJLNEPBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKBDJLNEPBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CACHEOPERATIONRECORDLIST_OFFSET))(this, a1);
		}

		::System::Void _NotifyOperationRecordList(::IKBDJLNEPBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKBDJLNEPBH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__NOTIFYOPERATIONRECORDLIST_OFFSET))(this, a1);
		}

		::System::Void _SetOnlinePlayRoomLoadingStrategy(::System::Boolean a1, ::System::UInt32 a2, ::System::Action* a3, ::CBPDACMBHGL a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::Action*, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__SETONLINEPLAYROOMLOADINGSTRATEGY_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean _TryEnterOnlineFunction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYENTERONLINEFUNCTION_OFFSET))(this);
		}

		::System::Void _TryInsertVisitToast(::JBJNJPAOCDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBJNJPAOCDA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__TRYINSERTVISITTOAST_OFFSET))(this, a1);
		}

		::RPG::Client::LittleWheelSelectConfig* _CreateLittleWheelSelectConfig()
		{
			return ((::RPG::Client::LittleWheelSelectConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CREATELITTLEWHEELSELECTCONFIG_OFFSET))(this);
		}

		::System::Void _RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__REFRESHDATA_OFFSET))(this);
		}

		::System::Void _InitMapInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__INITMAPINFOS_OFFSET))(this);
		}

		::System::Void _ClearMapInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE__CLEARMAPINFOS_OFFSET))(this);
		}

		::System::Boolean get_IsInSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISINSESSION_OFFSET))(this);
		}

		::System::UInt32 get_CurrentRoomOwnerUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_CURRENTROOMOWNERUID_OFFSET))(this);
		}

		::System::Boolean get_IsVisitToastActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET_ISVISITTOASTACTIVE_OFFSET))(this);
		}

		::System::Void set_IsVisitToastActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET_ISVISITTOASTACTIVE_OFFSET))(this, a1);
		}

		::AGJOIILGIHK* get__CurrentSession()
		{
			return ((::AGJOIILGIHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__CURRENTSESSION_OFFSET))(this);
		}

		::System::Void set__CurrentSession(::AGJOIILGIHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGJOIILGIHK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__CURRENTSESSION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JBJNJPAOCDA*>* get__OnlinePlayerInfoList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JBJNJPAOCDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__ONLINEPLAYERINFOLIST_OFFSET))(this);
		}

		::System::Void set__OnlinePlayerInfoList(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JBJNJPAOCDA*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::JBJNJPAOCDA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__ONLINEPLAYERINFOLIST_OFFSET))(this, a1);
		}

		::RPG::Client::OnlinePlayRoomModule_PendingOutgoingVisitInfo* get__PendingOutgoingVisit()
		{
			return ((::RPG::Client::OnlinePlayRoomModule_PendingOutgoingVisitInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOUTGOINGVISIT_OFFSET))(this);
		}

		::System::Void set__PendingOutgoingVisit(::RPG::Client::OnlinePlayRoomModule_PendingOutgoingVisitInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OnlinePlayRoomModule_PendingOutgoingVisitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOUTGOINGVISIT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get__PendingOperationRecordList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGOPERATIONRECORDLIST_OFFSET))(this);
		}

		::System::Void set__PendingOperationRecordList(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGOPERATIONRECORDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* get__PendingVisitDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__PENDINGVISITDICT_OFFSET))(this);
		}

		::System::Void set__PendingVisitDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_SET__PENDINGVISITDICT_OFFSET))(this, a1);
		}

		::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo* get__FirstPendingVisitInfo()
		{
			return ((::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_GET__FIRSTPENDINGVISITINFO_OFFSET))(this);
		}

	};
}
