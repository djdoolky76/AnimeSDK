#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeV2RankData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2RANKINFOS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5CB8E0)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5CB910)
#define RPG_CLIENT_MATCHTHREEV2RANKINFOS___C___INIT_B__3_0_OFFSET UNITYSDK_OFFSET(0xD5CB920)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2RankInfos___c_TypeDefinitionIndex = 66022;

	class MatchThreeV2RankInfos___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MatchThreeV2RankData*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeV2RankData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x55AE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x55AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __Init_b__3_0(::RPG::Client::MatchThreeV2RankData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MatchThreeV2RankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2RANKINFOS___C___INIT_B__3_0_OFFSET))(this, a1);
		}

	};
}
