#pragma once
#include "unitysdk/unitysdk.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FDE2A90)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDE2B70)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedFloat_TypeDefinitionIndex = 33461;

	class SharedFloat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDFLOAT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedFloat* op_Implicit(::System::Single value)
		{
			return ((::BehaviorDesigner::Runtime::SharedFloat*(*)(::System::Single))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDFLOAT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
