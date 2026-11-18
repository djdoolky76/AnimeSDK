#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

namespace BehaviorDesigner::Runtime { class Behavior; }
namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedInt; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F9CDFF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9CE4A0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9CE300)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9CE4F0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1F9CE580)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9CE610)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9CE6A0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int RestartBehaviorTree_TypeDefinitionIndex = 33526;

	class RestartBehaviorTree : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* behaviorGameObject; // 0x58
		::BehaviorDesigner::Runtime::SharedInt* group; // 0x60
		::BehaviorDesigner::Runtime::Behavior* behavior; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_RESTARTBEHAVIORTREE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
