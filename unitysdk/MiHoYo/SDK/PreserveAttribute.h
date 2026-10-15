#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define MIHOYO_SDK_PRESERVEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAC5D0)

namespace MiHoYo::SDK
{
	class PreserveAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PRESERVEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
