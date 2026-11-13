#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FriendRankingInfo; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A191FD0)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A192010)
#define RPG_CLIENT_MULTIPLAYERCAREERDATA___C___SORTANDSETRANKS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1A192020)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiplayerCareerData___c_TypeDefinitionIndex = 68244;

	class MultiplayerCareerData___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::FriendRankingInfo*>** StaticGet___9__16_0()
		{
			return (::System::Comparison_1<::RPG::Client::FriendRankingInfo*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71E90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71E98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortAndSetRanks_b__16_0(::RPG::Client::FriendRankingInfo* a1, ::RPG::Client::FriendRankingInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FriendRankingInfo*, ::RPG::Client::FriendRankingInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERCAREERDATA___C___SORTANDSETRANKS_B__16_0_OFFSET))(this, a1, a2);
		}

	};
}
