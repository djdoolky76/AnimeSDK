#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Unity/Math/FloatOperator_Operation.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FB770B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FB769B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB77120)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FB771B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FB77240)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int FloatOperator_TypeDefinitionIndex = 33841;

	class FloatOperator : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* float1; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* storeResult; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* float2; // 0x68
		::BehaviorDesigner::Runtime::Tasks::Unity::Math::FloatOperator_Operation operation; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATOPERATOR___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
