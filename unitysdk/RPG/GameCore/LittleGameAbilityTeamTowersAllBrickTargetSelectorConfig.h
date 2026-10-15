#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ADB00)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7ADB10)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7ADA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig_TypeDefinitionIndex = 21419;

	class LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersAllBrickTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSALLBRICKTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
