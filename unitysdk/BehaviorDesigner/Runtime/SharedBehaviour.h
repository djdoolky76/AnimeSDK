#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine { class Behaviour; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDBEHAVIOUR_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1F9954F0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9955B0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedBehaviour_TypeDefinitionIndex = 33457;

	class SharedBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedBehaviour* op_Explicit(::UnityEngine::Behaviour* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedBehaviour*(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDBEHAVIOUR_OP_EXPLICIT_OFFSET))(value);
		}
	};
}
