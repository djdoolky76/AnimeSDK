#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE_D50B01CF213A8E1D_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED873E0)

namespace System::Runtime::Versioning
{
	class NonVersionableAttribute_D50B01CF213A8E1D : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_VERSIONING_NONVERSIONABLEATTRIBUTE_D50B01CF213A8E1D_CTOR_OFFSET))(this);
		}

	};
}
