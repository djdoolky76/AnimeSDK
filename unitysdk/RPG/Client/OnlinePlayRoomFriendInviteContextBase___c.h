#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlayerBriefDisplayData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADA0470)
#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA04B0)
#define RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__GETINVITEFRIENDGROUPS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1ADA04C0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomFriendInviteContextBase___c_TypeDefinitionIndex = 68330;

	class OnlinePlayRoomFriendInviteContextBase___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::PlayerBriefDisplayData*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::RPG::Client::PlayerBriefDisplayData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1A3C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x1A3C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetInviteFriendGroups_b__0_0(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMFRIENDINVITECONTEXTBASE___C__GETINVITEFRIENDGROUPS_B__0_0_OFFSET))(this, a1);
		}

	};
}
