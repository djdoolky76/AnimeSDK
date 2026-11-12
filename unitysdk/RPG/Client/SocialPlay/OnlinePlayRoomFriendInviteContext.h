#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OnlinePlayRoomFriendInviteContextBase.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class OnlinePlayRoomModule; }
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::SocialPlay { class OnlinePlayRoomFriendInviteContext; }

#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xEB57B10)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xEB57B00)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_GETINVITESUCCESSTEXTID_OFFSET UNITYSDK_OFFSET(0xEB57B80)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_GET__MODULE_OFFSET UNITYSDK_OFFSET(0xEB57D80)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_ISFRIENDALREADYIN_OFFSET UNITYSDK_OFFSET(0xEB57C30)
#define RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_ONINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0xEB57E10)

namespace RPG::Client::SocialPlay
{
	inline static constexpr unsigned int OnlinePlayRoomFriendInviteContext_TypeDefinitionIndex = 76648;

	class OnlinePlayRoomFriendInviteContext : public ::RPG::Client::OnlinePlayRoomFriendInviteContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SocialPlay::OnlinePlayRoomFriendInviteContext* Create()
		{
			return ((::RPG::Client::SocialPlay::OnlinePlayRoomFriendInviteContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_CREATE_OFFSET))();
		}

		::RPG::Client::TextID GetInviteSuccessTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_GETINVITESUCCESSTEXTID_OFFSET))(this);
		}

		::System::Boolean IsFriendAlreadyIn(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_ISFRIENDALREADYIN_OFFSET))(this, a1);
		}

		::System::Boolean OnInviteFriend(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_ONINVITEFRIEND_OFFSET))(this, a1);
		}

		::RPG::Client::OnlinePlayRoomModule* get__Module()
		{
			return ((::RPG::Client::OnlinePlayRoomModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SOCIALPLAY_ONLINEPLAYROOMFRIENDINVITECONTEXT_GET__MODULE_OFFSET))(this);
		}

	};
}
