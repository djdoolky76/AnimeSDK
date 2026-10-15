#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE04130)
#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_TRYENTERONCURRENTSTACK_OFFSET UNITYSDK_OFFSET(0x1EE04100)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int StackGuard_TypeDefinitionIndex = 3273;

	class StackGuard : public ::System::Object
	{
	public:
		::System::Int32 _executionStackCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_CTOR_OFFSET))(this);
		}

		::System::Boolean TryEnterOnCurrentStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_TRYENTERONCURRENTSTACK_OFFSET))(this);
		}

	};
}
