#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class SharedBool; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FC4C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F8FBF80)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FC110)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FC520)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F8FC5B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x1F8FC640)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F8FC6D0)

namespace BehaviorDesigner::Runtime::Tasks::Unity::Timeline
{
	inline static constexpr unsigned int Play_TypeDefinitionIndex = 33640;

	class Play : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::UnityEngine::Playables::PlayableDirector* playableDirector; // 0x58
		::BehaviorDesigner::Runtime::SharedBool* stopWhenComplete; // 0x60
		::BehaviorDesigner::Runtime::SharedGameObject* targetGameObject; // 0x68
		::UnityEngine::GameObject* prevGameObject; // 0x70
		::UnityEngine::Playables::PlayableAsset* playableAsset; // 0x78
		::System::Boolean playbackStarted; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_UNITY_TIMELINE_PLAY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
