#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MESSAGEPACK_INTERNAL_PRESERVEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBABB60)

namespace MessagePack::Internal
{
	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_PRESERVEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
