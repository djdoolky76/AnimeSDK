#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_CALLERLINENUMBERATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C7330)

namespace System::Runtime::CompilerServices
{
	class CallerLineNumberAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CALLERLINENUMBERATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
