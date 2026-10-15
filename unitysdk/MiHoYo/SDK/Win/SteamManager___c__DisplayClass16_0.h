#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONArray; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class SteamManager; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDF4660)
#define MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS16_0__GETPRODUCTLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1BDF8120)

namespace MiHoYo::SDK::Win
{
	class SteamManager___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::SteamManager* __4__this; // 0x10
		::MiHoYo::SDK::JSONArray* productArray; // 0x18
		::System::Action* callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetProductList_b__0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_STEAMMANAGER___C__DISPLAYCLASS16_0__GETPRODUCTLIST_B__0_OFFSET))(this, a1);
		}

	};
}
