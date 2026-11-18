#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F8F92C0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8F9390)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedVector4_TypeDefinitionIndex = 33483;

	class SharedVector4
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR4__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedVector4* op_Implicit(::UnityEngine::Vector4 value)
		{
			return ((::BehaviorDesigner::Runtime::SharedVector4*(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDVECTOR4_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
