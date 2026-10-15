#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class AutoTestLoginManager; }
namespace System { class Action; }

#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCDF0E0)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS10_0__LOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1BCDF600)

namespace MiHoYo::SDK::Win
{
	class AutoTestLoginManager___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::AutoTestLoginManager* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__DISPLAYCLASS10_0__LOGIN_B__0_OFFSET))(this, a1);
		}

	};
}
