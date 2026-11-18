#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Decorator.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F5B3640)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F5B3690)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F5B36E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5B3730)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE___BASE_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1F5B37C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE___BASE_ONCHILDEXECUTED_OFFSET UNITYSDK_OFFSET(0x1F5B3850)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F5B38E0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int UntilFailure_TypeDefinitionIndex = 33556;

	class UntilFailure : public ::BehaviorDesigner::Runtime::Tasks::Decorator
	{
	public:
		::BehaviorDesigner::Runtime::Tasks::TaskStatus executionStatus; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE__CTOR_OFFSET))(this);
		}

		::System::Boolean CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE_CANEXECUTE_OFFSET))(this);
		}

		::System::Void OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus childStatus)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE_ONCHILDEXECUTED_OFFSET))(this, childStatus);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE_ONEND_OFFSET))(this);
		}

		::System::Boolean __base_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE___BASE_CANEXECUTE_OFFSET))(this);
		}

		::System::Void __base_OnChildExecuted(::BehaviorDesigner::Runtime::Tasks::TaskStatus P0)
		{
			return ((::System::Void(*)(::PVOID, ::BehaviorDesigner::Runtime::Tasks::TaskStatus))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE___BASE_ONCHILDEXECUTED_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNTILFAILURE___BASE_ONEND_OFFSET))(this);
		}
	};
}
