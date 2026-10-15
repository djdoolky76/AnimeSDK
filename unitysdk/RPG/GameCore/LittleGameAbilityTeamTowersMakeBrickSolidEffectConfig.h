#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AE4A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AE4B0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AE410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig_TypeDefinitionIndex = 21415;

	class LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersMakeBrickSolidEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSMAKEBRICKSOLIDEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
