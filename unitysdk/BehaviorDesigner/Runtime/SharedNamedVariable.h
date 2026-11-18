#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime { class NamedVariable; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDNAMEDVARIABLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E6B0B50)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDNAMEDVARIABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B0AC0)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedNamedVariable_TypeDefinitionIndex = 33470;

	class SharedNamedVariable
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDNAMEDVARIABLE__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedNamedVariable* op_Implicit(::BehaviorDesigner::Runtime::NamedVariable* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedNamedVariable*(*)(::BehaviorDesigner::Runtime::NamedVariable*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDNAMEDVARIABLE_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
