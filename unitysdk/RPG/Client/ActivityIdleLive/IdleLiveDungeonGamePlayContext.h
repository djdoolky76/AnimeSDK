#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPFNEECKCMK;
class LDCHLAKNODJ;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonData; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonGamePlayAssistData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_ADDBATTLEHISTORY_OFFSET UNITYSDK_OFFSET(0x1D6A04B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1320)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_EXITDUNGEON_OFFSET UNITYSDK_OFFSET(0x1D6A0370)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GETFINALPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D6A0B30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_ASSISTDATALIST_OFFSET UNITYSDK_OFFSET(0x1D6A0E40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_BATTLEAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x1D6A1230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_BATTLEHISTORY_OFFSET UNITYSDK_OFFSET(0x1D6A11C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_DUNGEONDATA_OFFSET UNITYSDK_OFFSET(0x1D6A12A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_INCOMEHPPROGRESSDELTA_OFFSET UNITYSDK_OFFSET(0x1D6A0E20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_ISINDUNGEON_OFFSET UNITYSDK_OFFSET(0x1D6A12E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_PROGRESSDELTA_OFFSET UNITYSDK_OFFSET(0x1D6A0E00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_RESULTLIST_OFFSET UNITYSDK_OFFSET(0x1D6A0E80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_REWARDLIST_OFFSET UNITYSDK_OFFSET(0x1D6A1130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_HANDLEEARLYFINISHDUNGEON_OFFSET UNITYSDK_OFFSET(0x1D6A03C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x1D69FA00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SETCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1D6A05B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SET_INCOMEHPPROGRESSDELTA_OFFSET UNITYSDK_OFFSET(0x1D6A0E30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SET_PROGRESSDELTA_OFFSET UNITYSDK_OFFSET(0x1D6A0E10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D6A0600)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT__GETRESULTLIST_OFFSET UNITYSDK_OFFSET(0x1D6A0ED0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonGamePlayContext_TypeDefinitionIndex = 77533;

	class IdleLiveDungeonGamePlayContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _RewardList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _BattleHistory; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>* _AssistDataList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _BattleAvatarIdList; // 0x28
		::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* _DungeonData; // 0x30
		::System::Int32 _ProgressDelta_k__BackingField; // 0x38
		::System::Boolean _IsInDungeon; // 0x3C
		::System::Byte _padding0[0x3];
		::System::Int32 _IncomeHpProgressDelta_k__BackingField; // 0x40
		::System::UInt32 _CurrentProgress; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Void Init(::CPFNEECKCMK* a1, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CPFNEECKCMK*, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void ExitDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_EXITDUNGEON_OFFSET))(this);
		}

		::System::Void HandleEarlyFinishDungeon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_HANDLEEARLYFINISHDUNGEON_OFFSET))(this);
		}

		::System::Void AddBattleHistory(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_ADDBATTLEHISTORY_OFFSET))(this, a1);
		}

		::System::Void SetCurrentProgress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SETCURRENTPROGRESS_OFFSET))(this, a1);
		}

		::System::Void Update(::LDCHLAKNODJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCHLAKNODJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_UPDATE_OFFSET))(this, a1);
		}

		::System::UInt32 GetFinalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GETFINALPROGRESS_OFFSET))(this);
		}

		::System::Int32 get_ProgressDelta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_PROGRESSDELTA_OFFSET))(this);
		}

		::System::Void set_ProgressDelta(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SET_PROGRESSDELTA_OFFSET))(this, a1);
		}

		::System::Int32 get_IncomeHpProgressDelta()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_INCOMEHPPROGRESSDELTA_OFFSET))(this);
		}

		::System::Void set_IncomeHpProgressDelta(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_SET_INCOMEHPPROGRESSDELTA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>* get_AssistDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_ASSISTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>* get_ResultList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_RESULTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>* _GetResultList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityIdleLive::IdleLiveDungeonGamePlayAssistData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT__GETRESULTLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* get_RewardList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_REWARDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleHistory()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_BATTLEHISTORY_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BattleAvatarIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_BATTLEAVATARIDLIST_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDungeonData* get_DungeonData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDungeonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_DUNGEONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsInDungeon()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONGAMEPLAYCONTEXT_GET_ISINDUNGEON_OFFSET))(this);
		}

	};
}
