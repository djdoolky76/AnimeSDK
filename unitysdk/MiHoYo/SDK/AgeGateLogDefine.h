#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_AGEGATELOGDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC29D20)

namespace MiHoYo::SDK
{
	class AgeGateLogDefine : public ::System::Object
	{
	public:
		// static const ::System::String* LOG_KEY; // 0x0
		// static const ::System::String* LOG_HEADER_KEY; // 0x0
		// static const ::System::String* COUNTRY_KEY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATELOGDEFINE_CTOR_OFFSET))(this);
		}

	};
}
