#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x39F8B40)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39F8BF0)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E519943FDDF88FEF_OFFSET UNITYSDK_OFFSET(0x39F8A70)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E57BDB3E904D3CF5_OFFSET UNITYSDK_OFFSET(0x39F8E90)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E72FED2CD630833D_OFFSET UNITYSDK_OFFSET(0x39F8930)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39F8AF0)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E9EE22D33973EDE4_OFFSET UNITYSDK_OFFSET(0x39F8CF0)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_EB021D1A11B61DB7_OFFSET UNITYSDK_OFFSET(0x39F8D90)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_EE9C4B1998BD7C9D_OFFSET UNITYSDK_OFFSET(0x39F8B90)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_F27E545EDD4E2AF4_OFFSET UNITYSDK_OFFSET(0x39E0C10)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_F4E6A1E4F409BFFC_OFFSET UNITYSDK_OFFSET(0x39F8BE0)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39F8410)
#define MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x39F8EB0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafeMobileVerifyMail_TypeDefinitionIndex = 11892;

	class SafeMobileVerifyMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::SafeMobileVerifyMail** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::SafeMobileVerifyMail**)Il2CppClass::FromTypeDefinitionIndex(SafeMobileVerifyMail_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x60
		::UnityEngine::UI::Text* B47D7F30CFC983AE; // 0x68
		::UnityEngine::UI::InputField* A72839549E6FF925; // 0x70
		::UnityEngine::UI::Button* B9522D9097444E2A; // 0x78
		::UnityEngine::UI::Text* E3E833FEC9F4B700; // 0x80
		::UnityEngine::UI::Button* F1C7ECBBBFF6AA0A; // 0x88
		::System::Action* OnClose; // 0x90
		::System::Action_1<::System::String*>* OnGetCode; // 0x98
		::System::Action_1<::System::String*>* OnBind; // 0xA0
		::System::Boolean AE0DBF5B307E1580; // 0xA8
		::System::Byte _padding0[0x3];
		::System::Single FE870DE6F4A68680; // 0xAC
		::System::Boolean E1041FCB5D68AA87; // 0xB0
		::System::Byte _padding1[0x7];
		::MiHoYo::SDK::AccountModel* B7FD0E66818C5B41; // 0xB8

		::System::Void E9EE22D33973EDE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E9EE22D33973EDE4_OFFSET))(this);
		}

		::System::Collections::IEnumerator* E519943FDDF88FEF(::System::Single FF0A37159A523E06)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E519943FDDF88FEF_OFFSET))(this, FF0A37159A523E06);
		}

		::System::Void E72FED2CD630833D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E72FED2CD630833D_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void E57BDB3E904D3CF5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E57BDB3E904D3CF5_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL__CTOR_OFFSET))(this);
		}

		::System::Void EB021D1A11B61DB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_EB021D1A11B61DB7_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_BFA7961FF2AC380B_OFFSET))(E0BB02EDCCFC0E4E);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void F27E545EDD4E2AF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_F27E545EDD4E2AF4_OFFSET))(this);
		}

		::System::Void F4E6A1E4F409BFFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_F4E6A1E4F409BFFC_OFFSET))(this);
		}

		::System::Void EE9C4B1998BD7C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_EE9C4B1998BD7C9D_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEMOBILEVERIFYMAIL_AB36E0EE549986E5_OFFSET))(this);
		}
	};
}
