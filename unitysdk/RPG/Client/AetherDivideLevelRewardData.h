#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CE260)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GETDISPLAYQUESTDATALIST_OFFSET UNITYSDK_OFFSET(0x1B2CD8B0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_CANTAKEREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1B2CE1C0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_CANTAKEREWARDRANKIDLIST_OFFSET UNITYSDK_OFFSET(0x1B2CE1E0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_HASQUESTREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1B2CE200)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_HASREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x1B2C7AC0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B2CDB20)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_SET_CANTAKEREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x1B2CE1D0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_SET_CANTAKEREWARDRANKIDLIST_OFFSET UNITYSDK_OFFSET(0x1B2CE1F0)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__ISQUESTHASREWARD_OFFSET UNITYSDK_OFFSET(0x1B2CE110)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__REFRESHCHALLENGEREWARD_OFFSET UNITYSDK_OFFSET(0x1B2CDD10)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__REFRESHTRAINERQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x1B2CDB80)
#define RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__UPDATEBYQUESTID_OFFSET UNITYSDK_OFFSET(0x1B2CE020)

namespace RPG::Client
{
	inline static constexpr unsigned int AetherDivideLevelRewardData_TypeDefinitionIndex = 63648;

	class AetherDivideLevelRewardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeRewardQuestIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeRewardRankIDList_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetDisplayQuestDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GETDISPLAYQUESTDATALIST_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_REFRESH_OFFSET))(this);
		}

		::System::Void _RefreshTrainerQuestReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__REFRESHTRAINERQUESTREWARD_OFFSET))(this);
		}

		::System::Void _RefreshChallengeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__REFRESHCHALLENGEREWARD_OFFSET))(this);
		}

		::System::Boolean _IsQuestHasReward(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__ISQUESTHASREWARD_OFFSET))(this, a1);
		}

		::System::Void _UpdateByQuestID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA__UPDATEBYQUESTID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CanTakeRewardQuestIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_CANTAKEREWARDQUESTIDLIST_OFFSET))(this);
		}

		::System::Void set_CanTakeRewardQuestIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_SET_CANTAKEREWARDQUESTIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CanTakeRewardRankIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_CANTAKEREWARDRANKIDLIST_OFFSET))(this);
		}

		::System::Void set_CanTakeRewardRankIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_SET_CANTAKEREWARDRANKIDLIST_OFFSET))(this, a1);
		}

		::System::Boolean get_HasRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_HASREWARDCANTAKE_OFFSET))(this);
		}

		::System::Boolean get_HasQuestRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AETHERDIVIDELEVELREWARDDATA_GET_HASQUESTREWARDCANTAKE_OFFSET))(this);
		}

	};
}
