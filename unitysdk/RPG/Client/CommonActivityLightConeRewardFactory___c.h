#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDHOODLNMAK;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCBA46D0)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCBA4700)
#define RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0xCBA4710)

namespace RPG::Client
{
	class CommonActivityLightConeRewardFactory___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::CDHOODLNMAK*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::CDHOODLNMAK*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19CB0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x19CB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__0_0(::CDHOODLNMAK* a1, ::CDHOODLNMAK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::CDHOODLNMAK*, ::CDHOODLNMAK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMMONACTIVITYLIGHTCONEREWARDFACTORY___C__CREATE_B__0_0_OFFSET))(this, a1, a2);
		}

	};
}
