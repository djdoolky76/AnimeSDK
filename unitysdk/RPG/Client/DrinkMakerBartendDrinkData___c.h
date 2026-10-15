#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class DrinkMakerTag; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCCDB070)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCCDB0A0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__GETALLVISIBLETAGS_B__15_0_OFFSET UNITYSDK_OFFSET(0xCCDB0B0)
#define RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C___CALCULATEQUANTIFYTAGS_B__35_0_OFFSET UNITYSDK_OFFSET(0xCCDB170)

namespace RPG::Client
{
	class DrinkMakerBartendDrinkData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::DrinkMakerTag*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::DrinkMakerTag*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31040);
		}

		static ::System::Comparison_1<::RPG::Client::DrinkMakerTag*>** StaticGet___9__35_0()
		{
			return (::System::Comparison_1<::RPG::Client::DrinkMakerTag*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31048);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x31050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllVisibleTags_b__15_0(::RPG::Client::DrinkMakerTag* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C__GETALLVISIBLETAGS_B__15_0_OFFSET))(this, a1);
		}

		::System::Int32 __CalculateQuantifyTags_b__35_0(::RPG::Client::DrinkMakerTag* a1, ::RPG::Client::DrinkMakerTag* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::DrinkMakerTag*, ::RPG::Client::DrinkMakerTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERBARTENDDRINKDATA___C___CALCULATEQUANTIFYTAGS_B__35_0_OFFSET))(this, a1, a2);
		}

	};
}
