#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIMANACONFIG_SWITCHH264PLAYBACKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1672C320)

namespace CriWare
{
	class CriManaConfig_SwitchH264PlaybackConfig : public ::System::Object
	{
	public:
		::System::Boolean enableBufferOutput; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIMANACONFIG_SWITCHH264PLAYBACKCONFIG_CTOR_OFFSET))(this);
		}

	};
}
