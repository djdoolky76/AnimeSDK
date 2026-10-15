#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_DIAGNOSTICS_DEBUGGERHIDDENATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D1F80)

namespace System::Diagnostics
{
	class DebuggerHiddenAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEBUGGERHIDDENATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
