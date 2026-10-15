#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_WATERMARKDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C01D820)

namespace MiHoYo::SDK
{
	class WatermarkDefine : public ::System::Object
	{
	public:
		// static const ::System::String* PARAMTER_ENABLE; // 0x0
		// static const ::System::String* PARAMTER_ALPHA; // 0x0
		// static const ::System::String* PARAMTER_WIDTH; // 0x0
		// static const ::System::String* PARAMTER_HEIGHT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WATERMARKDEFINE_CTOR_OFFSET))(this);
		}

	};
}
