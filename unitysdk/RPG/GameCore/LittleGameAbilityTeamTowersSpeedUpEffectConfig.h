#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityTeamTowersSpeedUpEffectConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DC310)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DC320)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DC250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersSpeedUpEffectConfig_TypeDefinitionIndex = 21412;

	class LittleGameAbilityTeamTowersSpeedUpEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Ratio; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersSpeedUpEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersSpeedUpEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersSpeedUpEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTeamTowersSpeedUpEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
