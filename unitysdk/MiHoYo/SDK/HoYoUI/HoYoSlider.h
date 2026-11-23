#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Slider.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_B1E0783BEE4CDBF1_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_F0CBAF44B8C0C712_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_F4E857D9D39516CD_OFFSET UNITYSDK_OFFSET(0x16B6ED0)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x299CEA0)
#define MIHOYO_SDK_HOYOUI_HOYOSLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x299CEE0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoSlider_TypeDefinitionIndex = 15628;

	class HoYoSlider : public ::UnityEngine::UI::Slider
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x168

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void B1E0783BEE4CDBF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_B1E0783BEE4CDBF1_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER__CTOR_OFFSET))(this);
		}

		::System::Void F0CBAF44B8C0C712()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_F0CBAF44B8C0C712_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* F4E857D9D39516CD()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSLIDER_F4E857D9D39516CD_OFFSET))(this);
		}
	};
}
