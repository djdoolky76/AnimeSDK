#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/OfflineMessageSenderType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_MESSAGEUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1964E2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageUiData_TypeDefinitionIndex = 62950;

	class MessageUiData : public ::System::Object
	{
	public:
		::System::String* ContentImg; // 0x10
		::System::String* SelfSenderName; // 0x18
		::System::String* SenderIcon; // 0x20
		::RPG::GameCore::OfflineMessageSenderType SenderType; // 0x28
		::System::Boolean OnlyShowImg; // 0x2C
		::System::Boolean OnlyShowText; // 0x2D
		::System::Byte _padding0[0x2];
		::System::Single Interval; // 0x30
		::System::Byte _padding1[0x4];
		::RPG::Client::TextID ContentText; // 0x38
		::System::Int32 RelatedPrefabIndex; // 0x48
		::System::UInt32 NextContentId; // 0x4C
		::RPG::Client::TextID SenderName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUIDATA_CTOR_OFFSET))(this);
		}

	};
}
