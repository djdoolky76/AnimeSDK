#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityFinalityBattle::Level { class FinalityBattleBattleTargetItem; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CNLEKPEHMGG_AJHLPHIJODA_OFFSET UNITYSDK_OFFSET(0xDA50D10)
#define CNLEKPEHMGG_CTOR_OFFSET UNITYSDK_OFFSET(0xDA50CB0)
#define CNLEKPEHMGG_GET_ONGOINGLEVELID_OFFSET UNITYSDK_OFFSET(0xDA515B0)
#define CNLEKPEHMGG_PDHECJOBCLP_OFFSET UNITYSDK_OFFSET(0xDA50CC0)
#define CNLEKPEHMGG_SET_ONGOINGLEVELID_OFFSET UNITYSDK_OFFSET(0xDA515C0)

inline static constexpr unsigned int CNLEKPEHMGG_TypeDefinitionIndex = 82098;

	class CNLEKPEHMGG : public ::System::Object
	{
	public:
		::System::UInt32 _OngoingLevelID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLEKPEHMGG_CTOR_OFFSET))(this);
		}

		::System::Void PDHECJOBCLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNLEKPEHMGG_PDHECJOBCLP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>* AJHLPHIJODA()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityFinalityBattle::Level::FinalityBattleBattleTargetItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLEKPEHMGG_AJHLPHIJODA_OFFSET))(this);
		}

		::System::UInt32 get_OngoingLevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNLEKPEHMGG_GET_ONGOINGLEVELID_OFFSET))(this);
		}

		::System::Void set_OngoingLevelID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNLEKPEHMGG_SET_ONGOINGLEVELID_OFFSET))(this, a1);
		}

	};
