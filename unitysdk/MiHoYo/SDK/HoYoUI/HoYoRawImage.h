#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/RawImage.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_B1E0783BEE4CDBF1_OFFSET UNITYSDK_OFFSET(0x2961C90)
#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_F0CBAF44B8C0C712_OFFSET UNITYSDK_OFFSET(0x2961B20)
#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_F4E857D9D39516CD_OFFSET UNITYSDK_OFFSET(0x1921830)
#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2961DD0)
#define MIHOYO_SDK_HOYOUI_HOYORAWIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x2961E50)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoRawImage_TypeDefinitionIndex = 15473;

	class HoYoRawImage : public ::UnityEngine::UI::RawImage
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x110

		::System::Void F0CBAF44B8C0C712()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_F0CBAF44B8C0C712_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void B1E0783BEE4CDBF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_B1E0783BEE4CDBF1_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* F4E857D9D39516CD()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE_F4E857D9D39516CD_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYORAWIMAGE__CTOR_OFFSET))(this);
		}
	};
}
