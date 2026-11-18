#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime { class GenericVariable; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDGENERICVARIABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FDB09B0)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDGENERICVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB0870)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedGenericVariable_TypeDefinitionIndex = 33465;

	class SharedGenericVariable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDGENERICVARIABLE__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedGenericVariable* op_Implicit(::BehaviorDesigner::Runtime::GenericVariable* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedGenericVariable*(*)(::BehaviorDesigner::Runtime::GenericVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDGENERICVARIABLE_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
