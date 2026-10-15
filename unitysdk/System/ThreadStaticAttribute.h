#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_THREADSTATICATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C140540)

namespace System
{
	class ThreadStaticAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADSTATICATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
