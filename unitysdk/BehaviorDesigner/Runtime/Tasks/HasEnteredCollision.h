#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Collision; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1FC12E30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONEND_OFFSET UNITYSDK_OFFSET(0x1FC12DF0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FC13050)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC12DA0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1FC12D30)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC130D0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONCOLLISIONENTER_OFFSET UNITYSDK_OFFSET(0x1FC13190)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1FC13220)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1FC132B0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC13340)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1FC133D0)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasEnteredCollision_TypeDefinitionIndex = 33490;

	class HasEnteredCollision : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x50
		::BehaviorDesigner::Runtime::SharedGameObject* collidedGameObject; // 0x58
		::System::Boolean enteredCollision; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONEND_OFFSET))(this);
		}

		::System::Void OnCollisionEnter(::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONCOLLISIONENTER_OFFSET))(this, collision);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnCollisionEnter(::UnityEngine::Collision* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONCOLLISIONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
