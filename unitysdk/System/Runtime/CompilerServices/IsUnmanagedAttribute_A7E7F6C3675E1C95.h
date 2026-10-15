#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_A7E7F6C3675E1C95_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC80950)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_A7E7F6C3675E1C95_TypeDefinitionIndex = 10177;

	class IsUnmanagedAttribute_A7E7F6C3675E1C95 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_A7E7F6C3675E1C95_CTOR_OFFSET))(this);
		}

	};
}
