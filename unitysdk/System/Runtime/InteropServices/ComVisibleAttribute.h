#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_INTEROPSERVICES_COMVISIBLEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C87E0)

namespace System::Runtime::InteropServices
{
	class ComVisibleAttribute : public ::System::Attribute
	{
	public:
		::System::Boolean _val; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_COMVISIBLEATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
