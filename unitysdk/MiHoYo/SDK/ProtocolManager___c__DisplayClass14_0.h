#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class ProtocolManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFB1450)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS14_0__SHOWLAUNCHERPROTOCOLFALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BFBBA60)
#define MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS14_0__SHOWLAUNCHERPROTOCOLFALLBACK_B__1_OFFSET UNITYSDK_OFFSET(0x1BFBBA90)

namespace MiHoYo::SDK
{
	class ProtocolManager___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MiHoYo::SDK::ProtocolManager* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowLauncherProtocolFallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS14_0__SHOWLAUNCHERPROTOCOLFALLBACK_B__0_OFFSET))(this);
		}

		::System::Void _ShowLauncherProtocolFallback_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER___C__DISPLAYCLASS14_0__SHOWLAUNCHERPROTOCOLFALLBACK_B__1_OFFSET))(this);
		}

	};
}
