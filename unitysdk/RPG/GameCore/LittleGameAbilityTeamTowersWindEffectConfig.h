#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityTeamTowersWindEffectConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DC3F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DC400)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DC3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersWindEffectConfig_TypeDefinitionIndex = 21413;

	class LittleGameAbilityTeamTowersWindEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* MinForce; // 0x10
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* MaxForce; // 0x18
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* AffectHeight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersWindEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersWindEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersWindEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersWindEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSWINDEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
