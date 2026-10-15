#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorPlaneConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DAC80)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DAC90)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DAB80)

namespace RPG::GameCore
{
	class LittleGameAbilityTargetSelectorPlaneConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Boolean IsAlly; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORPLANECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
