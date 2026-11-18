#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_E53123A87DF446C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEFD150)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_E53123A87DF446C4_TypeDefinitionIndex = 30954;

	class IsUnmanagedAttribute_E53123A87DF446C4 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_E53123A87DF446C4__CTOR_OFFSET))(this);
		}
	};
}
