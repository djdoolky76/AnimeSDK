#pragma once
#include "unitysdk/unitysdk.h"

#define BEHAVIORDESIGNER_RUNTIME_SHAREDINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FB8AA70)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB8AB30)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedInt_TypeDefinitionIndex = 33466;

	class SharedInt
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDINT__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedInt* op_Implicit(::System::Int32 value)
		{
			return ((::BehaviorDesigner::Runtime::SharedInt*(*)(::System::Int32))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDINT_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
