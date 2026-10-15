#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_JOYPADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB020270)

namespace MiHoYo::SDK::PluginUI
{
	class HoYoSDKProtocolWithJoypad_JoypadConfig : public ::System::Object
	{
	public:
		::System::Boolean joypad_enable; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* joypad_type; // 0x18
		::System::Boolean joypad_exchange; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPROTOCOLWITHJOYPAD_JOYPADCONFIG_CTOR_OFFSET))(this);
		}

	};
}
