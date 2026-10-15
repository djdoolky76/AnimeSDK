#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropSetupAbilityTrigger; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSETUPABILITYTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D954920)
#define RPG_GAMECORE_PROPSETUPABILITYTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D954980)
#define RPG_GAMECORE_PROPSETUPABILITYTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9548A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetupAbilityTrigger_TypeDefinitionIndex = 20354;

	class PropSetupAbilityTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* ID; // 0x20
		::System::Boolean TargetIsOwner; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* CustomTriggerName; // 0x30
		::System::Boolean Enable; // 0x38
		::System::Byte _padding1[0x7];
		::RPG::GameCore::DynamicFloat* Duration; // 0x40
		::Il2CppArray<::RPG::GameCore::EntityType>* TriggerTargetTypes; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerCreate; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerDestroy; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnable; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerDisable; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0x70
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPABILITYTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupAbilityTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupAbilityTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPABILITYTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropSetupAbilityTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropSetupAbilityTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETUPABILITYTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
