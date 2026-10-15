#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_USERGAMESERVERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE3C570)

namespace MiHoYo::SDK::Console
{
	class UserGameServerInfo : public ::System::Object
	{
	public:
		::System::String* region; // 0x10
		::System::String* game_uid; // 0x18
		::System::String* nickname; // 0x20
		::System::Int32 level; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* region_name; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_USERGAMESERVERINFO_CTOR_OFFSET))(this);
		}

	};
}
