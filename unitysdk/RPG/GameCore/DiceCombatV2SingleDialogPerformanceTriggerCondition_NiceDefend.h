#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2SingleDialogPerformanceTriggerCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend; }

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E8480)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E8490)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E8810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend_TypeDefinitionIndex = 16184;

	class DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend : public ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition
	{
	public:
		::System::Int32 Damage; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_NiceDefend*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_NICEDEFEND_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
