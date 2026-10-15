#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_AGEGATELOGLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC29D30)

namespace MiHoYo::SDK
{
	class AgeGateLogLevel : public ::System::Object
	{
	public:
		// static const ::System::Object DEFAULT; // 0x0
		// static const ::System::Object US_CHILD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATELOGLEVEL_CTOR_OFFSET))(this);
		}

	};
}
