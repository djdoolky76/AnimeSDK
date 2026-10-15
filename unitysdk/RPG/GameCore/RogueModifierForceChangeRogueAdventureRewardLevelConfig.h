#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierForceChangeRogueAdventureRewardLevelConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E9560)
#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E9570)
#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E9520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierForceChangeRogueAdventureRewardLevelConfig_TypeDefinitionIndex = 17831;

	class RogueModifierForceChangeRogueAdventureRewardLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierForceChangeRogueAdventureRewardLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
