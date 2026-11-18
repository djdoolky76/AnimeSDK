#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_TRYENTERONCURRENTSTACK_OFFSET UNITYSDK_OFFSET(0x1F41A730)
#define SYSTEM_LINQ_EXPRESSIONS_STACKGUARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1F41A760)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int StackGuard_TypeDefinitionIndex = 4535;

	class StackGuard : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaxExecutionStackCount = 0x400; // 0x0
		::System::Int32 _executionStackCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD__CTOR_OFFSET))(this);
		}

		::System::Boolean TryEnterOnCurrentStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_STACKGUARD_TRYENTERONCURRENTSTACK_OFFSET))(this);
		}
	};
}
