#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_CHANNELDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3F770)

namespace MiHoYo::SDK
{
	class ChannelDefine : public ::System::Object
	{
	public:
		// static const ::System::String* APP_ID; // 0x0
		// static const ::System::String* APP_KEY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CHANNELDEFINE_CTOR_OFFSET))(this);
		}

	};
}
