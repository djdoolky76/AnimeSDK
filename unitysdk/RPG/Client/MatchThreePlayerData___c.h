#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeBirdData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEPLAYERDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5AA690)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5AA6D0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA___C__GETALLBIRD_B__4_0_OFFSET UNITYSDK_OFFSET(0xD5AA6E0)

namespace RPG::Client
{
	class MatchThreePlayerData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x54E90);
		}

		static ::System::Func_2<::RPG::Client::MatchThreeBirdData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeBirdData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x54E98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllBird_b__4_0(::RPG::Client::MatchThreeBirdData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA___C__GETALLBIRD_B__4_0_OFFSET))(this, a1);
		}

	};
}
