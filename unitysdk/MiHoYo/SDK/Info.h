#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_INFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE7E660)

namespace MiHoYo::SDK
{
	class Info : public ::System::Object
	{
	public:
		// static const ::System::String* VERSION; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_INFO_CTOR_OFFSET))(this);
		}

	};
}
