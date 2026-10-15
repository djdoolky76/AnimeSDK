#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierForceChangeRogueAdventureRewardLevelConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA16E00)
#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA16E10)
#define RPG_GAMECORE_ROGUEMODIFIERFORCECHANGEROGUEADVENTUREREWARDLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA16DC0)

namespace RPG::GameCore
{
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
