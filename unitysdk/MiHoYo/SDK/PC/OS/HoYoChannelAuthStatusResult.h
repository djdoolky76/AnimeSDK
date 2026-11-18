#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelBaseResult.h"

namespace MiHoYo::SDK::PC::OS { class DiscordAuthStatusExtension; }
namespace MiHoYo::SDK::PC::OS { class EpicAuthStatusExtension; }
namespace MiHoYo::SDK::PC::OS { class XboxAuthStatusExtension; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHSTATUSRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C46D6F0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelAuthStatusResult_TypeDefinitionIndex = 19893;

	class HoYoChannelAuthStatusResult : public ::MiHoYo::SDK::PC::OS::HoYoChannelBaseResult
	{
	public:
		::System::Int32 status; // 0x30
		::System::Byte _padding0[0x4];
		::MiHoYo::SDK::PC::OS::XboxAuthStatusExtension* xbox; // 0x38
		::MiHoYo::SDK::PC::OS::EpicAuthStatusExtension* epic; // 0x40
		::MiHoYo::SDK::PC::OS::DiscordAuthStatusExtension* discord; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELAUTHSTATUSRESULT__CTOR_OFFSET))(this);
		}
	};
}
