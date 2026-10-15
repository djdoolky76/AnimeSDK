#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChatNoticeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChatInviteConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHATINVITECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57B050)
#define RPG_GAMECORE_CHATINVITECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D57AAE0)

namespace RPG::GameCore
{
	class ChatInviteConfigRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::RPG::Client::TextID InviteContent; // 0x18
		::RPG::Client::TextID NoticeDesc; // 0x28
		::RPG::Client::TextID InviteInvalid; // 0x38
		::System::UInt32 ID; // 0x48
		::RPG::GameCore::ChatNoticeType ChatNoticeType; // 0x4C
		::RPG::Client::TextID SendDesc; // 0x50
		::RPG::Client::TextID InviteGo; // 0x60
		::RPG::Client::TextID InviteTitle; // 0x70
		::System::Single ExpireTime; // 0x80
		::System::Single NoticeTime; // 0x84
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
