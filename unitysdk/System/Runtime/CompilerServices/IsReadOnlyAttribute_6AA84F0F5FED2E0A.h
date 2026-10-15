#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_6AA84F0F5FED2E0A_CTOR_OFFSET UNITYSDK_OFFSET(0x1F691290)

namespace System::Runtime::CompilerServices
{
	class IsReadOnlyAttribute_6AA84F0F5FED2E0A : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_6AA84F0F5FED2E0A_CTOR_OFFSET))(this);
		}

	};
}
