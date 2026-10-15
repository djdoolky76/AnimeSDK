#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMIMPORTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C87D0)

namespace System::Runtime::InteropServices
{
	class ComImportAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMIMPORTATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
