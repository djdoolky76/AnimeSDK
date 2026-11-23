#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3AC04A0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3AC02A0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_B2F50C09E1456C26_OFFSET UNITYSDK_OFFSET(0x393AC30)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3AC0350)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_E3C92E27CEFE6120_OFFSET UNITYSDK_OFFSET(0x3AC02F0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_E72FED2CD630833D_OFFSET UNITYSDK_OFFSET(0x3AC00C0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3AC0250)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x393AC50)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_FB08F0065135719A_OFFSET UNITYSDK_OFFSET(0x39A91F0)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3ABF970)
#define MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int OverseaGuestBindMail_TypeDefinitionIndex = 12125;

	class OverseaGuestBindMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::OverseaGuestBindMail** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::OverseaGuestBindMail**)Il2CppClass::FromTypeDefinitionIndex(OverseaGuestBindMail_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x68
		::UnityEngine::UI::InputField* FF412A147C45F1AA; // 0x70
		::UnityEngine::UI::InputField* EDFB874707B3F0A5; // 0x78
		::UnityEngine::UI::Button* F1C7ECBBBFF6AA0A; // 0x80
		::UnityEngine::UI::Button* B416C7659772A4B9; // 0x88
		::UnityEngine::UI::Text* FBDF1B40720E3BF3; // 0x90
		::UnityEngine::UI::Text* EE548B63B78D6603; // 0x98
		::System::Action* OnBack; // 0xA0
		::System::Action* OnClose; // 0xA8
		::System::Action* OnForget; // 0xB0
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0xB8

		::System::Void FB08F0065135719A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_FB08F0065135719A_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void E3C92E27CEFE6120(::System::String* EAE533E9B4BAEB61)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_E3C92E27CEFE6120_OFFSET))(this, EAE533E9B4BAEB61);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL__CTOR_OFFSET))(this);
		}

		::System::Void E72FED2CD630833D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_E72FED2CD630833D_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void B2F50C09E1456C26()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_B2F50C09E1456C26_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_BFA7961FF2AC380B_OFFSET))();
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGUESTBINDMAIL_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
