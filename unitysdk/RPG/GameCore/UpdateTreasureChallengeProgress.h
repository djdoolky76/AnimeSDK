#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class UpdateTreasureChallengeProgress; }

#define RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC78AF0)
#define RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC78B00)
#define RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC78AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UpdateTreasureChallengeProgress_TypeDefinitionIndex = 20470;

	class UpdateTreasureChallengeProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaidTargetID; // 0x18
		::System::Boolean IsIncrease; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 DeltaValue; // 0x20
		::System::Boolean UseDynamicRaidTargetID; // 0x24
		::System::Byte _padding1[0x3];
		::RPG::GameCore::DynamicString* DynamicRaidTargetID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UpdateTreasureChallengeProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UpdateTreasureChallengeProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UpdateTreasureChallengeProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UpdateTreasureChallengeProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UPDATETREASURECHALLENGEPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
