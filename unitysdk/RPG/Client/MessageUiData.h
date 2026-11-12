#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/OfflineMessageSenderType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_MESSAGEUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE144AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageUiData_TypeDefinitionIndex = 62950;

	class MessageUiData : public ::System::Object
	{
	public:
		::System::String* ContentImg; // 0x10
		::System::String* SenderIcon; // 0x18
		::System::String* SelfSenderName; // 0x20
		::System::Single Interval; // 0x28
		::RPG::GameCore::OfflineMessageSenderType SenderType; // 0x2C
		::RPG::Client::TextID ContentText; // 0x30
		::System::Boolean OnlyShowImg; // 0x40
		::System::Boolean OnlyShowText; // 0x41
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID SenderName; // 0x48
		::System::UInt32 NextContentId; // 0x58
		::System::Int32 RelatedPrefabIndex; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUIDATA_CTOR_OFFSET))(this);
		}

	};
}
