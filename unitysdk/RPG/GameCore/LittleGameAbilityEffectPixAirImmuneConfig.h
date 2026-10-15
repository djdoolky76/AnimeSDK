#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityEffectPixAirImmuneConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A9720)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A9730)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A9690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectPixAirImmuneConfig_TypeDefinitionIndex = 21345;

	class LittleGameAbilityEffectPixAirImmuneConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirImmuneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectPixAirImmuneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectPixAirImmuneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectPixAirImmuneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTPIXAIRIMMUNECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
