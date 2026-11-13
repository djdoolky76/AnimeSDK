#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class GCBCKOKEAJH;
class GPHMAJPGGEK;
class HGAAAOGMIJB;
namespace RPG::Client { class ExprConditionChecker; }
namespace RPG::Client { class IActivityQuestRewardData; }
namespace RPG::Client { class RogueMagicAreaCollection; }
namespace RPG::Client { class RogueMagicGameData; }
namespace RPG::Client { class RogueMagicHandbookInfo; }
namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace RPG::Client { class RogueMagicSettleData; }
namespace RPG::Client { class RogueMagicStoryArchiveCollection; }
namespace RPG::Client { class RogueMagicStyleTypeCollection; }
namespace RPG::Client { class RogueMagicTalentInfo; }
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace RPG::GameCore { class RogueMagicPowerConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC16D50)
#define RPG_CLIENT_ROGUEMAGICMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC172C0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GETPOWERCONFIG_OFFSET UNITYSDK_OFFSET(0x1CC18D80)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x1CC0A0E0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_AREACOLLECTION_OFFSET UNITYSDK_OFFSET(0x1CC19A90)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_GAMEDATA_OFFSET UNITYSDK_OFFSET(0x1CC18610)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_HANDBOOKINFO_OFFSET UNITYSDK_OFFSET(0x1CC0A1B0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ISENTRANCEUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1CC19BA0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ISGUIDELOCKENTRANCE_OFFSET UNITYSDK_OFFSET(0x1CC19C00)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_ISSKIPSETTLEAUTOSHOWENTRANCE_OFFSET UNITYSDK_OFFSET(0x1CC19CA0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_QUESTREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1CC19B50)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_STORYARCHIVECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1CC0A2A0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_STYLETYPECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1CC19B10)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_TALENTINFO_OFFSET UNITYSDK_OFFSET(0x1CC19AD0)
#define RPG_CLIENT_ROGUEMAGICMODULE_GET_WEBH5URL_OFFSET UNITYSDK_OFFSET(0x1CC19D00)
#define RPG_CLIENT_ROGUEMAGICMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1CC17090)
#define RPG_CLIENT_ROGUEMAGICMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1CC17220)
#define RPG_CLIENT_ROGUEMAGICMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1CC17750)
#define RPG_CLIENT_ROGUEMAGICMODULE_QUICKSETTLEGAME_OFFSET UNITYSDK_OFFSET(0x1CC188B0)
#define RPG_CLIENT_ROGUEMAGICMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1CC18290)
#define RPG_CLIENT_ROGUEMAGICMODULE_SETTLEGAME_OFFSET UNITYSDK_OFFSET(0x1CC18370)
#define RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEPROMISED_OFFSET UNITYSDK_OFFSET(0x1CC17D90)
#define RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEWITHROGUESELECTMAINPAGEPROMISED_OFFSET UNITYSDK_OFFSET(0x1CC18010)
#define RPG_CLIENT_ROGUEMAGICMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x1CC179E0)
#define RPG_CLIENT_ROGUEMAGICMODULE_TRYGETNEWUNLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x1CC18C30)
#define RPG_CLIENT_ROGUEMAGICMODULE_TRYSHOWAREANAMEAFTERTELEPORT_OFFSET UNITYSDK_OFFSET(0x1CC17CE0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CC17910)
#define RPG_CLIENT_ROGUEMAGICMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CC19DA0)
#define RPG_CLIENT_ROGUEMAGICMODULE__BLOCKPERFORMANCEBYSETTLE_OFFSET UNITYSDK_OFFSET(0x1CC18A80)
#define RPG_CLIENT_ROGUEMAGICMODULE__DISPOSESTORYDATA_OFFSET UNITYSDK_OFFSET(0x1CC176F0)
#define RPG_CLIENT_ROGUEMAGICMODULE__GETMISCREALTIMEDATAPROMISED_OFFSET UNITYSDK_OFFSET(0x1CC18650)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAREAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CC1B910)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAUTODRESSINMAGICUNITCHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CC1B840)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICBATTLEFAILSETTLEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CC1AF30)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENABLETALENTSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1B990)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERLAYERSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1B100)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERROOMSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1B000)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1ACB0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICGETMISCREALTIMEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1B280)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1AD40)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEVELINFOUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CC1B200)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICQUERYSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1A900)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVEAVATARSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1B370)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVECOSTUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CC1B5C0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETAUTODRESSINMAGICUNITSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1B700)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETTLESCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1ADB0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1AB30)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYDATADISPOSE_OFFSET UNITYSDK_OFFSET(0x1CC199B0)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYINFOUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CC1BA10)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICUNITCOMPOSESCRSP_OFFSET UNITYSDK_OFFSET(0x1CC1B680)
#define RPG_CLIENT_ROGUEMAGICMODULE__ONSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x1CC1BA90)
#define RPG_CLIENT_ROGUEMAGICMODULE__SETNEWUNLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x1CC18FE0)
#define RPG_CLIENT_ROGUEMAGICMODULE__SETTLEGAME_B__11_0_OFFSET UNITYSDK_OFFSET(0x1CC1BB30)
#define RPG_CLIENT_ROGUEMAGICMODULE__SHOWCONFIRMSETTLEDIALOG_OFFSET UNITYSDK_OFFSET(0x1CC18E70)
#define RPG_CLIENT_ROGUEMAGICMODULE__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0x1CC1ABC0)
#define RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x1CC17C70)
#define RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1CC17A70)
#define RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSTORYDATA_OFFSET UNITYSDK_OFFSET(0x1CC17B40)
#define RPG_CLIENT_ROGUEMAGICMODULE__UNBLOCKPERFORMANCEBYSETTLE_OFFSET UNITYSDK_OFFSET(0x1CC17540)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicModule_TypeDefinitionIndex = 69349;

	class RogueMagicModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicUnitDataItem*>* _NewUnlockUnits; // 0x10
		::System::Action* _GetMiscRealTimeDataScRspCallback; // 0x18
		::System::Action* _WaitAutoShowEntrancePageCallback; // 0x20
		::RPG::Client::RogueMagicGameData* _GameData; // 0x28
		::RPG::Client::RogueMagicSettleData* _WaitAutoShowSettleData; // 0x30
		::RPG::GameCore::RogueMagicPowerConfig* _PowerConfig; // 0x38
		::RPG::Client::ExprConditionChecker* _EntranceUnlockChecker; // 0x40
		::HGAAAOGMIJB* _StoryData; // 0x48
		::RPG::Client::RogueMagicTalentInfo* _TalentInfo; // 0x50
		::RPG::Client::ExprConditionChecker* _EntranceGuideLockChecker; // 0x58
		::System::Action* _QueryScRspCallback; // 0x60
		::RPG::Client::RogueMagicStyleTypeCollection* _StyleTypeCollection; // 0x68
		::RPG::Client::RogueMagicAreaCollection* _AreaCollection; // 0x70
		::System::Collections::Generic::List_1<::RPG::Client::RogueMagicScepterDataItem*>* _NewUnlockScepters; // 0x78
		::RPG::Client::RogueMagicHandbookInfo* _HandbookInfo; // 0x80
		::RPG::Client::RogueMagicStoryArchiveCollection* _StoryArchiveCollection; // 0x88
		::System::Boolean _NeedShowAreaNameAfterTeleport; // 0x90
		// static const ::System::String* _PowerConfigPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Boolean TryShowAreaNameAfterTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_TRYSHOWAREANAMEAFTERTELEPORT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* ShowEntrancePagePromised(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEPROMISED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* ShowEntrancePageWithRogueSelectMainPagePromised(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SHOWENTRANCEPAGEWITHROGUESELECTMAINPAGEPROMISED_OFFSET))(this, a1);
		}

		::System::Void SetAutoShowEntrancePage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SETAUTOSHOWENTRANCEPAGE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* SettleGame()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_SETTLEGAME_OFFSET))(this);
		}

		::System::Void QuickSettleGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_QUICKSETTLEGAME_OFFSET))(this);
		}

		::System::Void TryGetNewUnlockItems(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_TRYGETNEWUNLOCKITEMS_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::RogueMagicPowerConfig* GetPowerConfig()
		{
			return ((::RPG::GameCore::RogueMagicPowerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GETPOWERCONFIG_OFFSET))(this);
		}

		::System::Void _TryAutoShowSettlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSETTLEPAGE_OFFSET))(this);
		}

		::System::Void _TryAutoShowStoryData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWSTORYDATA_OFFSET))(this);
		}

		::System::Void _TryAutoShowEntrancePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__TRYAUTOSHOWENTRANCEPAGE_OFFSET))(this);
		}

		::System::Void _DisposeStoryData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__DISPOSESTORYDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _GetMiscRealTimeDataPromised()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__GETMISCREALTIMEDATAPROMISED_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _ShowConfirmSettleDialog()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SHOWCONFIRMSETTLEDIALOG_OFFSET))(this);
		}

		::System::Void _SetNewUnlockItems(::GPHMAJPGGEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPHMAJPGGEK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SETNEWUNLOCKITEMS_OFFSET))(this, a1);
		}

		::System::Void _BlockPerformanceBySettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__BLOCKPERFORMANCEBYSETTLE_OFFSET))(this);
		}

		::System::Void _UnblockPerformanceBySettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__UNBLOCKPERFORMANCEBYSETTLE_OFFSET))(this);
		}

		::System::Void _OnRogueMagicStoryDataDispose(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYDATADISPOSE_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicGameData* get_GameData()
		{
			return ((::RPG::Client::RogueMagicGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_GAMEDATA_OFFSET))(this);
		}

		::RPG::Client::RogueMagicAreaCollection* get_AreaCollection()
		{
			return ((::RPG::Client::RogueMagicAreaCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_AREACOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueMagicTalentInfo* get_TalentInfo()
		{
			return ((::RPG::Client::RogueMagicTalentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_TALENTINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicStoryArchiveCollection* get_StoryArchiveCollection()
		{
			return ((::RPG::Client::RogueMagicStoryArchiveCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_STORYARCHIVECOLLECTION_OFFSET))(this);
		}

		::RPG::Client::RogueMagicHandbookInfo* get_HandbookInfo()
		{
			return ((::RPG::Client::RogueMagicHandbookInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_HANDBOOKINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicStyleTypeCollection* get_StyleTypeCollection()
		{
			return ((::RPG::Client::RogueMagicStyleTypeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_STYLETYPECOLLECTION_OFFSET))(this);
		}

		static ::System::UInt32 get_ActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ACTIVITYREWARDID_OFFSET))();
		}

		::RPG::Client::IActivityQuestRewardData* get_QuestRewardData()
		{
			return ((::RPG::Client::IActivityQuestRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_QUESTREWARDDATA_OFFSET))(this);
		}

		::System::Boolean get_IsEntranceUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ISENTRANCEUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsGuideLockEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ISGUIDELOCKENTRANCE_OFFSET))(this);
		}

		::System::Boolean get_IsSkipSettleAutoShowEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_ISSKIPSETTLEAUTOSHOWENTRANCE_OFFSET))(this);
		}

		::System::String* get_WebH5URL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE_GET_WEBH5URL_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRogueMagicQueryScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICQUERYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicStartScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTARTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicEnterScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicLeaveScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEAVESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicSettleScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETTLESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicBattleFailSettleInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICBATTLEFAILSETTLEINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicEnterRoomScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERROOMSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicEnterLayerScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENTERLAYERSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicLevelInfoUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICLEVELINFOUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicGetMiscRealTimeDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICGETMISCREALTIMEDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncRogueCoin(::GCBCKOKEAJH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GCBCKOKEAJH*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SYNCROGUECOIN_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicReviveAvatarScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVEAVATARSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicReviveCostUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICREVIVECOSTUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicUnitComposeScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICUNITCOMPOSESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicSetAutoDressInMagicUnitScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSETAUTODRESSINMAGICUNITSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicAutoDressInMagicUnitChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAUTODRESSINMAGICUNITCHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicAreaUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICAREAUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicEnableTalentScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICENABLETALENTSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRogueMagicStoryInfoUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONROGUEMAGICSTORYINFOUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSyncRogueHandbookDataUpdateScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__ONSYNCROGUEHANDBOOKDATAUPDATESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _SettleGame_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICMODULE__SETTLEGAME_B__11_0_OFFSET))(this);
		}

	};
}
