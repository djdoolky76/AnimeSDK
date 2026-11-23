#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_GUESTBINDPHONE_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x39AA470)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_B958620318CDD6A1_OFFSET UNITYSDK_OFFSET(0x39AA130)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39AA530)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_E340AC773E63D0BA_OFFSET UNITYSDK_OFFSET(0x39AA730)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_E519943FDDF88FEF_OFFSET UNITYSDK_OFFSET(0x39AA3A0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_E57BDB3E904D3CF5_OFFSET UNITYSDK_OFFSET(0x39AA730)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_E72FED2CD630833D_OFFSET UNITYSDK_OFFSET(0x39AA150)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39AA420)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_E9EE22D33973EDE4_OFFSET UNITYSDK_OFFSET(0x39AA680)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_EB021D1A11B61DB7_OFFSET UNITYSDK_OFFSET(0x39AA750)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_EE9C4B1998BD7C9D_OFFSET UNITYSDK_OFFSET(0x39AA4C0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x393AC30)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_F4E6A1E4F409BFFC_OFFSET UNITYSDK_OFFSET(0x39AA520)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39A99E0)
#define MIHOYO_SDK_WIN_GUESTBINDPHONE__CTOR_OFFSET UNITYSDK_OFFSET(0x39AA870)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindPhone_TypeDefinitionIndex = 12555;

	class GuestBindPhone : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::GuestBindPhone** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::GuestBindPhone**)Il2CppClass::FromTypeDefinitionIndex(GuestBindPhone_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::UnityEngine::UI::Text* B40CC60480F2FEB8; // 0x68
		::UnityEngine::UI::InputField* E3F11E78772F3477; // 0x70
		::UnityEngine::UI::InputField* A72839549E6FF925; // 0x78
		::UnityEngine::UI::Button* F1C7ECBBBFF6AA0A; // 0x80
		::UnityEngine::UI::Button* A74B3323B744DE02; // 0x88
		::UnityEngine::UI::Button* B9522D9097444E2A; // 0x90
		::UnityEngine::UI::Text* E3E833FEC9F4B700; // 0x98
		::UnityEngine::UI::Text* FBDF1B40720E3BF3; // 0xA0
		::UnityEngine::UI::Text* B233BA9CEBE4FCAF; // 0xA8
		::System::Action* OnClose; // 0xB0
		::System::Action_1<::System::String*>* OnGetCode; // 0xB8
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0xC0
		::System::Action* OnBindMail; // 0xC8
		::System::Boolean AE0DBF5B307E1580; // 0xD0
		::System::Byte _padding0[0x3];
		::System::Single FE870DE6F4A68680; // 0xD4
		::System::Boolean E1041FCB5D68AA87; // 0xD8

		::System::Void E340AC773E63D0BA(::System::String* A24289F86856ED60)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_E340AC773E63D0BA_OFFSET))(this, A24289F86856ED60);
		}

		::System::Void E9EE22D33973EDE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_E9EE22D33973EDE4_OFFSET))(this);
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void E57BDB3E904D3CF5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_E57BDB3E904D3CF5_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE__CTOR_OFFSET))(this);
		}

		::System::Void EB021D1A11B61DB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_EB021D1A11B61DB7_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void EE9C4B1998BD7C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_EE9C4B1998BD7C9D_OFFSET))(this);
		}

		::System::Collections::IEnumerator* E519943FDDF88FEF(::System::Single FF0A37159A523E06)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_E519943FDDF88FEF_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Void E72FED2CD630833D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_E72FED2CD630833D_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void F4E6A1E4F409BFFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_F4E6A1E4F409BFFC_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_BFA7961FF2AC380B_OFFSET))();
		}

		::System::Void B958620318CDD6A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDPHONE_B958620318CDD6A1_OFFSET))(this);
		}
	};
}
