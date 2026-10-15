#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELHELPER_REQUESTIDCONTAINER_CTOR_OFFSET UNITYSDK_OFFSET(0xAF88680)

namespace MiHoYo::SDK
{
	class HoYoChannelHelper_RequestIdContainer : public ::System::Object
	{
	public:
		::System::String* requestId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELHELPER_REQUESTIDCONTAINER_CTOR_OFFSET))(this);
		}

	};
}
