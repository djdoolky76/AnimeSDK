#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2SingleDialogPerformanceTriggerCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach; }

#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E83C0)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E83D0)
#define RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E8720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach_TypeDefinitionIndex = 16183;

	class DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach : public ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition
	{
	public:
		::System::Int32 Damage; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatV2SingleDialogPerformanceTriggerCondition_DamageReach*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATV2SINGLEDIALOGPERFORMANCETRIGGERCONDITION_DAMAGEREACH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
