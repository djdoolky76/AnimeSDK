#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PS { class PSWelcomeDialog; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_PS_PSWELCOMEDIALOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF6F070)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6F0B0)
#define MIHOYO_SDK_PS_PSWELCOMEDIALOG___C__SHOW_B__19_0_OFFSET UNITYSDK_OFFSET(0x1BF6F0C0)

namespace MiHoYo::SDK::PS
{
	class PSWelcomeDialog___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PS", "<>c")->GetStaticField(0x18390);
		}

		static ::System::Action** StaticGet___9__19_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PS", "<>c")->GetStaticField(0x18398);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Show_b__19_0(::MiHoYo::SDK::PS::PSWelcomeDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PS::PSWelcomeDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSWELCOMEDIALOG___C__SHOW_B__19_0_OFFSET))(this, a1);
		}

	};
}
