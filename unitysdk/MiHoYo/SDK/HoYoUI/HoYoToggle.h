#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Toggle.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE_B1E0783BEE4CDBF1_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE_F0CBAF44B8C0C712_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE_F4E857D9D39516CD_OFFSET UNITYSDK_OFFSET(0x1EC4220)
#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x299CF20)
#define MIHOYO_SDK_HOYOUI_HOYOTOGGLE__CTOR_OFFSET UNITYSDK_OFFSET(0x299CF60)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoToggle_TypeDefinitionIndex = 15618;

	class HoYoToggle : public ::UnityEngine::UI::Toggle
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x128

		::System::Void B1E0783BEE4CDBF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE_B1E0783BEE4CDBF1_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* F4E857D9D39516CD()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE_F4E857D9D39516CD_OFFSET))(this);
		}

		::System::Void F0CBAF44B8C0C712()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE_F0CBAF44B8C0C712_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOTOGGLE_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
