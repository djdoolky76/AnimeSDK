#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelAsyncParams.h"

namespace MiHoYo::SDK::PC::OS { class DiscordInviteParamExtension; }
namespace MiHoYo::SDK::PC::OS { class XboxInviteParamExtension; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITEPARAMS_TOJSON_OFFSET UNITYSDK_OFFSET(0x1D4A9C20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELINVITEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A9C30)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelInviteParams_TypeDefinitionIndex = 19927;

	class HoYoChannelInviteParams : public ::MiHoYo::SDK::PC::OS::HoYoChannelAsyncParams
	{
	public:
		::System::String* action; // 0x20
		::MiHoYo::SDK::PC::OS::XboxInviteParamExtension* xbox; // 0x28
		::MiHoYo::SDK::PC::OS::DiscordInviteParamExtension* discord; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINVITEPARAMS__CTOR_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELINVITEPARAMS_TOJSON_OFFSET))(this);
		}
	};
}
