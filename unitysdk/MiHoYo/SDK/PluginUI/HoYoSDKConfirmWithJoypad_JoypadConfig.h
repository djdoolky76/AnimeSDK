#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_JOYPADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB01AEC0)

namespace MiHoYo::SDK::PluginUI
{
	class HoYoSDKConfirmWithJoypad_JoypadConfig : public ::System::Object
	{
	public:
		::System::Boolean set_joypad_enable; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* set_joypad_type; // 0x18
		::System::Boolean set_joypad_exchange; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKCONFIRMWITHJOYPAD_JOYPADCONFIG_CTOR_OFFSET))(this);
		}

	};
}
