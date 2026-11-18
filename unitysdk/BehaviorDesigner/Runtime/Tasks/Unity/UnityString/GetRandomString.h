#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedString; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EB0D310)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB0D1E0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0D360)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1EB0D3F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1EB0D480)

namespace BehaviorDesigner::Runtime::Tasks::Unity::UnityString
{
	inline static constexpr unsigned int GetRandomString_TypeDefinitionIndex = 33652;

	class GetRandomString : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* storeResult; // 0x58
		::Il2CppArray<::BehaviorDesigner::Runtime::SharedString*>* source; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_UNITYSTRING_GETRANDOMSTRING___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
