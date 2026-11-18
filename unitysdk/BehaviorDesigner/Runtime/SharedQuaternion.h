#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDQUATERNION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EB02C20)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDQUATERNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB02CF0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedQuaternion_TypeDefinitionIndex = 33473;

	class SharedQuaternion
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDQUATERNION__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedQuaternion* op_Implicit(::UnityEngine::Quaternion value)
		{
			return ((::BehaviorDesigner::Runtime::SharedQuaternion*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDQUATERNION_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
