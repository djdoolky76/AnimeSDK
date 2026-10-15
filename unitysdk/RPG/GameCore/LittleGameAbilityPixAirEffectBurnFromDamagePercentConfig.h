#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D7FA0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D7FB0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D7EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig_TypeDefinitionIndex = 21362;

	class LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBurnFromDamagePercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBURNFROMDAMAGEPERCENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
