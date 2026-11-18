#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class Collider; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDCOLLIDER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EB02B00)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDCOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB02BC0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedCollider_TypeDefinitionIndex = 33459;

	class SharedCollider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDCOLLIDER__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedCollider* op_Implicit(::UnityEngine::Collider* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedCollider*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDCOLLIDER_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
