#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/ScrollRect.h"

namespace MiHoYo::SDK::HoYoUI { class HoYoUIMeta; }

#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_B1E0783BEE4CDBF1_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_F0CBAF44B8C0C712_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_F4E857D9D39516CD_OFFSET UNITYSDK_OFFSET(0x17F0F40)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2A07C80)
#define MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT__CTOR_OFFSET UNITYSDK_OFFSET(0x2A21EB0)

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int HoYoScrollRect_TypeDefinitionIndex = 15975;

	class HoYoScrollRect : public ::UnityEngine::UI::ScrollRect
	{
	public:
		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* m_UIMeta; // 0x130

		::System::Void F0CBAF44B8C0C712()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_F0CBAF44B8C0C712_OFFSET))(this);
		}

		::System::Void B1E0783BEE4CDBF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_B1E0783BEE4CDBF1_OFFSET))(this);
		}

		::MiHoYo::SDK::HoYoUI::HoYoUIMeta* F4E857D9D39516CD()
		{
			return ((::MiHoYo::SDK::HoYoUI::HoYoUIMeta*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_F4E857D9D39516CD_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOUI_HOYOSCROLLRECT__CTOR_OFFSET))(this);
		}
	};
}
