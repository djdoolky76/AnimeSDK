#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityPixAirEffectStartStormConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D89F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D8A00)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D8960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectStartStormConfig_TypeDefinitionIndex = 21364;

	class LittleGameAbilityPixAirEffectStartStormConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectStartStormConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectStartStormConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectStartStormConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectStartStormConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSTARTSTORMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
