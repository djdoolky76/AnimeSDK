#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PC_OS_DISCORDINVITERECEIVEDEXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC6B7C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int DiscordInviteReceivedExtension_TypeDefinitionIndex = 19792;

	class DiscordInviteReceivedExtension : public ::System::Object
	{
	public:
		::System::String* senderId; // 0x10
		::System::String* channelId; // 0x18
		::System::String* messageId; // 0x20
		::System::String* partyId; // 0x28
		::System::String* sessionId; // 0x30
		::System::Int32 type; // 0x38
		::System::Boolean isValid; // 0x3C
		::System::Byte _padding0[0x3];
		::System::String* joinSecret; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_DISCORDINVITERECEIVEDEXTENSION__CTOR_OFFSET))(this);
		}
	};
}
