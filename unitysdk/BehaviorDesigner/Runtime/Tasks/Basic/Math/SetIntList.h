#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E6B2610)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6B24A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2700)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1E6B2790)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6B2820)

namespace BehaviorDesigner::Runtime::Tasks::Basic::Math
{
	inline static constexpr unsigned int SetIntList_TypeDefinitionIndex = 33566;

	class SetIntList : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedInt*>* storeValueList; // 0x58
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedInt*>* intValueList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_BASIC_MATH_SETINTLIST___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
