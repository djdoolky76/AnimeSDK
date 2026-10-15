#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityEffectPixAirApplyJamConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A9600)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A9610)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A9540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectPixAirApplyJamConfig_TypeDefinitionIndex = 21343;

	class LittleGameAbilityEffectPixAirApplyJamConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* JamDuration; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirApplyJamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectPixAirApplyJamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirApplyJamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectPixAirApplyJamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRAPPLYJAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
