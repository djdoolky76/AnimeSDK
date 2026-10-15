#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXLOGINEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF42930)

namespace MiHoYo::SDK::PC::OS
{
	class XboxLoginExtension : public ::System::Object
	{
	public:
		::System::String* xuid; // 0x10
		::System::String* gamertag; // 0x18
		::System::String* sandboxId; // 0x20
		::System::Boolean isStoreUser; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* countryCode; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXLOGINEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
