#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MemberData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xED9AAD0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xED9AB10)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA___C__GETCACHESORTEDALLMEMBERDATAS_B__9_0_OFFSET UNITYSDK_OFFSET(0xED9AB20)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonTeamData___c_TypeDefinitionIndex = 70145;

	class TreasureDungeonTeamData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MemberData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::MemberData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38260);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x38268);
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
