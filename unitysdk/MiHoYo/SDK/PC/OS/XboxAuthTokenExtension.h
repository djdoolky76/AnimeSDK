#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXAUTHTOKENEXTENSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF42860)

namespace MiHoYo::SDK::PC::OS
{
	class XboxAuthTokenExtension : public ::System::Object
	{
	public:
		::System::String* signature; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXAUTHTOKENEXTENSION_CTOR_OFFSET))(this);
		}

	};
}
