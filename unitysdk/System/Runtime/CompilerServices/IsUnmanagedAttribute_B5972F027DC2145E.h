#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_B5972F027DC2145E_CTOR_OFFSET UNITYSDK_OFFSET(0xE9E1370)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_B5972F027DC2145E_TypeDefinitionIndex = 47058;

	class IsUnmanagedAttribute_B5972F027DC2145E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_B5972F027DC2145E_CTOR_OFFSET))(this);
		}

	};
}
