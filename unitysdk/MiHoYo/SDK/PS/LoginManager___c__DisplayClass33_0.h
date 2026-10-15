#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::PS { class LoginManager; }

#define MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF57680)

namespace MiHoYo::SDK::PS
{
	class LoginManager___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkResponseModel* response; // 0x10
		::MiHoYo::SDK::PS::LoginManager* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

	};
}
