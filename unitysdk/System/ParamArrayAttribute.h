#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_PARAMARRAYATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C28ED50)

namespace System
{
	class ParamArrayAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARAMARRAYATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
