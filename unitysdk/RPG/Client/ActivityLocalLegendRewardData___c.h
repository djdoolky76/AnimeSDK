#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityLocalLegendRewardGroup; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC52F830)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC52F870)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__HASUNTAKENREWARD_B__1_0_OFFSET UNITYSDK_OFFSET(0xC52F880)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendRewardData___c_TypeDefinitionIndex = 61563;

	class ActivityLocalLegendRewardData___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2C490);
		}

		static ::System::Func_2<::RPG::Client::ActivityLocalLegendRewardGroup*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityLocalLegendRewardGroup*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2C498);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasUntakenReward_b__1_0(::RPG::Client::ActivityLocalLegendRewardGroup* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLocalLegendRewardGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDDATA___C__HASUNTAKENREWARD_B__1_0_OFFSET))(this, a1);
		}

	};
}
