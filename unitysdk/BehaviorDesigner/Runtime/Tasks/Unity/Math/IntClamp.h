#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F997CE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F997B40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F997D20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F997DB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F997DF0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int IntClamp_TypeDefinitionIndex = 33844;

	class IntClamp : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedInt* minValue; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* intVariable; // 0x60
		::BehaviorDesigner::Runtime::SharedInt* maxValue; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_INTCLAMP___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
