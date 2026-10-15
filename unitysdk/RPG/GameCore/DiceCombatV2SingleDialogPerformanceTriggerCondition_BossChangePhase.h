#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2SingleDialogPerformanceTriggerCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase; }

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D615D80)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D615D90)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6160B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase_TypeDefinitionIndex = 16182;

	class DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase : public ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition
	{
	public:
		::System::Int32 Phase; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_BossChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_BOSSCHANGEPHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
