#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_GUESTBINDMAIL_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3B04A80)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_B2F50C09E1456C26_OFFSET UNITYSDK_OFFSET(0x39AA130)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3B04B30)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_E3C92E27CEFE6120_OFFSET UNITYSDK_OFFSET(0x3B04AD0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_E72FED2CD630833D_OFFSET UNITYSDK_OFFSET(0x3B048A0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3B04A30)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x394E270)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_F7D068BC7F8ED55F_OFFSET UNITYSDK_OFFSET(0x3938230)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_FB08F0065135719A_OFFSET UNITYSDK_OFFSET(0x393AC30)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3B041A0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindMail_TypeDefinitionIndex = 12276;

	class GuestBindMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::GuestBindMail** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::GuestBindMail**)Il2CppClass::FromTypeDefinitionIndex(GuestBindMail_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x68
		::UnityEngine::UI::InputField* FF412A147C45F1AA; // 0x70
		::UnityEngine::UI::InputField* EDFB874707B3F0A5; // 0x78
		::UnityEngine::UI::Button* F1C7ECBBBFF6AA0A; // 0x80
		::UnityEngine::UI::Button* B8B1B6E6109857D9; // 0x88
		::UnityEngine::UI::Button* B416C7659772A4B9; // 0x90
		::UnityEngine::UI::Text* FBDF1B40720E3BF3; // 0x98
		::UnityEngine::UI::Text* EFA843B7143C5692; // 0xA0
		::UnityEngine::UI::Text* EE548B63B78D6603; // 0xA8
		::System::Action* OnBack; // 0xB0
		::System::Action* OnClose; // 0xB8
		::System::Action* OnRegister; // 0xC0
		::System::Action* OnForget; // 0xC8
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0xD0

		::System::Void FB08F0065135719A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_FB08F0065135719A_OFFSET))(this);
		}

		::System::Void B2F50C09E1456C26()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_B2F50C09E1456C26_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_BFA7961FF2AC380B_OFFSET))();
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL__CTOR_OFFSET))(this);
		}

		::System::Void E3C92E27CEFE6120(::System::String* EAE533E9B4BAEB61)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_E3C92E27CEFE6120_OFFSET))(this, EAE533E9B4BAEB61);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void F7D068BC7F8ED55F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_F7D068BC7F8ED55F_OFFSET))(this);
		}

		::System::Void E72FED2CD630833D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_E72FED2CD630833D_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
