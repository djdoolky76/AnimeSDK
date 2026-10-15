#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkManager; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEAFA60)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__GETREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x1BEB20B0)
#define MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__GETREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x1BEB2100)

namespace MiHoYo::SDK
{
	class NetworkManager___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetRequest_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__GETREQUEST_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER___C__DISPLAYCLASS48_0__GETREQUEST_B__1_OFFSET))(this);
		}

	};
}
