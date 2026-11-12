#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class MFELEEHGHLA;
namespace RPG::Client { class AetherDivideChallengeDataItem; }
namespace RPG::GameCore { class AetherDivideChallengeRankRow; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF7F170)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF7D7D0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETCHALLENGEDATABYID_OFFSET UNITYSDK_OFFSET(0xCF7DC80)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETCHALLENGERANKLIST_OFFSET UNITYSDK_OFFSET(0xCF7E3E0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETRANKNAME_OFFSET UNITYSDK_OFFSET(0xCF7E330)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_CHALLENGEDATAITEMS_OFFSET UNITYSDK_OFFSET(0xCF7F0A0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_INFINITECHALLENGEDATAITEM_OFFSET UNITYSDK_OFFSET(0xCF7F0C0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_INFINITECHALLENGERANK_OFFSET UNITYSDK_OFFSET(0xCF7F100)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_LASTCHALLENGELINEUPSLOT_OFFSET UNITYSDK_OFFSET(0xCF7F150)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_INITALLCHALLENGEDATAITEMS_OFFSET UNITYSDK_OFFSET(0xCF7D570)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_INIT_OFFSET UNITYSDK_OFFSET(0xCF7D500)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISALLRANKFINISHED_OFFSET UNITYSDK_OFFSET(0xCF7EF40)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKNEW_OFFSET UNITYSDK_OFFSET(0xCF7EB10)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKSHOW_OFFSET UNITYSDK_OFFSET(0xCF7EA90)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKUNLOCK_OFFSET UNITYSDK_OFFSET(0xCF7E600)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISTARGETRANKFINISHED_OFFSET UNITYSDK_OFFSET(0xCF7E900)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ONMISSIONSYNC_OFFSET UNITYSDK_OFFSET(0xCF7DF30)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ONRANKTABITEMCLICK_OFFSET UNITYSDK_OFFSET(0xCF7EC30)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_REFRESHINFINITECHALLENGE_OFFSET UNITYSDK_OFFSET(0xCF7E250)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0xCF7DDF0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETCHALLENGEREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xCF7DE90)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETINIFINITECHALLENGEMISSIONID_OFFSET UNITYSDK_OFFSET(0xCF7DF70)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SET_CHALLENGEDATAITEMS_OFFSET UNITYSDK_OFFSET(0xCF7F0B0)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SET_LASTCHALLENGELINEUPSLOT_OFFSET UNITYSDK_OFFSET(0xCF7F160)
#define RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_UPDATEBYSERVER_OFFSET UNITYSDK_OFFSET(0xCF7D8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideChallengeData_TypeDefinitionIndex = 63629;

	class AetherDivideChallengeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>* _ChallengeDataItems_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockedRankSet; // 0x18
		::RPG::Client::AetherDivideChallengeDataItem* _InfiniteChallengeDataItem; // 0x20
		::System::UInt32 _LastChallengeLineupSlot_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateByServer(::MFELEEHGHLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFELEEHGHLA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_UPDATEBYSERVER_OFFSET))(this, a1);
		}

		::System::Void SetChallengeFinish(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETCHALLENGEFINISH_OFFSET))(this, a1);
		}

		::System::Void SetChallengeRewardTaken(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETCHALLENGEREWARDTAKEN_OFFSET))(this, a1);
		}

		::System::Void OnMissionSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ONMISSIONSYNC_OFFSET))(this);
		}

		::System::Void SetInifiniteChallengeMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SETINIFINITECHALLENGEMISSIONID_OFFSET))(this, a1);
		}

		::System::Void RefreshInfiniteChallenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_REFRESHINFINITECHALLENGE_OFFSET))(this);
		}

		::RPG::Client::TextID GetRankName(::System::UInt32 a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETRANKNAME_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideChallengeDataItem* GetChallengeDataByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::AetherDivideChallengeDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETCHALLENGEDATABYID_OFFSET))(this, a1);
		}

		::System::Void InitAllChallengeDataItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_INITALLCHALLENGEDATAITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AetherDivideChallengeRankRow*>* GetChallengeRankList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AetherDivideChallengeRankRow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GETCHALLENGERANKLIST_OFFSET))(this);
		}

		::System::Boolean IsRankUnlock(::RPG::GameCore::AetherDivideChallengeRankRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AetherDivideChallengeRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKUNLOCK_OFFSET))(this, a1);
		}

		::System::Boolean IsRankShow(::RPG::GameCore::AetherDivideChallengeRankRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AetherDivideChallengeRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKSHOW_OFFSET))(this, a1);
		}

		::System::Boolean IsRankNew(::RPG::GameCore::AetherDivideChallengeRankRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AetherDivideChallengeRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISRANKNEW_OFFSET))(this, a1);
		}

		::System::Void OnRankTabItemClick(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ONRANKTABITEMCLICK_OFFSET))(this, a1);
		}

		::System::Boolean IsTargetRankFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISTARGETRANKFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean IsAllRankFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_ISALLRANKFINISHED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>* get_ChallengeDataItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_CHALLENGEDATAITEMS_OFFSET))(this);
		}

		::System::Void set_ChallengeDataItems(::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AetherDivideChallengeDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SET_CHALLENGEDATAITEMS_OFFSET))(this, a1);
		}

		::RPG::Client::AetherDivideChallengeDataItem* get_InfiniteChallengeDataItem()
		{
			return ((::RPG::Client::AetherDivideChallengeDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_INFINITECHALLENGEDATAITEM_OFFSET))(this);
		}

		::System::UInt32 get_InfiniteChallengeRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_INFINITECHALLENGERANK_OFFSET))(this);
		}

		::System::UInt32 get_LastChallengeLineupSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_GET_LASTCHALLENGELINEUPSLOT_OFFSET))(this);
		}

		::System::Void set_LastChallengeLineupSlot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDECHALLENGEDATA_SET_LASTCHALLENGELINEUPSLOT_OFFSET))(this, a1);
		}

	};
}
