#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FB955B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FB95450)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB95600)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FB95690)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FB95720)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityString
{
	inline static constexpr unsigned int BuildString_TypeDefinitionIndex = 33648;

	class BuildString : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedString*>* source; // 0x58
		::BehaviorDesigner::Runtime::SharedString* storeResult; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_BUILDSTRING___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
