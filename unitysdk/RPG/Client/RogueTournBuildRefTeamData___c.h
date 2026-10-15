#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF84700)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF84740)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__TOSTRING_B__1_0_OFFSET UNITYSDK_OFFSET(0xDF84750)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__TOSTRING_B__1_1_OFFSET UNITYSDK_OFFSET(0xDF849C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamData___c_TypeDefinitionIndex = 67534;

	class RogueTournBuildRefTeamData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69B50);
		}

		static ::System::Func_2<::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*, ::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69B58);
		}

		static ::System::Func_2<::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::System::String*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournBuildRefTeamMemberData*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x69B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C_CTOR_OFFSET))(this);
		}

		::System::String* _ToString_b__1_0(::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__TOSTRING_B__1_0_OFFSET))(this, a1);
		}

		::System::String* _ToString_b__1_1(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA___C__TOSTRING_B__1_1_OFFSET))(this, a1);
		}

	};
}
