#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_BINDTAPTAP_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3A6D530)
#define MIHOYO_SDK_WIN_BINDTAPTAP_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A6D390)
#define MIHOYO_SDK_WIN_BINDTAPTAP_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A6D3E0)
#define MIHOYO_SDK_WIN_BINDTAPTAP_E72FED2CD630833D_OFFSET UNITYSDK_OFFSET(0x3A1F660)
#define MIHOYO_SDK_WIN_BINDTAPTAP_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A6D340)
#define MIHOYO_SDK_WIN_BINDTAPTAP_F7D068BC7F8ED55F_OFFSET UNITYSDK_OFFSET(0x39E0C10)
#define MIHOYO_SDK_WIN_BINDTAPTAP_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A6CF20)
#define MIHOYO_SDK_WIN_BINDTAPTAP__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindTapTap_TypeDefinitionIndex = 11954;

	class BindTapTap : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::BindTapTap** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::BindTapTap**)Il2CppClass::FromTypeDefinitionIndex(BindTapTap_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* A5532A473D08A2FC; // 0x60
		::UnityEngine::UI::Button* B8B1B6E6109857D9; // 0x68
		::UnityEngine::UI::Text* FD79C6F23ADCE378; // 0x70
		::UnityEngine::UI::Text* B162DF194352E4B2; // 0x78
		::UnityEngine::UI::Text* EFA843B7143C5692; // 0x80
		::System::Action* OnBind; // 0x88
		::System::Action* OnRegister; // 0x90

		::System::Void E72FED2CD630833D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_E72FED2CD630833D_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void F7D068BC7F8ED55F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_F7D068BC7F8ED55F_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_BFA7961FF2AC380B_OFFSET))();
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP__CTOR_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDTAPTAP_A7B9D97A8EACDFF4_OFFSET))(this);
		}
	};
}
