#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTeamTowersDestroyBrickEffectConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ADD00)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7ADD10)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7ADC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersDestroyBrickEffectConfig_TypeDefinitionIndex = 21414;

	class LittleGameAbilityTeamTowersDestroyBrickEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersDestroyBrickEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersDestroyBrickEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersDestroyBrickEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersDestroyBrickEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
