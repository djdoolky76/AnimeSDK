#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_STACKTRACEHIDDENATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4266B0)

namespace System::Diagnostics
{
	class StackTraceHiddenAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STACKTRACEHIDDENATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
