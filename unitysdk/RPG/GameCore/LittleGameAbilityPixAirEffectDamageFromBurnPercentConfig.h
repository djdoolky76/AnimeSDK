#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AA910)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AA920)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AA850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig_TypeDefinitionIndex = 21359;

	class LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectDamageFromBurnPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTDAMAGEFROMBURNPERCENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
