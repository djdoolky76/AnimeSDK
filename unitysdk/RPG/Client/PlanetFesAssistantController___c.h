#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMIHMGNLBPN;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB78D70)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB78DB0)
#define RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C___INITMESSAGES_B__6_0_OFFSET UNITYSDK_OFFSET(0xDB78DC0)

namespace RPG::Client
{
	class PlanetFesAssistantController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2DBF0);
		}

		static ::System::Comparison_1<::FMIHMGNLBPN*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::FMIHMGNLBPN*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2DBF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __InitMessages_b__6_0(::FMIHMGNLBPN* a1, ::FMIHMGNLBPN* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::FMIHMGNLBPN*, ::FMIHMGNLBPN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESASSISTANTCONTROLLER___C___INITMESSAGES_B__6_0_OFFSET))(this, a1, a2);
		}

	};
}
