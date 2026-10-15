#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformanceTriggerCondition; }

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D615C50)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D615C60)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6157C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformanceTriggerCondition_TypeDefinitionIndex = 16181;

	class DiceCombatV2SingleDialogPerformanceTriggerCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
