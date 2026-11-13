#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CakeRaceFriendRankingData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKERACEFRIENDINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2EED00)
#define RPG_CLIENT_CAKERACEFRIENDINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EED40)
#define RPG_CLIENT_CAKERACEFRIENDINFO___C___SORTFRIENDRANK_B__7_0_OFFSET UNITYSDK_OFFSET(0x1D2EED50)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFriendInfo___c_TypeDefinitionIndex = 64466;

	class CakeRaceFriendInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::CakeRaceFriendRankingData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeRaceFriendRankingData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F4A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F4A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SortFriendRank_b__7_0(::RPG::Client::CakeRaceFriendRankingData* a1, ::RPG::Client::CakeRaceFriendRankingData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeRaceFriendRankingData*, ::RPG::Client::CakeRaceFriendRankingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDINFO___C___SORTFRIENDRANK_B__7_0_OFFSET))(this, a1, a2);
		}

	};
}
