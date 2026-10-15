#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetupCustomTaskTrigger; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D384490)
#define RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3844A0)
#define RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D384460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetupCustomTaskTrigger_TypeDefinitionIndex = 20534;

	class AdvSetupCustomTaskTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEnter; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnExit; // 0x30
		::RPG::GameCore::PredicateConfig* OnEnterFilter; // 0x38
		::System::Boolean DisableAfterTriggered; // 0x40
		::System::Boolean IsOverrideValidGuestConfig; // 0x41
		::System::Byte _padding0[0x6];
		::RPG::GameCore::TriggerValidGuestConfig* OverridedValidGuestConfig; // 0x48
		::System::Boolean AllowSeachEntityInParent; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetupCustomTaskTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetupCustomTaskTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetupCustomTaskTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetupCustomTaskTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPCUSTOMTASKTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
