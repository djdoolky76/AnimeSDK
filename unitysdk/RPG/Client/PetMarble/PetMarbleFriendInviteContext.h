#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OnlinePlayRoomFriendInviteContextBase.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace RPG::Client::PetMarble { class PetMarbleFriendInviteContext; }

#define RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0x1C1F2310)
#define RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1F2300)
#define RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_GETINVITESUCCESSTEXTID_OFFSET UNITYSDK_OFFSET(0x1C1F2380)
#define RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_ISFRIENDALREADYIN_OFFSET UNITYSDK_OFFSET(0x1C1F2430)
#define RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_ONINVITEFRIEND_OFFSET UNITYSDK_OFFSET(0x1C1F25E0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleFriendInviteContext_TypeDefinitionIndex = 76862;

	class PetMarbleFriendInviteContext : public ::RPG::Client::OnlinePlayRoomFriendInviteContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetMarble::PetMarbleFriendInviteContext* Create()
		{
			return ((::RPG::Client::PetMarble::PetMarbleFriendInviteContext*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_CREATE_OFFSET))();
		}

		::RPG::Client::TextID GetInviteSuccessTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_GETINVITESUCCESSTEXTID_OFFSET))(this);
		}

		::System::Boolean IsFriendAlreadyIn(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_ISFRIENDALREADYIN_OFFSET))(this, a1);
		}

		::System::Boolean OnInviteFriend(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_PETMARBLEFRIENDINVITECONTEXT_ONINVITEFRIEND_OFFSET))(this, a1);
		}

	};
}
