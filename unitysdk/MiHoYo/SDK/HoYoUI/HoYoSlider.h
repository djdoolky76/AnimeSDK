#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Slider.h"
namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_APPLYGLOBALSKIN_OFFSET UNITYSDK_OFFSET(0x1E2E2960)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_APPLYLOCALSKIN_OFFSET UNITYSDK_OFFSET(0x1E2E2970)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E2E2980)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E2A20)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_GET_UIMETA_OFFSET UNITYSDK_OFFSET(0x1E2E2950)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoSlider_TypeDefinitionIndex = 47744;

	class HoYoSlider : public ::UnityEngine::UI::Slider
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x180
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* get_UIMeta()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_GET_UIMETA_OFFSET))(this);
		}

		::System::Void ApplyGlobalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_APPLYGLOBALSKIN_OFFSET))(this);
		}

		::System::Void ApplyLocalSkin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_APPLYLOCALSKIN_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_AWAKE_OFFSET))(this);
		}

	};
}
