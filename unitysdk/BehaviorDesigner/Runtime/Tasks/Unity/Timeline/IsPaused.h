#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FB780C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONSTART_OFFSET UNITYSDK_OFFSET(0x1FB77D80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FB77F10)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB78110)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FB781A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1FB78230)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FB782C0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Timeline
{
	inline static constexpr unsigned int IsPaused_TypeDefinitionIndex = 33637;

	class IsPaused : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::UnityEngine::GameObject* prevGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x58
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_ISPAUSED___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
