#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_D4CCB2F899C5196E_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD9050)

namespace System::Runtime::CompilerServices
{
	class IsUnmanagedAttribute_D4CCB2F899C5196E : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_D4CCB2F899C5196E_CTOR_OFFSET))(this);
		}

	};
}
