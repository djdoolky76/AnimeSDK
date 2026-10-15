#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvTriggerAIPlaySmartObject; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B3CC0)
#define RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B3CD0)
#define RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B3C90)

namespace RPG::GameCore
{
	class AdvTriggerAIPlaySmartObject : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x20
		::RPG::GameCore::DynamicFloat* SmartObjectID; // 0x28
		::RPG::GameCore::DynamicFloat* SlotIndex; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinish; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTriggerAIPlaySmartObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTriggerAIPlaySmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvTriggerAIPlaySmartObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvTriggerAIPlaySmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVTRIGGERAIPLAYSMARTOBJECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
