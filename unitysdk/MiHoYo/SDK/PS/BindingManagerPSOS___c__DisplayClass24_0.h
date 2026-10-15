#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class BindingManagerPSOS; }
namespace System { class Action; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF4A310)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__PERFORMBINDINGFLOW_B__0_OFFSET UNITYSDK_OFFSET(0x1BF4D5E0)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__PERFORMBINDINGFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1BF4DC80)

namespace MiHoYo::SDK::PS
{
	class BindingManagerPSOS___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PS::BindingManagerPSOS* __4__this; // 0x10
		::System::Action* OnLoginResult; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Void _PerformBindingFlow_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__PERFORMBINDINGFLOW_B__0_OFFSET))(this, a1);
		}

		::System::Void _PerformBindingFlow_b__1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS24_0__PERFORMBINDINGFLOW_B__1_OFFSET))(this, a1);
		}

	};
}
