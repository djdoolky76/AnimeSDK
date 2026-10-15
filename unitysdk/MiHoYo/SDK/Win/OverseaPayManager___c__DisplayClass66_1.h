#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC6EE0)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1__REQUESTADYENCREATEORDER_G__FAILEDCALLBACK_2_OFFSET UNITYSDK_OFFSET(0x1BDC6F20)

namespace MiHoYo::SDK::Win
{
	template <typename T>
	class OverseaPayManager___c__DisplayClass66_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::NetworkResponseModelEx* response; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1_CTOR_OFFSET))(this);
		}

		::System::Void _RequestAdyenCreateOrder_g__failedCallback_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1__REQUESTADYENCREATEORDER_G__FAILEDCALLBACK_2_OFFSET))(this);
		}

	};
}
