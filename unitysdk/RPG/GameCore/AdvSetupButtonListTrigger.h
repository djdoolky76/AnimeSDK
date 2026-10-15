#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSetupButtonListTrigger; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D383F60)
#define RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D383F80)
#define RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D383F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSetupButtonListTrigger_TypeDefinitionIndex = 22175;

	class AdvSetupButtonListTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerName; // 0x20
		::Il2CppArray<::System::String*>* ButtonsByName; // 0x28
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* ButtonConfigs; // 0x30
		::RPG::GameCore::PredicateConfig* OnEnterFilter; // 0x38
		::System::Boolean DisableAfterTriggered; // 0x40
		::System::Boolean ConsiderAngleLimit; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single InteractAngleRange; // 0x44
		::System::Boolean ConsiderOwnerForwardAngleLimit; // 0x48
		::System::Byte _padding1[0x3];
		::System::Single OwnerForwardAngleRange; // 0x4C
		::System::Boolean IsOverrideValidGuestConfig; // 0x50
		::System::Byte _padding2[0x7];
		::RPG::GameCore::TriggerValidGuestConfig* OverridedValidGuestConfig; // 0x58
		::System::Boolean MustNotInDanger; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetupButtonListTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetupButtonListTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSetupButtonListTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSetupButtonListTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSETUPBUTTONLISTTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
