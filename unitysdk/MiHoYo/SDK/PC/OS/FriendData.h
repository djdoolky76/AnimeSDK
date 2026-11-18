#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class DiscordFriendExtension; }
namespace MiHoYo::SDK::PC::OS { class XboxFriendExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_FRIENDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAE0F80)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int FriendData_TypeDefinitionIndex = 19910;

	class FriendData : public ::System::Object
	{
	public:
		::System::String* userId; // 0x10
		::System::String* displayName; // 0x18
		::System::Int32 status; // 0x20
		::System::Byte _padding0[0x4];
		::MiHoYo::SDK::PC::OS::XboxFriendExtension* xbox; // 0x28
		::MiHoYo::SDK::PC::OS::DiscordFriendExtension* discord; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_FRIENDDATA__CTOR_OFFSET))(this);
		}
	};
}
