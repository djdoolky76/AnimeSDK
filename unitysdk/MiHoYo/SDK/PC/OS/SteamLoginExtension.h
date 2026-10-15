#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_STEAMLOGINEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF42790)

namespace MiHoYo::SDK::PC::OS
{
	class SteamLoginExtension : public ::System::Object
	{
	public:
		::System::String* Id; // 0x10
		::System::String* nickName; // 0x18
		::System::Boolean overlayEnabled; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_STEAMLOGINEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
