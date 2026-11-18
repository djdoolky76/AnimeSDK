#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace BehaviorDesigner::Runtime { class SharedVariable; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F08BA40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F08B5C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F08BA90)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F08BB20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F08BBB0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int SetFieldValue_TypeDefinitionIndex = 33524;

	class SetFieldValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* fieldName; // 0x58
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x60
		::BehaviorDesigner::Runtime::SharedString* componentName; // 0x68
		::BehaviorDesigner::Runtime::SharedVariable* fieldValue; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_SETFIELDVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
