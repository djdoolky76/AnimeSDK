#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_BEC5E6F3CCD65ABA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE80FC0)

namespace System::Runtime::CompilerServices
{
	class IsReadOnlyAttribute_BEC5E6F3CCD65ABA : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_BEC5E6F3CCD65ABA_CTOR_OFFSET))(this);
		}

	};
}
