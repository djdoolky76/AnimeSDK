#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define BEHAVIORDESIGNER_RUNTIME_SHAREDSTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1FC12740)
#define BEHAVIORDESIGNER_RUNTIME_SHAREDSTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC12800)

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int SharedString_TypeDefinitionIndex = 33475;

	class SharedString
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDSTRING__CTOR_OFFSET))(this);
		}

		static ::BehaviorDesigner::Runtime::SharedString* op_Implicit(::System::String* value)
		{
			return ((::BehaviorDesigner::Runtime::SharedString*(*)(::System::String*))((::PBYTE)hIl2Cpp + BEHAVIORDESIGNER_RUNTIME_SHAREDSTRING_OP_IMPLICIT_OFFSET))(value);
		}
	};
}
