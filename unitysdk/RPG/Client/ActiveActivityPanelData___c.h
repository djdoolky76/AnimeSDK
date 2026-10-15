#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActiveActivityBenefitData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC3B5340)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC3B5380)
#define RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C__ISSHOWNORMALREDDOT_B__3_0_OFFSET UNITYSDK_OFFSET(0xC3B5390)

namespace RPG::Client
{
	class ActiveActivityPanelData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ActiveActivityBenefitData*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::ActiveActivityBenefitData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11110);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11118);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsShowNormalRedDot_b__3_0(::RPG::Client::ActiveActivityBenefitData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActiveActivityBenefitData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVEACTIVITYPANELDATA___C__ISSHOWNORMALREDDOT_B__3_0_OFFSET))(this, a1);
		}

	};
}
