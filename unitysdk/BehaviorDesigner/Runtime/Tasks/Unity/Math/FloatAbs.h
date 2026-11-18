#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedFloat; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FC3A190)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC3A0E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC3A1E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FC3A270)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC3A300)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Math
{
	inline static constexpr unsigned int FloatAbs_TypeDefinitionIndex = 33837;

	class FloatAbs : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* floatVariable; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_MATH_FLOATABS___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
