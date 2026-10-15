#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZINGATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C33B890)

namespace System::Runtime::Serialization
{
	class OnDeserializingAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_ONDESERIALIZINGATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
