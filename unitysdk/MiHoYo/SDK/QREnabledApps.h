#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_QRENABLEDAPPS_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC0A90)

namespace MiHoYo::SDK
{
	class QREnabledApps : public ::System::Object
	{
	public:
		::System::Boolean bbs; // 0x10
		::System::Boolean cloud; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_QRENABLEDAPPS_CTOR_OFFSET))(this);
		}

	};
}
