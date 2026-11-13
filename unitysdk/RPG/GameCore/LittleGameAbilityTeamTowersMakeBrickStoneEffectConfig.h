#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F25C9D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F25C9E0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F25C940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig_TypeDefinitionIndex = 21751;

	class LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickStoneEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSTONEEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
