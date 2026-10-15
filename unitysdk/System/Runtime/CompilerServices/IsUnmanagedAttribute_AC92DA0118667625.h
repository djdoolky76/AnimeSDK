#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_AC92DA0118667625_CTOR_OFFSET UNITYSDK_OFFSET(0x1C876D40)

namespace System::Runtime::CompilerServices
{
	class IsUnmanagedAttribute_AC92DA0118667625 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISUNMANAGEDATTRIBUTE_AC92DA0118667625_CTOR_OFFSET))(this);
		}

	};
}
