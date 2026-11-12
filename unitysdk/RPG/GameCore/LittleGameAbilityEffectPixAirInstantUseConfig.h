#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityEffectPixAirInstantUseConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA188C0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA188D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA18830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectPixAirInstantUseConfig_TypeDefinitionIndex = 21687;

	class LittleGameAbilityEffectPixAirInstantUseConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirInstantUseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectPixAirInstantUseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirInstantUseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectPixAirInstantUseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRINSTANTUSECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
