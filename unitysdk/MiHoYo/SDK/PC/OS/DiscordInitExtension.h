#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDINITEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA31660)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordInitExtension_TypeDefinitionIndex = 19787;

	class DiscordInitExtension : public ::System::Object
	{
	public:
		::System::String* parentApplicationId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDINITEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
