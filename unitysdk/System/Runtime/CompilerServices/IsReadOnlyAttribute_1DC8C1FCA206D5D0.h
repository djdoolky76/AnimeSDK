#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_1DC8C1FCA206D5D0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C41E720)

namespace System::Runtime::CompilerServices
{
	class IsReadOnlyAttribute_1DC8C1FCA206D5D0 : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ISREADONLYATTRIBUTE_1DC8C1FCA206D5D0_CTOR_OFFSET))(this);
		}

	};
}
