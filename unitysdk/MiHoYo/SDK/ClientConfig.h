#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/AEC94D491962623D.h"
#include "unitysdk/BED79290917896D4/FAE53241BD624A16.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class ConfigIniModel; }
namespace System { class String; }

#define MIHOYO_SDK_CLIENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x3928420)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ClientConfig_TypeDefinitionIndex = 12362;

	class ClientConfig : public ::System::Object
	{
	public:
		::BED79290917896D4::AEC94D491962623D clientType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* channelId; // 0x18
		::System::String* gameKey; // 0x20
		::System::String* game; // 0x28
		::System::String* version; // 0x30
		::BED79290917896D4::FAE53241BD624A16 sub_channel_id; // 0x38
		::System::Byte _padding1[0x4];
		::MiHoYo::SDK::ConfigIniModel* ini; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CLIENTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
