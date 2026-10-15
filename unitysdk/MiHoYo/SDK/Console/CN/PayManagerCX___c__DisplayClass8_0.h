#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC71F50)
#define MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS8_0__REQUESTRETRIEVETOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1BC74770)

namespace MiHoYo::SDK::Console::CN
{
	class PayManagerCX___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestRetrieveToken_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CN_PAYMANAGERCX___C__DISPLAYCLASS8_0__REQUESTRETRIEVETOKEN_B__0_OFFSET))(this, a1);
		}

	};
}
