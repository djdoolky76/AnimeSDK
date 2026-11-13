#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C804D80)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C804DC0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CREATEMARBLETEACHMATCH_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C804DD0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETALLRANKCONFIG_B__20_0_OFFSET UNITYSDK_OFFSET(0x1C804EC0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_0_OFFSET UNITYSDK_OFFSET(0x1C804EA0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_1_OFFSET UNITYSDK_OFFSET(0x1C804EB0)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_2_OFFSET UNITYSDK_OFFSET(0x1C804E90)
#define RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_3_OFFSET UNITYSDK_OFFSET(0x1C804E30)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMarbleUtils___c_TypeDefinitionIndex = 67727;

	class ActivityMarbleUtils___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F380);
		}

		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F388);
		}

		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__15_2()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F390);
		}

		static ::System::Comparison_1<::RPG::GameCore::MarblePVPRankConfigRow*>** StaticGet___9__20_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::MarblePVPRankConfigRow*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F398);
		}

		static ::System::Func_2<::System::UInt32, ::System::UInt32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F3A0);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F3A8);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__15_3()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2F3B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _CreateMarbleTeachMatch_b__6_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__CREATEMARBLETEACHMATCH_B__6_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__15_3(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_3_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__15_2(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__15_0(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetPVPMarbleSealIDs_b__15_1(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETPVPMARBLESEALIDS_B__15_1_OFFSET))(this, a1);
		}

		::System::Int32 _GetAllRankConfig_b__20_0(::RPG::GameCore::MarblePVPRankConfigRow* a1, ::RPG::GameCore::MarblePVPRankConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::MarblePVPRankConfigRow*, ::RPG::GameCore::MarblePVPRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLEUTILS___C__GETALLRANKCONFIG_B__20_0_OFFSET))(this, a1, a2);
		}

	};
}
