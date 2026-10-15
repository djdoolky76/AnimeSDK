#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_WATERMARK_WATERMARKHEADERKEY_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0179D0)

namespace MiHoYo::SDK::Watermark
{
	class WatermarkHeaderKey : public ::System::Object
	{
	public:
		// static const ::System::String* TOKEN_TYPE; // 0x0
		// static const ::System::String* TOKEN_VALUE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARK_WATERMARKHEADERKEY_CTOR_OFFSET))(this);
		}

	};
}
