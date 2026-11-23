#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_A068C30537BEDF0B_OFFSET UNITYSDK_OFFSET(0x3938320)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3938460)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_BDE9208E7A2FFFCA_OFFSET UNITYSDK_OFFSET(0x3938890)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x39384F0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E11D95146EFACF43_OFFSET UNITYSDK_OFFSET(0x391EC80)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E519943FDDF88FEF_OFFSET UNITYSDK_OFFSET(0x3938250)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E6B4BDD0DA6230D9_OFFSET UNITYSDK_OFFSET(0x391ECA0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x39382D0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E9EE22D33973EDE4_OFFSET UNITYSDK_OFFSET(0x3938610)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_EB021D1A11B61DB7_OFFSET UNITYSDK_OFFSET(0x3938780)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_EE9C4B1998BD7C9D_OFFSET UNITYSDK_OFFSET(0x39384B0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x39386C0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_F4E6A1E4F409BFFC_OFFSET UNITYSDK_OFFSET(0x39384E0)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_FB08F0065135719A_OFFSET UNITYSDK_OFFSET(0x3938230)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3937960)
#define MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x3938880)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SecondRealNameGrantMail_TypeDefinitionIndex = 12360;

	class SecondRealNameGrantMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::SecondRealNameGrantMail** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::SecondRealNameGrantMail**)Il2CppClass::FromTypeDefinitionIndex(SecondRealNameGrantMail_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x60
		::UnityEngine::UI::Text* B47D7F30CFC983AE; // 0x68
		::UnityEngine::UI::InputField* FCEBE8606898FDD6; // 0x70
		::UnityEngine::UI::Button* B9522D9097444E2A; // 0x78
		::UnityEngine::UI::Text* E3E833FEC9F4B700; // 0x80
		::UnityEngine::UI::Button* FDC0334372D85AE5; // 0x88
		::UnityEngine::GameObject* FD46F712AECA097E; // 0x90
		::UnityEngine::GameObject* ED2561A663A991AA; // 0x98
		::UnityEngine::UI::Button* A74B3323B744DE02; // 0xA0
		::UnityEngine::UI::Button* BB3703332F80C65D; // 0xA8
		::UnityEngine::UI::Text* B233BA9CEBE4FCAF; // 0xB0
		::UnityEngine::UI::Text* A7EDA1FF091D3867; // 0xB8
		::System::Action* OnBack; // 0xC0
		::System::Action* OnGetCode; // 0xC8
		::System::Action_1<::System::String*>* OnLogin; // 0xD0
		::System::Action* OnGrantPhone; // 0xD8
		::System::Action* OnOtherVerify; // 0xE0
		::System::Boolean AE0DBF5B307E1580; // 0xE8
		::System::Byte _padding0[0x3];
		::System::Single FE870DE6F4A68680; // 0xEC
		::System::Boolean E1041FCB5D68AA87; // 0xF0
		::System::Byte _padding1[0x7];
		::MiHoYo::SDK::AccountModel* B7FD0E66818C5B41; // 0xF8
		::System::Boolean E3330F3D1636C471; // 0x100
		::System::Boolean A75483E2B9ECB1CF; // 0x101

		::System::Void EE9C4B1998BD7C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_EE9C4B1998BD7C9D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL__CTOR_OFFSET))(this);
		}

		::System::Void EB021D1A11B61DB7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_EB021D1A11B61DB7_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void E9EE22D33973EDE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E9EE22D33973EDE4_OFFSET))(this);
		}

		::System::Void BDE9208E7A2FFFCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_BDE9208E7A2FFFCA_OFFSET))(this);
		}

		::System::Void E11D95146EFACF43()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E11D95146EFACF43_OFFSET))(this);
		}

		::System::Void FB08F0065135719A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_FB08F0065135719A_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void F4E6A1E4F409BFFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_F4E6A1E4F409BFFC_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E, ::System::Boolean B9FF204A96C1AAFE, ::System::Boolean E877B04A6574B72C)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_BFA7961FF2AC380B_OFFSET))(E0BB02EDCCFC0E4E, B9FF204A96C1AAFE, E877B04A6574B72C);
		}

		::System::Void A068C30537BEDF0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_A068C30537BEDF0B_OFFSET))(this);
		}

		::System::Void E6B4BDD0DA6230D9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E6B4BDD0DA6230D9_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Collections::IEnumerator* E519943FDDF88FEF(::System::Single FF0A37159A523E06)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SECONDREALNAMEGRANTMAIL_E519943FDDF88FEF_OFFSET))(this, FF0A37159A523E06);
		}
	};
}
