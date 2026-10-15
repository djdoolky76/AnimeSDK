#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityLocalLegendData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC537030)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC537070)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__GETALLEASYANDHARDCHALLENGED_B__12_0_OFFSET UNITYSDK_OFFSET(0xC5370A0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__SHOWNEWCONTENTREDDOT_B__11_0_OFFSET UNITYSDK_OFFSET(0xC537080)

namespace RPG::Client
{
	class ActivityLocalLegendModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x316C0);
		}

		static ::System::Func_2<::RPG::Client::ActivityLocalLegendData*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityLocalLegendData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x316C8);
		}

		static ::System::Func_2<::RPG::Client::ActivityLocalLegendData*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::ActivityLocalLegendData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x316D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _ShowNewContentRedDot_b__11_0(::RPG::Client::ActivityLocalLegendData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLocalLegendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__SHOWNEWCONTENTREDDOT_B__11_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllEasyAndHardChallenged_b__12_0(::RPG::Client::ActivityLocalLegendData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityLocalLegendData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDMODULE___C__GETALLEASYANDHARDCHALLENGED_B__12_0_OFFSET))(this, a1);
		}

	};
}
