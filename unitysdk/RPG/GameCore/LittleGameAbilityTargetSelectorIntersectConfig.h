#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorIntersectConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7ACD00)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7ACD10)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7ACCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorIntersectConfig_TypeDefinitionIndex = 21369;

	class LittleGameAbilityTargetSelectorIntersectConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*>* Targets; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORINTERSECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
