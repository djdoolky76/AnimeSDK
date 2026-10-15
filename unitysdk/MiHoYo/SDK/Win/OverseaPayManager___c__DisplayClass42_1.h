#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/HoYoPass/HoYoPassSDK_ErrorCode.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS42_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDC4F70)
#define MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS42_1__SHOWPAYAGELIMITNEWFLOW_B__1_OFFSET UNITYSDK_OFFSET(0x1BDC4F80)

namespace MiHoYo::SDK::Win
{
	template <typename T>
	class OverseaPayManager___c__DisplayClass42_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::String* cookieToken; // 0x18
		::MiHoYo::SDK::HoYoPass::HoYoPassSDK_ErrorCode ret; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS42_1_CTOR_OFFSET))(this);
		}

		::System::Void _ShowPayAgeLimitNewFlow_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAPAYMANAGER___C__DISPLAYCLASS42_1__SHOWPAYAGELIMITNEWFLOW_B__1_OFFSET))(this);
		}

	};
}
