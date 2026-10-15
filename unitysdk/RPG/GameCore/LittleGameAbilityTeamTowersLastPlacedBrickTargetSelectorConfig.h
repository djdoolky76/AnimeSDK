#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AE230)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AE240)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AE170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig_TypeDefinitionIndex = 21418;

	class LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Count; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersLastPlacedBrickTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSLASTPLACEDBRICKTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
