#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_XBOXBLOCKLISTENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF42870)

namespace MiHoYo::SDK::PC::OS
{
	class XboxBlockListEntry : public ::System::Object
	{
	public:
		::System::String* userId; // 0x10
		::System::String* displayName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_XBOXBLOCKLISTENTRY_CTOR_OFFSET))(this);
		}

	};
}
