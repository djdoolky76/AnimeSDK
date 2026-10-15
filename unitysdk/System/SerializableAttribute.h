#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_SERIALIZABLEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F8E00)

namespace System
{
	class SerializableAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SERIALIZABLEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
