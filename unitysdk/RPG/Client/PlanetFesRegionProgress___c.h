#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlanetFesRegionProgressPhase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E290560)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2905A0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GETCOMBINEDBUFF_B__16_0_OFFSET UNITYSDK_OFFSET(0x1E290800)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GETCOMBINEDBUFF_B__16_1_OFFSET UNITYSDK_OFFSET(0x1E290820)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_ALLREWARDGOT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E290680)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_CANGETREWARD_B__7_0_OFFSET UNITYSDK_OFFSET(0x1E2905B0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_REWARDID_B__11_0_OFFSET UNITYSDK_OFFSET(0x1E290730)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__REQUESTGETREWARD_B__15_0_OFFSET UNITYSDK_OFFSET(0x1E290790)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesRegionProgress___c_TypeDefinitionIndex = 68564;

	class PlanetFesRegionProgress___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::UInt32>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46DA0);
		}

		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46DA8);
		}

		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46DB0);
		}

		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46DB8);
		}

		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46DC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46DC8);
		}

		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x46DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_CanGetReward_b__7_0(::RPG::Client::PlanetFesRegionProgressPhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_CANGETREWARD_B__7_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AllRewardGot_b__9_0(::RPG::Client::PlanetFesRegionProgressPhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_ALLREWARDGOT_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_RewardID_b__11_0(::RPG::Client::PlanetFesRegionProgressPhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_REWARDID_B__11_0_OFFSET))(this, a1);
		}

		::System::Boolean _RequestGetReward_b__15_0(::RPG::Client::PlanetFesRegionProgressPhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__REQUESTGETREWARD_B__15_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCombinedBuff_b__16_0(::RPG::Client::PlanetFesRegionProgressPhase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GETCOMBINEDBUFF_B__16_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCombinedBuff_b__16_1(::RPG::Client::PlanetFesRegionProgressPhase* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GETCOMBINEDBUFF_B__16_1_OFFSET))(this, a1);
		}

	};
}
