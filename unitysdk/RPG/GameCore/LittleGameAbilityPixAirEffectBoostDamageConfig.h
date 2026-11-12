#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEffectBoostDamageConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA18F30)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA18F40)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA18E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBoostDamageConfig_TypeDefinitionIndex = 21693;

	class LittleGameAbilityPixAirEffectBoostDamageConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostValue; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostDamageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostDamageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTDAMAGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
