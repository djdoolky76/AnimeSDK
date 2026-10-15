#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEpic; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelProductsResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF26320)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS13_0__GETPRODUCTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1BF28A80)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannelEpic___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MiHoYo::SDK::JSONArray* productArray; // 0x18
		::MiHoYo::SDK::PC::OS::HoYoChannelEpic* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetProductList_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelProductsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS13_0__GETPRODUCTLIST_B__0_OFFSET))(this, a1);
		}

	};
}
