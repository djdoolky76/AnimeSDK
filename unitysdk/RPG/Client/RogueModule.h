#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class AGEHGBKOBEF;
class FGOPLKFEJAP;
class GFDENAMMEHM;
class GKHGFCBMLBL;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class ItemList; }
namespace RPG::Client { class AddNewAvatarInfo; }
namespace RPG::Client { class RogueAeonData; }
namespace RPG::Client { class RogueAreaData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueBuffEnhanceItem; }
namespace RPG::Client { class RogueData; }
namespace RPG::Client { class RogueEndlessAreaData; }
namespace RPG::Client { class RogueEndlessConstValue; }
namespace RPG::Client { class RogueEndlessProgressInfo; }
namespace RPG::Client { class RogueFinishInfo; }
namespace RPG::Client { class RogueTalentData; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class RogueBuffRow; }
namespace RPG::GameCore { class RogueRoomRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB2E720)
#define RPG_CLIENT_ROGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB31670)
#define RPG_CLIENT_ROGUEMODULE_ENTERROGUEMAPROOM_OFFSET UNITYSDK_OFFSET(0x1CB331F0)
#define RPG_CLIENT_ROGUEMODULE_ENTERROGUE_OFFSET UNITYSDK_OFFSET(0x1CB33120)
#define RPG_CLIENT_ROGUEMODULE_GETACHIVEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0x1CB2F410)
#define RPG_CLIENT_ROGUEMODULE_GETAREALOCKSTATUS_OFFSET UNITYSDK_OFFSET(0x1CB2ED80)
#define RPG_CLIENT_ROGUEMODULE_GETCURRENTAREAID_OFFSET UNITYSDK_OFFSET(0x1CB2E900)
#define RPG_CLIENT_ROGUEMODULE_GETCURRENTROGUEROOMROW_OFFSET UNITYSDK_OFFSET(0x1CB2EA90)
#define RPG_CLIENT_ROGUEMODULE_GETMAXDIFFUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0x1CB2EAE0)
#define RPG_CLIENT_ROGUEMODULE_GETMAXPROGRESSUNLOCKAREADATA_OFFSET UNITYSDK_OFFSET(0x1CB2EC30)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEAEONDATA_OFFSET UNITYSDK_OFFSET(0x1CB2E9D0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFCANUPNUMBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1CB300D0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFENHANCEITEM_OFFSET UNITYSDK_OFFSET(0x1CB2FB90)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFNUMBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1CB2FD50)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFROWSBYGROUPID_OFFSET UNITYSDK_OFFSET(0x1CB30360)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEDATA_OFFSET UNITYSDK_OFFSET(0x1CB2E8C0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSAREADATALIST_OFFSET UNITYSDK_OFFSET(0x1CB2C370)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSMEGABUFFIDS_OFFSET UNITYSDK_OFFSET(0x1CB2CA40)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEFLOORID_OFFSET UNITYSDK_OFFSET(0x1CB2FC30)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEGROUPID_OFFSET UNITYSDK_OFFSET(0x1CB2FC90)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1CB2FCF0)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEPICKAVATARMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB2F650)
#define RPG_CLIENT_ROGUEMODULE_GETROGUEPROPREWARDLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB2F880)
#define RPG_CLIENT_ROGUEMODULE_GETROGUETALENTDATA_OFFSET UNITYSDK_OFFSET(0x1CB2E990)
#define RPG_CLIENT_ROGUEMODULE_GET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET UNITYSDK_OFFSET(0x1CB2E670)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET UNITYSDK_OFFSET(0x1CB2E630)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINTREWARDTAKENLIST_OFFSET UNITYSDK_OFFSET(0x1CB2E650)
#define RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINT_OFFSET UNITYSDK_OFFSET(0x1CB2E610)
#define RPG_CLIENT_ROGUEMODULE_GET_HASAVAILABLEPOINTREWARD_OFFSET UNITYSDK_OFFSET(0x1CB2E690)
#define RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSAREADATAS_OFFSET UNITYSDK_OFFSET(0x1CB2E5F0)
#define RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x1CB2E700)
#define RPG_CLIENT_ROGUEMODULE_HASROGUECHESTREWARDLEFTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB2F900)
#define RPG_CLIENT_ROGUEMODULE_HASROGUEENDLESSINDOING_OFFSET UNITYSDK_OFFSET(0x1CB2E3D0)
#define RPG_CLIENT_ROGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1CB31550)
#define RPG_CLIENT_ROGUEMODULE_ISBUFFACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x1CB2F4B0)
#define RPG_CLIENT_ROGUEMODULE_ISINROGUEENDLESSBATTLE_OFFSET UNITYSDK_OFFSET(0x1CB2C870)
#define RPG_CLIENT_ROGUEMODULE_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x1CB2F220)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSAREA_OFFSET UNITYSDK_OFFSET(0x1CB2C050)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSOPENING_OFFSET UNITYSDK_OFFSET(0x1CB2E210)
#define RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSUNLOCK_OFFSET UNITYSDK_OFFSET(0x1CB2E300)
#define RPG_CLIENT_ROGUEMODULE_LEAVEROGUE_OFFSET UNITYSDK_OFFSET(0x1CB332D0)
#define RPG_CLIENT_ROGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1CB31840)
#define RPG_CLIENT_ROGUEMODULE_QUITCURRENTROGUE_OFFSET UNITYSDK_OFFSET(0x1CB334F0)
#define RPG_CLIENT_ROGUEMODULE_QUITROGUE_OFFSET UNITYSDK_OFFSET(0x1CB333E0)
#define RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETAREADATA_OFFSET UNITYSDK_OFFSET(0x1CB2C290)
#define RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETSCORERANK_OFFSET UNITYSDK_OFFSET(0x1CB2C4A0)
#define RPG_CLIENT_ROGUEMODULE_SAVEENTERROGUETEAM_OFFSET UNITYSDK_OFFSET(0x1CB30ED0)
#define RPG_CLIENT_ROGUEMODULE_SENDROGUEENDLESSMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x1CB2C0C0)
#define RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUEHANDBOOKPAGE_OFFSET UNITYSDK_OFFSET(0x1CB314C0)
#define RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUESELECTMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1CB31460)
#define RPG_CLIENT_ROGUEMODULE_SET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET UNITYSDK_OFFSET(0x1CB2E680)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET UNITYSDK_OFFSET(0x1CB2E640)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINTREWARDTAKENLIST_OFFSET UNITYSDK_OFFSET(0x1CB2E660)
#define RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINT_OFFSET UNITYSDK_OFFSET(0x1CB2E620)
#define RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSAREADATAS_OFFSET UNITYSDK_OFFSET(0x1CB2E600)
#define RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSCONSTVALUE_OFFSET UNITYSDK_OFFSET(0x1CB2E710)
#define RPG_CLIENT_ROGUEMODULE_SHOULDSHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1CB312B0)
#define RPG_CLIENT_ROGUEMODULE_SHOWROGUEMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1CB31240)
#define RPG_CLIENT_ROGUEMODULE_STARTROGUEWITHAEON_OFFSET UNITYSDK_OFFSET(0x1CB33060)
#define RPG_CLIENT_ROGUEMODULE_STARTROGUE_OFFSET UNITYSDK_OFFSET(0x1CB32FA0)
#define RPG_CLIENT_ROGUEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1CB305F0)
#define RPG_CLIENT_ROGUEMODULE_TRYGETROGUETEAMBYWORLDINDEX_OFFSET UNITYSDK_OFFSET(0x1CB30FD0)
#define RPG_CLIENT_ROGUEMODULE_TRYINITROGUETALENTDATA_OFFSET UNITYSDK_OFFSET(0x1CB2F110)
#define RPG_CLIENT_ROGUEMODULE_TRYSHOWBUFFAEONFIRSTTALK_OFFSET UNITYSDK_OFFSET(0x1CB32B50)
#define RPG_CLIENT_ROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CB318C0)
#define RPG_CLIENT_ROGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CB33540)
#define RPG_CLIENT_ROGUEMODULE__ADDROGUEBUFFTAGSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1CB323C0)
#define RPG_CLIENT_ROGUEMODULE__CANSHOWROGUEFINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x1CB35440)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWHANDBOOKPAGE_OFFSET UNITYSDK_OFFSET(0x1CB30E60)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWROGUEFINISH_OFFSET UNITYSDK_OFFSET(0x1CB30730)
#define RPG_CLIENT_ROGUEMODULE__CHECKSHOWTRANSFERTOROGUE_OFFSET UNITYSDK_OFFSET(0x1CB30B30)
#define RPG_CLIENT_ROGUEMODULE__ENDLESSTRYSHOWREWARDDISPLAY_OFFSET UNITYSDK_OFFSET(0x1CB2D5B0)
#define RPG_CLIENT_ROGUEMODULE__GETAEONBUFFDIALOGUEGROUPID_OFFSET UNITYSDK_OFFSET(0x1CB32BC0)
#define RPG_CLIENT_ROGUEMODULE__GETPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1CB2F6D0)
#define RPG_CLIENT_ROGUEMODULE__GETROGUEBUFFTAGS_OFFSET UNITYSDK_OFFSET(0x1CB2FEF0)
#define RPG_CLIENT_ROGUEMODULE__ISINROGUELEAVEMAPENTRANCE_OFFSET UNITYSDK_OFFSET(0x1CB326A0)
#define RPG_CLIENT_ROGUEMODULE__ISSATISFYTRANSFERSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x1CB32960)
#define RPG_CLIENT_ROGUEMODULE__NOTIFYROGUEENDLESSREWARD_OFFSET UNITYSDK_OFFSET(0x1CB2D0B0)
#define RPG_CLIENT_ROGUEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0x1CB2E150)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENABLEROGUETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB373D0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB35B40)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUEMAPROOMSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB34E30)
#define RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUESCRSP_OFFSET UNITYSDK_OFFSET(0x1CB34780)
#define RPG_CLIENT_ROGUEMODULE__ONCMDFINISHAEONDIALOGUEGROUPSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB36F80)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEAEONINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB36A50)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB35A80)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB34410)
#define RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUETALENTINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB37350)
#define RPG_CLIENT_ROGUEMODULE__ONCMDLEAVEROGUESCRSP_OFFSET UNITYSDK_OFFSET(0x1CB348B0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDOPENROGUECHESTSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB355D0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB35C40)
#define RPG_CLIENT_ROGUEMODULE__ONCMDQUITROGUESCRSP_OFFSET UNITYSDK_OFFSET(0x1CB34B00)
#define RPG_CLIENT_ROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB367C0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSTARTROGUESCRSP_OFFSET UNITYSDK_OFFSET(0x1CB345F0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAEONSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB359E0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB34BF0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEEXPLOREWINSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB35210)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB352B0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEGETITEMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB35880)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEMAPROOMSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB350E0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEREVIVEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB36960)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESEASONFINISHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB354A0)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESTATUSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB34D80)
#define RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB34480)
#define RPG_CLIENT_ROGUEMODULE__ONGETNEWAVATARINROGUE_OFFSET UNITYSDK_OFFSET(0x1CB31F20)
#define RPG_CLIENT_ROGUEMODULE__ONGETROGUEENDLESSACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1CB2D9C0)
#define RPG_CLIENT_ROGUEMODULE__ONPLAYSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x1CB31AA0)
#define RPG_CLIENT_ROGUEMODULE__ONROGUEENDLESSACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CB2DFF0)
#define RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYALLBONUSREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB2DF60)
#define RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYPOINTREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB2DED0)
#define RPG_CLIENT_ROGUEMODULE__ONUPDATEPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1CB31BF0)
#define RPG_CLIENT_ROGUEMODULE__PREPARETRANSFERSUBMISSIONSTATE_OFFSET UNITYSDK_OFFSET(0x1CB32A10)
#define RPG_CLIENT_ROGUEMODULE__REFRESHAVAILABLELEVELREWARD_OFFSET UNITYSDK_OFFSET(0x1CB2D280)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEDATA_OFFSET UNITYSDK_OFFSET(0x1CB32070)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEENDLESSDATA_OFFSET UNITYSDK_OFFSET(0x1CB2CE40)
#define RPG_CLIENT_ROGUEMODULE__REFRESHROGUEVIRTUALITEMS_OFFSET UNITYSDK_OFFSET(0x1CB32150)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CB2E080)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CB2D700)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSDISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB2CD90)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSINIT_OFFSET UNITYSDK_OFFSET(0x1CB2CC80)
#define RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSUNINIT_OFFSET UNITYSDK_OFFSET(0x1CB2CCE0)
#define RPG_CLIENT_ROGUEMODULE__SETENTERROGUEMAPLOADINGTYPE_OFFSET UNITYSDK_OFFSET(0x1CB322C0)
#define RPG_CLIENT_ROGUEMODULE__SETEXITROGUEMAPLOADINGTYPE_OFFSET UNITYSDK_OFFSET(0x1CB32340)
#define RPG_CLIENT_ROGUEMODULE__SHOWBUFFAEONFIRSTTALK_OFFSET UNITYSDK_OFFSET(0x1CB32D30)
#define RPG_CLIENT_ROGUEMODULE__SYNCSCOREREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x1CB2DE30)
#define RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUEENDLESSLEAVE_OFFSET UNITYSDK_OFFSET(0x1CB2CFD0)
#define RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUELEAVE_OFFSET UNITYSDK_OFFSET(0x1CB306D0)
#define RPG_CLIENT_ROGUEMODULE__TRYSETCACHEROGUEFINISHINFO_OFFSET UNITYSDK_OFFSET(0x1CB324F0)
#define RPG_CLIENT_ROGUEMODULE__TRYSHOWAREANAMEAFTERTELEPOT_OFFSET UNITYSDK_OFFSET(0x1CB31B40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueModule_TypeDefinitionIndex = 69394;

	class RogueModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Promises::Promise* _QuitRoguePromise; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueEndlessMegaBuffIDs; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueAeonData*>* _RogueAeonDataDic; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::AddNewAvatarInfo*>* _CacheRogueGetNewAvatarInfo; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _EndlessPointRewardTakenList_k__BackingField; // 0x30
		::RPG::Client::RogueData* _RogueData; // 0x38
		::RPG::Client::RogueEndlessConstValue* _RogueEndlessConstValue_k__BackingField; // 0x40
		::RPG::Client::RogueTalentData* _RogueTalentData; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _RogueBuffGroupID2Tags; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _RogueEndlessScoreRank; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailablePointRewardLevelList_k__BackingField; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>* _RogueEndlessAreaDatas_k__BackingField; // 0x68
		::RPG::Client::RogueFinishInfo* _CacheRogueFinishInfo; // 0x70
		::RPG::Client::RogueEndlessProgressInfo* EndlessProgressInfo; // 0x78
		::RPG::Client::Promises::Promise* _LeaveRoguePromise; // 0x80
		::System::Boolean _NeedCheckRogueLeave; // 0x88
		::System::Boolean _IsWaitingAutoShowRogueHandbookPage; // 0x89
		::System::Boolean _IsWaitingAutoShowRogueSelectMainPage; // 0x8A
		::System::Boolean _NeedCheckRogueFinish; // 0x8B
		::System::UInt32 _AutoShowRogueAreaID; // 0x8C
		::System::UInt32 _LastLeaveAreaID; // 0x90
		::System::UInt32 _RogueEntranceGroupID; // 0x94
		::System::UInt32 _RogueLeaveMapEntranceID; // 0x98
		::System::UInt32 _RogueEntranceFloorID; // 0x9C
		::System::Boolean _NeedShowAreaNameAfterTelepot; // 0xA0
		::System::Boolean HasAvailableOverBonusReward; // 0xA1
		::System::Byte _padding0[0x2];
		::System::UInt32 _EndlessPoint_k__BackingField; // 0xA4
		::System::UInt32 _RogueEntranceInstanceID; // 0xA8
		::System::UInt32 _EndlessOverBonusRewardTakenTime_k__BackingField; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_CTOR_OFFSET))(this);
		}

		::System::Boolean IsRogueEndlessArea(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSAREA_OFFSET))(this, a1);
		}

		::System::Void SendRogueEndlessModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SENDROGUEENDLESSMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::RogueEndlessAreaData* RogueEndlessGetAreaData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueEndlessAreaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETAREADATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueEndlessAreaData*>* GetRogueEndlessAreaDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueEndlessAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSAREADATALIST_OFFSET))(this);
		}

		::System::Int32 RogueEndlessGetScoreRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ROGUEENDLESSGETSCORERANK_OFFSET))(this, a1);
		}

		::System::Boolean IsInRogueEndlessBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISINROGUEENDLESSBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetRogueEndlessMegaBuffIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENDLESSMEGABUFFIDS_OFFSET))(this);
		}

		::System::Void _RogueEndlessInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSINIT_OFFSET))(this);
		}

		::System::Void _RogueEndlessUnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSUNINIT_OFFSET))(this);
		}

		::System::Void _RogueEndlessDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSDISPOSE_OFFSET))(this);
		}

		::System::Void _RefreshRogueEndlessData(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEENDLESSDATA_OFFSET))(this, a1);
		}

		::System::Void _TryAutoShowRogueEndlessLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUEENDLESSLEAVE_OFFSET))(this);
		}

		::System::Void _NotifyRogueEndlessReward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__NOTIFYROGUEENDLESSREWARD_OFFSET))(this, a1);
		}

		::System::Void _RefreshAvailableLevelReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHAVAILABLELEVELREWARD_OFFSET))(this);
		}

		::System::Boolean _EndlessTryShowRewardDisplay(::FGOPLKFEJAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGOPLKFEJAP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ENDLESSTRYSHOWREWARDDISPLAY_OFFSET))(this, a1);
		}

		::System::Void _RogueEndlessAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetRogueEndlessActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONGETROGUEENDLESSACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeRogueEndlessActivityPointRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYPOINTREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnTakeRogueEndlessActivityAllBonusRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONTAKEROGUEENDLESSACTIVITYALLBONUSREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncScoreRewardTaken(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SYNCSCOREREWARDTAKEN_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueEndlessActivityBattleEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONROGUEENDLESSACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _RogueEndlessAddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ROGUEENDLESSADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, a1);
		}

		::System::Boolean IsRogueEndlessOpening()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSOPENING_OFFSET))(this);
		}

		::System::Boolean IsRogueEndlessUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISROGUEENDLESSUNLOCK_OFFSET))(this);
		}

		::System::Boolean HasRogueEndlessInDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_HASROGUEENDLESSINDOING_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>* get_RogueEndlessAreaDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSAREADATAS_OFFSET))(this);
		}

		::System::Void set_RogueEndlessAreaDatas(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueEndlessAreaData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSAREADATAS_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessPoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINT_OFFSET))(this);
		}

		::System::Void set_EndlessPoint(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINT_OFFSET))(this, a1);
		}

		::System::UInt32 get_EndlessOverBonusRewardTakenTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET))(this);
		}

		::System::Void set_EndlessOverBonusRewardTakenTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ENDLESSOVERBONUSREWARDTAKENTIME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EndlessPointRewardTakenList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ENDLESSPOINTREWARDTAKENLIST_OFFSET))(this);
		}

		::System::Void set_EndlessPointRewardTakenList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ENDLESSPOINTREWARDTAKENLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailablePointRewardLevelList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET))(this);
		}

		::System::Void set_AvailablePointRewardLevelList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_AVAILABLEPOINTREWARDLEVELLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAvailablePointReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_HASAVAILABLEPOINTREWARD_OFFSET))(this);
		}

		::RPG::Client::RogueEndlessConstValue* get_RogueEndlessConstValue()
		{
			return ((::RPG::Client::RogueEndlessConstValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GET_ROGUEENDLESSCONSTVALUE_OFFSET))(this);
		}

		::System::Void set_RogueEndlessConstValue(::RPG::Client::RogueEndlessConstValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessConstValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SET_ROGUEENDLESSCONSTVALUE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueData* GetRogueData()
		{
			return ((::RPG::Client::RogueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEDATA_OFFSET))(this);
		}

		::System::UInt32 GetCurrentAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETCURRENTAREAID_OFFSET))(this);
		}

		::RPG::Client::RogueTalentData* GetRogueTalentData()
		{
			return ((::RPG::Client::RogueTalentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUETALENTDATA_OFFSET))(this);
		}

		::RPG::Client::RogueAeonData* GetRogueAeonData(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueAeonData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEAEONDATA_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueRoomRow* GetCurrentRogueRoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETCURRENTROGUEROOMROW_OFFSET))(this);
		}

		::RPG::Client::RogueAreaData* GetMaxDiffUnlockAreaData()
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETMAXDIFFUNLOCKAREADATA_OFFSET))(this);
		}

		::RPG::Client::RogueAreaData* GetMaxProgressUnlockAreaData()
		{
			return ((::RPG::Client::RogueAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETMAXPROGRESSUNLOCKAREADATA_OFFSET))(this);
		}

		::System::Boolean GetAreaLockStatus(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETAREALOCKSTATUS_OFFSET))(this, a1);
		}

		::System::Void TryInitRogueTalentData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYINITROGUETALENTDATA_OFFSET))(this);
		}

		::System::Boolean IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetAchivedBuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETACHIVEDBUFFLIST_OFFSET))(this);
		}

		::System::Boolean IsBuffAchivedBuff(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ISBUFFACHIVEDBUFF_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetRoguePickAvatarMaxCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEPICKAVATARMAXCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 GetRoguePropRewardLeftCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEPROPREWARDLEFTCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean HasRogueChestRewardLeftCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_HASROGUECHESTREWARDLEFTCOUNT_OFFSET))(this);
		}

		::RPG::Client::RogueBuffEnhanceItem* GetRogueBuffEnhanceItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueBuffEnhanceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFENHANCEITEM_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueEntranceFloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEFLOORID_OFFSET))(this);
		}

		::System::UInt32 GetRogueEntranceGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEGROUPID_OFFSET))(this);
		}

		::System::UInt32 GetRogueEntranceInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEENTRANCEINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffNumByGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFNUMBYGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 GetRogueBuffCanUpNumByGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFCANUPNUMBYGROUPID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>* GetRogueBuffRowsByGroupID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueBuffRow*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_GETROGUEBUFFROWSBYGROUPID_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SaveEnterRogueTeam(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SAVEENTERROGUETEAM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* TryGetRogueTeamByWorldIndex(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYGETROGUETEAMBYWORLDINDEX_OFFSET))(this, a1);
		}

		::System::Void ShowRogueMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SHOWROGUEMAINPAGE_OFFSET))(this);
		}

		::System::Boolean ShouldShowMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SHOULDSHOWMAINPAGE_OFFSET))(this);
		}

		::System::Void SetAutoShowRogueSelectMainPage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUESELECTMAINPAGE_OFFSET))(this, a1);
		}

		::System::Void SetAutoShowRogueHandbookPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_SETAUTOSHOWROGUEHANDBOOKPAGE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnPlayScreenTransfer(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONPLAYSCREENTRANSFER_OFFSET))(this, a1);
		}

		::System::Void _OnUpdatePropExtraInfo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONUPDATEPROPEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Void _OnGetNewAvatarInRogue(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONGETNEWAVATARINROGUE_OFFSET))(this, a1);
		}

		::System::Void _RefreshRogueData(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEDATA_OFFSET))(this, a1);
		}

		::System::Void _RefreshRogueVirtualItems(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__REFRESHROGUEVIRTUALITEMS_OFFSET))(this, a1);
		}

		::System::Void _SetEnterRogueMapLoadingType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SETENTERROGUEMAPLOADINGTYPE_OFFSET))(this);
		}

		::System::Void _SetExitRogueMapLoadingType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SETEXITROGUEMAPLOADINGTYPE_OFFSET))(this);
		}

		::System::Void _TryShowAreaNameAfterTelepot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYSHOWAREANAMEAFTERTELEPOT_OFFSET))(this);
		}

		::GFDENAMMEHM* _GetPropExtraInfo(::System::UInt32 a1)
		{
			return ((::GFDENAMMEHM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETPROPEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GetRogueBuffTags(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETROGUEBUFFTAGS_OFFSET))(this, a1);
		}

		::System::Void _AddRogueBuffTagsRecursive(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ADDROGUEBUFFTAGSRECURSIVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _TryAutoShowRogueLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYAUTOSHOWROGUELEAVE_OFFSET))(this);
		}

		::System::Void _CheckShowRogueFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CHECKSHOWROGUEFINISH_OFFSET))(this);
		}

		::System::Void _TrySetCacheRogueFinishInfo(::GKHGFCBMLBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKHGFCBMLBL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__TRYSETCACHEROGUEFINISHINFO_OFFSET))(this, a1);
		}

		::System::Void _CheckShowTransferToRogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CHECKSHOWTRANSFERTOROGUE_OFFSET))(this);
		}

		::System::Void _CheckShowHandbookPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CHECKSHOWHANDBOOKPAGE_OFFSET))(this);
		}

		::System::Boolean _IsInRogueLeaveMapEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ISINROGUELEAVEMAPENTRANCE_OFFSET))(this);
		}

		::System::Boolean _IsSatisfyTransferSubMissionState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ISSATISFYTRANSFERSUBMISSIONSTATE_OFFSET))(this);
		}

		::System::Void _PrepareTransferSubMissionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__PREPARETRANSFERSUBMISSIONSTATE_OFFSET))(this);
		}

		::System::Void TryShowBuffAeonFirstTalk(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_TRYSHOWBUFFAEONFIRSTTALK_OFFSET))(this, a1);
		}

		::System::UInt32 _GetAeonBuffDialogueGroupID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__GETAEONBUFFDIALOGUEGROUPID_OFFSET))(this, a1);
		}

		::System::Void _ShowBuffAeonFirstTalk(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__SHOWBUFFAEONFIRSTTALK_OFFSET))(this, a1);
		}

		::System::Void StartRogue(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_STARTROGUE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void StartRogueWithAeon(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_STARTROGUEWITHAEON_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EnterRogue(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ENTERROGUE_OFFSET))(this, a1);
		}

		::System::Void EnterRogueMapRoom(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_ENTERROGUEMAPROOM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::Promise* LeaveRogue()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_LEAVEROGUE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* QuitRogue(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_QUITROGUE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* QuitCurrentRogue()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE_QUITCURRENTROGUE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdGetRogueInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueVirtualItemInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEVIRTUALITEMINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdStartRogueScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSTARTROGUESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnterRogueScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdLeaveRogueScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDLEAVEROGUESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdQuitRogueScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDQUITROGUESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueAreaUnlockScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAREAUNLOCKSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueStatusScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESTATUSSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnterRogueMapRoomScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENTERROGUEMAPROOMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueMapRoomScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEMAPROOMSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueExploreWinScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEEXPLOREWINSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CanShowRogueFinishImmediately(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__CANSHOWROGUEFINISHIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void _OnCmdSyncRogueSeasonFinishScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUESEASONFINISHSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdOpenRogueChestScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDOPENROGUECHESTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueGetItemScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEGETITEMSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueAeonScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEAEONSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueBuffEnhanceInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEBUFFENHANCEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnhanceRogueBuffScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENHANCEROGUEBUFFSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdPickRogueAvatarScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDPICKROGUEAVATARSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdReviveRogueAvatarScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDREVIVEROGUEAVATARSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdSyncRogueReviveInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDSYNCROGUEREVIVEINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueAeonInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUEAEONINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdFinishAeonDialogueGroupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDFINISHAEONDIALOGUEGROUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdGetRogueTalentInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDGETROGUETALENTINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnCmdEnableRogueTalentScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMODULE__ONCMDENABLEROGUETALENTSCRSP_OFFSET))(this, a1, a2);
		}

	};
}
