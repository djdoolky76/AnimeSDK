#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitChallenge; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ANYQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0xDC6CC00)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_CHECKHASANYTRAITQUESTFINISHEDBYTYPE_OFFSET UNITYSDK_OFFSET(0xDC6BA70)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC66290)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETALLQUESTDATA_OFFSET UNITYSDK_OFFSET(0xDC6BC60)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETFINISHRATIO_OFFSET UNITYSDK_OFFSET(0xDC6CF10)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCHALLENGES_OFFSET UNITYSDK_OFFSET(0xDC6B7D0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_OFFSET UNITYSDK_OFFSET(0xDC6C030)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGS_OFFSET UNITYSDK_OFFSET(0xDC6BE20)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_ALLRELICCOUNT_OFFSET UNITYSDK_OFFSET(0xDC6D580)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_HAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0xDC6D5D0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xDC6CDF0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ISALLQUESTGOT_OFFSET UNITYSDK_OFFSET(0xDC6D0D0)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT_TAKEALLQUESTREWARD_OFFSET UNITYSDK_OFFSET(0xDC6C370)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETHAVEGOTTENRELICCOUNT_OFFSET UNITYSDK_OFFSET(0xDC6D400)
#define RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETRELICCOUNT_OFFSET UNITYSDK_OFFSET(0xDC6D280)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSeasonTrait_TypeDefinitionIndex = 67314;

	class GridFightSeasonTrait : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitChallenge*>* _TraitChallenges; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitChallenge*>* GetTraitChallenges(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitChallenge*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCHALLENGES_OFFSET))(this, a1);
		}

		::System::Boolean CheckHasAnyTraitQuestFinishedByType(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_CHECKHASANYTRAITQUESTFINISHEDBYTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* GetAllQuestData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETALLQUESTDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetTraitConfigs(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>* GetTraitConfigsWithoutCheckCompleted(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitConfig*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETTRAITCONFIGSWITHOUTCHECKCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void TakeAllQuestReward(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_TAKEALLQUESTREWARD_OFFSET))(this, a1);
		}

		::System::Boolean AnyQuestFinished(::RPG::GameCore::GridFightTraitType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ANYQUESTFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Int32 GetFinishRatio()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GETFINISHRATIO_OFFSET))(this);
		}

		::System::Boolean IsAllQuestGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_ISALLQUESTGOT_OFFSET))(this);
		}

		::System::Int32 _GetRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETRELICCOUNT_OFFSET))(this);
		}

		::System::Int32 _GetHaveGottenRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT__GETHAVEGOTTENRELICCOUNT_OFFSET))(this);
		}

		::System::Int32 get_AllRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_ALLRELICCOUNT_OFFSET))(this);
		}

		::System::Int32 get_HaveGottenRelicCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSEASONTRAIT_GET_HAVEGOTTENRELICCOUNT_OFFSET))(this);
		}

	};
}
