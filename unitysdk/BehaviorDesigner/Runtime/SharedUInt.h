#pragma once
#include "unitysdk/unitysdk.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDUINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F5DEF30)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDUINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DEFF0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedUInt_TypeDefinitionIndex = 33478;

	class SharedUInt
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDUINT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedUInt* op_Implicit(::System::UInt32 value)
		{
			return ((::BehaviorDesigner::Runtime::SharedUInt*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDUINT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
