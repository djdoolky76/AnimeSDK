#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS66_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFBA1B0)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS66_0__REQUESTLAUNCHPROTOCOL_B__0_OFFSET UNITYSDK_OFFSET(0x1BFBBFB0)

namespace MiHoYo::SDK
{
	class ProtocolManager___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS66_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestLaunchProtocol_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS66_0__REQUESTLAUNCHPROTOCOL_B__0_OFFSET))(this, a1);
		}

	};
}
