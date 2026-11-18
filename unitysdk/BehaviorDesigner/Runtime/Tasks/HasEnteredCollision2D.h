#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/BehaviorDesigner/Runtime/Behavior_EventTypes.h"

namespace BehaviorDesigner::Runtime { class SharedGameObject; }
namespace BehaviorDesigner::Runtime { class SharedString; }
namespace UnityEngine { class Collision2D; }

#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1F9CD9C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_ONEND_OFFSET UNITYSDK_OFFSET(0x1F9CD980)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9CDBE0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9CD930)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F9CD8C0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9CDC60)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_ONCOLLISIONENTER2D_OFFSET UNITYSDK_OFFSET(0x1F9CDD20)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_ONEND_OFFSET UNITYSDK_OFFSET(0x1F9CDDB0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0x1F9CDE40)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F9CDED0)
#define BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_SELFCONTAINSMETHOD_OFFSET UNITYSDK_OFFSET(0x1F9CDF60)

namespace BehaviorDesigner::Runtime::Tasks
{
	inline static constexpr unsigned int HasEnteredCollision2D_TypeDefinitionIndex = 33491;

	class HasEnteredCollision2D : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::BehaviorDesigner::Runtime::SharedGameObject* collidedGameObject; // 0x50
		::BehaviorDesigner::Runtime::SharedString* tag; // 0x58
		::System::Boolean enteredCollision; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D__CTOR_OFFSET))(this);
		}

		::System::Boolean SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_SELFCONTAINSMETHOD_OFFSET))(this, evt);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_ONEND_OFFSET))(this);
		}

		::System::Void OnCollisionEnter2D(::UnityEngine::Collision2D* collision)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_ONCOLLISIONENTER2D_OFFSET))(this, collision);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnCollisionEnter2D(::UnityEngine::Collision2D* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collision2D*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_ONCOLLISIONENTER2D_OFFSET))(this, P0);
		}

		::System::Void __base_OnEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_ONEND_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_ONRESET_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_SelfContainsMethod(::BehaviorDesigner::Runtime::Behavior_EventTypes P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::BehaviorDesigner::Runtime::Behavior_EventTypes))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_TASKS_HASENTEREDCOLLISION2D___BASE_SELFCONTAINSMETHOD_OFFSET))(this, P0);
		}
	};
}
