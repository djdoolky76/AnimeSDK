#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MemberData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE324AF0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE324B30)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C__GETCACHESORTEDALLMEMBERDATAS_B__9_0_OFFSET UNITYSDK_OFFSET(0xE324B40)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonTeamData___c_TypeDefinitionIndex = 68199;

	class TreasureDungeonTeamData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x23D10);
		}

		static ::System::Comparison_1<::RPG::Client::MemberData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::MemberData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x23D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetCacheSortedAllMemberDatas_b__9_0(::RPG::Client::MemberData* a1, ::RPG::Client::MemberData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MemberData*, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C__GETCACHESORTEDALLMEMBERDATAS_B__9_0_OFFSET))(this, a1, a2);
		}

	};
}
