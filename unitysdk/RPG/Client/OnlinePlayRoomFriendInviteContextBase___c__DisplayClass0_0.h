#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE47CAA0)
#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__DISPLAYCLASS0_0__GETINVITEFRIENDGROUPS_B__1_OFFSET UNITYSDK_OFFSET(0xE47D870)
#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__DISPLAYCLASS0_0__GETINVITEFRIENDGROUPS_B__2_OFFSET UNITYSDK_OFFSET(0xE47D8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomFriendInviteContextBase___c__DisplayClass0_0_TypeDefinitionIndex = 68331;

	class OnlinePlayRoomFriendInviteContextBase___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* inRoomUids; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetInviteFriendGroups_b__1(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__DISPLAYCLASS0_0__GETINVITEFRIENDGROUPS_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _GetInviteFriendGroups_b__2(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__DISPLAYCLASS0_0__GETINVITEFRIENDGROUPS_B__2_OFFSET))(this, a1);
		}

	};
}
