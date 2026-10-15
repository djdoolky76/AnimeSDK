#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorLaserTargetConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DA910)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DA920)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DA880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorLaserTargetConfig_TypeDefinitionIndex = 21373;

	class LittleGameAbilityTargetSelectorLaserTargetConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorLaserTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORLASERTARGETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
