#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEffectDamageBoostPercentConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AA7C0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AA7D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AA700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectDamageBoostPercentConfig_TypeDefinitionIndex = 21355;

	class LittleGameAbilityPixAirEffectDamageBoostPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostPercent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageBoostPercentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageBoostPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageBoostPercentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageBoostPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEBOOSTPERCENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
