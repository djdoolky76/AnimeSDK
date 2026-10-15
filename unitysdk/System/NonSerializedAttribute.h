#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_NONSERIALIZEDATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C280C20)

namespace System
{
	class NonSerializedAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NONSERIALIZEDATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
