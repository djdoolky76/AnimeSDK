#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChatNoticeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChatInviteConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHATINVITECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54D600)
#define RPG_GAMECORE_CHATINVITECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D54D090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChatInviteConfigRow_TypeDefinitionIndex = 13005;

	class ChatInviteConfigRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::RPG::GameCore::ChatNoticeType ChatNoticeType; // 0x18
		::System::Single NoticeTime; // 0x1C
		::RPG::Client::TextID InviteGo; // 0x20
		::RPG::Client::TextID InviteTitle; // 0x30
		::RPG::Client::TextID NoticeDesc; // 0x40
		::System::Single ExpireTime; // 0x50
		::System::UInt32 ID; // 0x54
		::RPG::Client::TextID InviteContent; // 0x58
		::RPG::Client::TextID InviteInvalid; // 0x68
		::RPG::Client::TextID SendDesc; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATINVITECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChatInviteConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChatInviteConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATINVITECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
