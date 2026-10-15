#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_AC92DA0118667625_CTOR_OFFSET UNITYSDK_OFFSET(0x1C848D50)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_AC92DA0118667625_TypeDefinitionIndex = 36086;

	class IsUnmanagedAttribute_AC92DA0118667625 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_AC92DA0118667625_CTOR_OFFSET))(this);
		}

	};
}
