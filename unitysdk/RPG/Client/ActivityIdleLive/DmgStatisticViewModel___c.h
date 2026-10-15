#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveDmgStatisticsUiData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC456400)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC456440)
#define RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C___REFRESHDMGSTATISTICS_B__7_0_OFFSET UNITYSDK_OFFSET(0xC456450)

namespace RPG::Client::ActivityIdleLive
{
	class DmgStatisticViewModel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1FFE0);
		}

		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*>**)UnitySDK::FromName("RPG.Client.ActivityIdleLive", "<>c")->GetStaticField(0x1FFE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshDmgStatistics_b__7_0(::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData* a1, ::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*, ::RPG::Client::ActivityIdleLive::IdleLiveDmgStatisticsUiData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_DMGSTATISTICVIEWMODEL___C___REFRESHDMGSTATISTICS_B__7_0_OFFSET))(this, a1, a2);
		}

	};
}
