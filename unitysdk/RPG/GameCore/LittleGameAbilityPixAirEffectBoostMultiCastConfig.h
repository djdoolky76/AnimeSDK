#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEffectBoostMultiCastConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D7BB0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D7BC0)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D7AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectBoostMultiCastConfig_TypeDefinitionIndex = 21354;

	class LittleGameAbilityPixAirEffectBoostMultiCastConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BoostValue; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostMultiCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostMultiCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostMultiCastConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectBoostMultiCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTBOOSTMULTICASTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
