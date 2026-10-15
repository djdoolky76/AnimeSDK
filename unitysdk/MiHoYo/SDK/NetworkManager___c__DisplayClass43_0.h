#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEAEE50)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1BEB1CB0)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x1BEB1D00)

namespace MiHoYo::SDK
{
	class NetworkManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0_CTOR_OFFSET))(this);
		}

		::System::Void _PostRequest_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUEST_B__0_OFFSET))(this, a1);
		}

		::System::Void _PostRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS43_0__POSTREQUEST_B__1_OFFSET))(this);
		}

	};
}
