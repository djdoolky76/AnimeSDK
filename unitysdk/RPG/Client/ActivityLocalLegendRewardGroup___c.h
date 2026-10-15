#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class QuestData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC537790)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC5377D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C__HASUNTAKENREWARD_B__1_0_OFFSET UNITYSDK_OFFSET(0xC5377E0)

namespace RPG::Client
{
	class ActivityLocalLegendRewardGroup___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31900);
		}

		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _HasUntakenReward_b__1_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDREWARDGROUP___C__HASUNTAKENREWARD_B__1_0_OFFSET))(this, a1);
		}

	};
}
