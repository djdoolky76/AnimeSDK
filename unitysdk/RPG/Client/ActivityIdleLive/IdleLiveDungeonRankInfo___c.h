#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveDungeonRankData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCDC0860)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCDC08A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_0_OFFSET UNITYSDK_OFFSET(0xCDC08B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_1_OFFSET UNITYSDK_OFFSET(0xCDC0940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_2_OFFSET UNITYSDK_OFFSET(0xCDC09D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_3_OFFSET UNITYSDK_OFFSET(0xCDC09F0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveDungeonRankInfo___c_TypeDefinitionIndex = 77546;

	class IdleLiveDungeonRankInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1E2F0);
		}

		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1E2F8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1E300);
		}

		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1E308);
		}

		static ::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::UInt32>** StaticGet___9__2_3()
		{
			return (::System::Func_2<::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1E310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRankDatasSorted_b__2_0(::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetRankDatasSorted_b__2_1(::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRankDatasSorted_b__2_2(::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetRankDatasSorted_b__2_3(::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDungeonRankData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEDUNGEONRANKINFO___C__GETRANKDATASSORTED_B__2_3_OFFSET))(this, a1);
		}

	};
}
