#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class GameObject; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDGAMEOBJECT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E6B09A0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B0A60)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedGameObject_TypeDefinitionIndex = 33462;

	class SharedGameObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDGAMEOBJECT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedGameObject* op_Implicit(::UnityEngine::GameObject* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedGameObject*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDGAMEOBJECT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
