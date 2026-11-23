#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B39C7E6370CBFB54;
namespace System { class String; }

#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_APPLYSKIN_OFFSET UNITYSDK_OFFSET(0x2963660)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_DEFAULT_OFFSET UNITYSDK_OFFSET(0x29636D0)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_ELEMENTID_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_USELOCALSKIN_OFFSET UNITYSDK_OFFSET(0x1873260)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_ELEMENTID_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define MIHOYO_SDK_HOYOUI_HOYOUIMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoUIMeta_TypeDefinitionIndex = 15477;

	class HoYoUIMeta : public ::System::Object
	{
	public:
		::System::String* m_ElementId; // 0x10
		::System::Boolean m_UseLocalSkin; // 0x18

		::System::Void ApplySkin(::B39C7E6370CBFB54* E45A26D0423B744B)
		{
			return ((::System::Void(*)(::PVOID, ::B39C7E6370CBFB54*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_APPLYSKIN_OFFSET))(this, E45A26D0423B744B);
		}

		::System::Boolean get_UseLocalSkin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_USELOCALSKIN_OFFSET))(this);
		}

		::System::String* get_ElementId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_ELEMENTID_OFFSET))(this);
		}

		::System::Void set_ElementId(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_SET_ELEMENTID_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_Default()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA_GET_DEFAULT_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOUIMETA__CTOR_OFFSET))(this);
		}
	};
}
