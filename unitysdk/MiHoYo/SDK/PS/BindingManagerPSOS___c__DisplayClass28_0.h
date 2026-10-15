#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class BindingManagerPSOS; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF4AC10)
#define MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS28_0__REQUESTACTIONTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x1BF4EDF0)

namespace MiHoYo::SDK::PS
{
	class BindingManagerPSOS___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::String* account; // 0x10
		::MiHoYo::SDK::PS::BindingManagerPSOS* __4__this; // 0x18
		::System::Action* callback; // 0x20
		::System::String* actionType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestActionTicket_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_BINDINGMANAGERPSOS___C__DISPLAYCLASS28_0__REQUESTACTIONTICKET_B__0_OFFSET))(this, a1);
		}

	};
}
