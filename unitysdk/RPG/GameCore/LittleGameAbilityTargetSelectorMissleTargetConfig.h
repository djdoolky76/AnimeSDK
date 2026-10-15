#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorMissleTargetConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DAB10)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DAB20)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DAA80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorMissleTargetConfig_TypeDefinitionIndex = 21372;

	class LittleGameAbilityTargetSelectorMissleTargetConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorMissleTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORMISSLETARGETCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
