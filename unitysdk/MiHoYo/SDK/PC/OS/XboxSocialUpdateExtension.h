#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXSOCIALUPDATEEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF429A0)

namespace MiHoYo::SDK::PC::OS
{
	class XboxSocialUpdateExtension : public ::System::Object
	{
	public:
		::System::String* eventType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXSOCIALUPDATEEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
