#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA0260)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS66_1__REQUESTADYENCREATEORDER_G__FAILEDCALLBACK_2_OFFSET UNITYSDK_OFFSET(0x1BDA02A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaPayManager___c__DisplayClass66_1_TypeDefinitionIndex = 9347;

	template <typename T>
	class OverseaPayManager___c__DisplayClass66_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MiHoYo::SDK::NetworkResponseModelEx* response; // 0x18
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
