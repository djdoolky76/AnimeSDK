#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Scrollbar.h"
namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0xB6108D0)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0xB6108E0)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_AWAKE_OFFSET UNITYSDK_OFFSET(0xB6108F0)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_CTOR_OFFSET UNITYSDK_OFFSET(0xB610990)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0xB6108C0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoScrollbar_TypeDefinitionIndex = 47743;

	class HoYoScrollbar : public ::UnityEngine::UI::Scrollbar
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x150
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLBAR_AWAKE_OFFSET))(this);
		}

	};
}
