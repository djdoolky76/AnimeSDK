#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGAMADCNPAG;
namespace RPG::Client::Achievement { class AchievementTakeRewardResultViewModel; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B76B6C0)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B76B700)
#define RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_B__3_0_OFFSET UNITYSDK_OFFSET(0x1B76B710)

namespace RPG::Client::Achievement
{
	inline static constexpr unsigned int AchievementNetworkService___c_TypeDefinitionIndex = 84986;

	class AchievementNetworkService___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MGAMADCNPAG*, ::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::MGAMADCNPAG*, ::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*>**)UnitySDK::FromName("RPG.Client.Achievement", "<>c")->GetStaticField(0xFFB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Achievement", "<>c")->GetStaticField(0xFFB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Achievement::AchievementTakeRewardResultViewModel* _SendTakeAchievementRewardCsReqAndBuildResult_b__3_0(::MGAMADCNPAG* a1)
		{
			return ((::RPG::Client::Achievement::AchievementTakeRewardResultViewModel*(*)(::PVOID, ::MGAMADCNPAG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENT_ACHIEVEMENTNETWORKSERVICE___C__SENDTAKEACHIEVEMENTREWARDCSREQANDBUILDRESULT_B__3_0_OFFSET))(this, a1);
		}

	};
}
