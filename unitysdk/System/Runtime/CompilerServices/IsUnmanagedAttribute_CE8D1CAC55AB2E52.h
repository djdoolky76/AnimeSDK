#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_CE8D1CAC55AB2E52_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB6D090)

namespace System::Runtime::CompilerServices
{
	class IsUnmanagedAttribute_CE8D1CAC55AB2E52 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_CE8D1CAC55AB2E52_CTOR_OFFSET))(this);
		}

	};
}
