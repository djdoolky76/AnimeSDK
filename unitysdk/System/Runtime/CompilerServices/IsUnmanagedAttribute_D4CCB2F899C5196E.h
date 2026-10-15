#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_D4CCB2F899C5196E_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB8870)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int IsUnmanagedAttribute_D4CCB2F899C5196E_TypeDefinitionIndex = 7148;

	class IsUnmanagedAttribute_D4CCB2F899C5196E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_D4CCB2F899C5196E_CTOR_OFFSET))(this);
		}

	};
}
