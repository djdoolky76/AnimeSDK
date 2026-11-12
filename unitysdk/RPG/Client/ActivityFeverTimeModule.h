#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNNPOIJENJC.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/ActivityRank.h"
#include "unitysdk/RPG/GameCore/FeverTimePeriodType.h"
class KPNHGDGLICN;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityFeverTimeConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASPLAYLEVELUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xCD2B7B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASSEENLEVEL_OFFSET UNITYSDK_OFFSET(0xCD28790)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKISUNLOCK_OFFSET UNITYSDK_OFFSET(0xCD2BC00)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xCD2C220)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETBATTLERANK_OFFSET UNITYSDK_OFFSET(0xCD29930)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYBATTLERANK_OFFSET UNITYSDK_OFFSET(0xCD28A80)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYTURN_OFFSET UNITYSDK_OFFSET(0xCD2A2C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xCD2A5D0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETMONSTERDATALISTBYWAVEID_OFFSET UNITYSDK_OFFSET(0xCD2BD00)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP1BUFFID_OFFSET UNITYSDK_OFFSET(0xCD2A8C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP2BUFFID_OFFSET UNITYSDK_OFFSET(0xCD2A9F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP3BUFFID_OFFSET UNITYSDK_OFFSET(0xCD2AB20)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARSBYFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0xCD2B440)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xCD2AD80)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTUTORIALGROUPIDBYBUFFID_OFFSET UNITYSDK_OFFSET(0xCD2B5C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLECURRENTLEFTROUND_OFFSET UNITYSDK_OFFSET(0xCD2C030)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0xCD2BFF0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEHISTORYLEFTROUND_OFFSET UNITYSDK_OFFSET(0xCD2C070)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLERANK_OFFSET UNITYSDK_OFFSET(0xCD2C0B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_CURRENTFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0xCD2BFD0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_FEVERTIMEBATTLEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0xCD2C170)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_GUIDEMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0xCD2C130)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_ISNEWRANK_OFFSET UNITYSDK_OFFSET(0xCD2C0F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0xCD2C200)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_HASLEVELNOTCHALLENGED_OFFSET UNITYSDK_OFFSET(0xCD2BA30)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xCD28B70)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISINACTIVITYFEVERTIMEBATTLE_OFFSET UNITYSDK_OFFSET(0xCD29A90)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISSHOWEVERYDAYREDDOT_OFFSET UNITYSDK_OFFSET(0xCD281C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_RESTARTFEVERTIMEBATTLE_OFFSET UNITYSDK_OFFSET(0xCD2B390)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVELINEUPDATA_OFFSET UNITYSDK_OFFSET(0xCD2A760)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP1BUFFID_OFFSET UNITYSDK_OFFSET(0xCD2ABC0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP2BUFFID_OFFSET UNITYSDK_OFFSET(0xCD2ACA0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xCD2A120)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0xCD2A4F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASPLAYLEVELUNLOCKANIMATION_OFFSET UNITYSDK_OFFSET(0xCD2B8C0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASSEENLEVEL_OFFSET UNITYSDK_OFFSET(0xCD2B640)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_CURRENTFEVERTIMEID_OFFSET UNITYSDK_OFFSET(0xCD2BFE0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_FEVERTIMEBATTLEPERIODTYPE_OFFSET UNITYSDK_OFFSET(0xCD2C1B0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_REDDOTQUESTSERIES_OFFSET UNITYSDK_OFFSET(0xCD2C210)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_STARTFEVERTIMEBATTLE_OFFSET UNITYSDK_OFFSET(0xCD2AF30)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xCD2A380)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xCD29130)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xCD28E80)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARAUTOSHOWPARAM_OFFSET UNITYSDK_OFFSET(0xCD2A4A0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARBATTLETEMPPARAM_OFFSET UNITYSDK_OFFSET(0xCD29D80)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDENTERFEVERTIMEACTIVITYSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0xCD29200)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDGETFEVERTIMEACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0xCD29320)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__GETFEVERTIMEAVATARLISTFROMIDLIST_OFFSET UNITYSDK_OFFSET(0xCD2B100)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITCONSTVALUE_OFFSET UNITYSDK_OFFSET(0xCD28D40)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITMODULERELATEDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xCD2A1F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xCD29C60)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET UNITYSDK_OFFSET(0xCD299F0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONFEVERTIMEACTIVITYBATTLEENDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xCD297E0)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__REFRESHFINISHEDQUEST_OFFSET UNITYSDK_OFFSET(0xCD29DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeModule_TypeDefinitionIndex = 62899;

	class ActivityFeverTimeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BattleAvatarIDList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotQuestSeries_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _FeverTimeBattleRankDict; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _FeverTimeHistoryTurnDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::ActivityRank>* _FeverTimeActivityRankDict; // 0x30
		::System::Collections::Generic::Dictionary_2<::NNNPOIJENJC, ::RPG::GameCore::ActivityRank>* _FeverTimeBattleRankToActivityRank; // 0x38
		::RPG::GameCore::ActivityRank _BattleRank; // 0x40
		::System::UInt32 _BattleHistoryLeftRound; // 0x44
		::System::UInt32 _CurrentFeverTimeID_k__BackingField; // 0x48
		::System::UInt32 _P2BuffID; // 0x4C
		::System::Boolean _ShowMainPage; // 0x50
		::System::Boolean _IsNewRank; // 0x51
		::System::Byte _padding0[0x2];
		::System::UInt32 _P1BuffID; // 0x54
		::RPG::GameCore::FeverTimePeriodType _BattlePeriodType; // 0x58
		::System::UInt32 _BattleCurrentLeftRound; // 0x5C
		::System::UInt32 _GuideMainMissionID; // 0x60
		::System::UInt32 _FinalQuestID; // 0x64
		::System::UInt32 _BattleFeverTimeID; // 0x68
		::System::UInt32 _AutoShowFeverTimeID; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdEnterFeverTimeActivityStageScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDENTERFEVERTIMEACTIVITYSTAGESCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _CmdGetFeverTimeActivityDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CMDGETFEVERTIMEACTIVITYDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnFeverTimeActivityBattleEndScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONFEVERTIMEACTIVITYBATTLEENDSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBattleResultBeforePhase(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONBATTLERESULTBEFOREPHASE_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _RefreshFinishedQuest(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__REFRESHFINISHEDQUEST_OFFSET))(this, a1);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::UInt32 GetHistoryTurn(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYTURN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityRank GetHistoryBattleRank(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ActivityRank(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETHISTORYBATTLERANK_OFFSET))(this, a1);
		}

		::System::Int32 GetBattleRank(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETBATTLERANK_OFFSET))(this, a1);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitBattle(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInActivityFeverTimeBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISINACTIVITYFEVERTIMEBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLineupData(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETLINEUPDATA_OFFSET))(this, a1);
		}

		::System::Void SaveLineupData(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVELINEUPDATA_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetP1BuffID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP1BUFFID_OFFSET))(this, a1);
		}

		::System::UInt32 GetP2BuffID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP2BUFFID_OFFSET))(this, a1);
		}

		::System::UInt32 GetP3BuffID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETP3BUFFID_OFFSET))(this, a1);
		}

		::System::Void SaveP1BuffID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP1BUFFID_OFFSET))(this, a1, a2);
		}

		::System::Void SaveP2BuffID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SAVEP2BUFFID_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARS_OFFSET))(this, a1);
		}

		::System::Void StartFeverTimeBattle(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_STARTFEVERTIMEBATTLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void RestartFeverTimeBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_RESTARTFEVERTIMEBATTLE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatarsByFeverTimeID(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTRIALAVATARSBYFEVERTIMEID_OFFSET))(this, a1);
		}

		::System::UInt32 GetTutorialGroupIDByBuffID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETTUTORIALGROUPIDBYBUFFID_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasSeenLevel(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASSEENLEVEL_OFFSET))(this, a1);
		}

		::System::Void SetHasSeenLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASSEENLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasPlayLevelUnLockAnimation(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKHASPLAYLEVELUNLOCKANIMATION_OFFSET))(this, a1);
		}

		::System::Void SetHasPlayLevelUnLockAnimation(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SETHASPLAYLEVELUNLOCKANIMATION_OFFSET))(this, a1);
		}

		::System::Boolean IsShowEveryDayRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_ISSHOWEVERYDAYREDDOT_OFFSET))(this);
		}

		::System::Boolean HasLevelNotChallenged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_HASLEVELNOTCHALLENGED_OFFSET))(this);
		}

		::System::Boolean CheckIsUnLock(::RPG::GameCore::ActivityFeverTimeConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ActivityFeverTimeConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_CHECKISUNLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataListByWaveID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GETMONSTERDATALISTBYWAVEID_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_CurrentFeverTimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_CURRENTFEVERTIMEID_OFFSET))(this);
		}

		::System::Void set_CurrentFeverTimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_CURRENTFEVERTIMEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleFeverTimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEFEVERTIMEID_OFFSET))(this);
		}

		::System::UInt32 get_BattleCurrentLeftRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLECURRENTLEFTROUND_OFFSET))(this);
		}

		::System::UInt32 get_BattleHistoryLeftRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLEHISTORYLEFTROUND_OFFSET))(this);
		}

		::RPG::GameCore::ActivityRank get_BattleRank()
		{
			return ((::RPG::GameCore::ActivityRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_BATTLERANK_OFFSET))(this);
		}

		::System::Boolean get_IsNewRank()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_ISNEWRANK_OFFSET))(this);
		}

		::System::UInt32 get_GuideMainMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_GUIDEMAINMISSIONID_OFFSET))(this);
		}

		::RPG::GameCore::FeverTimePeriodType get_FeverTimeBattlePeriodType()
		{
			return ((::RPG::GameCore::FeverTimePeriodType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_FEVERTIMEBATTLEPERIODTYPE_OFFSET))(this);
		}

		::System::Void set_FeverTimeBattlePeriodType(::RPG::GameCore::FeverTimePeriodType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FeverTimePeriodType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_FEVERTIMEBATTLEPERIODTYPE_OFFSET))(this, a1);
		}

		::System::Void _ClearBattleTempParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARBATTLETEMPPARAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::KPNHGDGLICN*>* _GetFeverTimeAvatarListFromIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::KPNHGDGLICN*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__GETFEVERTIMEAVATARLISTFROMIDLIST_OFFSET))(this, a1);
		}

		::System::Void _ClearAutoShowParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__CLEARAUTOSHOWPARAM_OFFSET))(this);
		}

		::System::Void _InitConstValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITCONSTVALUE_OFFSET))(this);
		}

		::System::Void _InitModuleRelatedMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE__INITMODULERELATEDMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RedDotQuestSeries()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_GET_REDDOTQUESTSERIES_OFFSET))(this);
		}

		::System::Void set_RedDotQuestSeries(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE_SET_REDDOTQUESTSERIES_OFFSET))(this, a1);
		}

	};
}
