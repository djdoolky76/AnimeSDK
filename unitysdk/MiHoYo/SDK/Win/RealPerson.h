#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_REALPERSON_AAA119441812DF9E_OFFSET UNITYSDK_OFFSET(0x3A10140)
#define MIHOYO_SDK_WIN_REALPERSON_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A0FEF0)
#define MIHOYO_SDK_WIN_REALPERSON_AC71119F7E6D26DF_OFFSET UNITYSDK_OFFSET(0x3A0FB00)
#define MIHOYO_SDK_WIN_REALPERSON_B0D966C939EB007C_OFFSET UNITYSDK_OFFSET(0x3A0F8D0)
#define MIHOYO_SDK_WIN_REALPERSON_B7BF332844301EFC_OFFSET UNITYSDK_OFFSET(0x3A0FD30)
#define MIHOYO_SDK_WIN_REALPERSON_BDE9208E7A2FFFCA_OFFSET UNITYSDK_OFFSET(0x3A101F0)
#define MIHOYO_SDK_WIN_REALPERSON_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A0FFA0)
#define MIHOYO_SDK_WIN_REALPERSON_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A0F880)
#define MIHOYO_SDK_WIN_REALPERSON_F5BB4FF243F1E783_OFFSET UNITYSDK_OFFSET(0x3A0FF40)
#define MIHOYO_SDK_WIN_REALPERSON_FB08F0065135719A_OFFSET UNITYSDK_OFFSET(0x39E0C10)
#define MIHOYO_SDK_WIN_REALPERSON_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A0F410)
#define MIHOYO_SDK_WIN_REALPERSON__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealPerson_TypeDefinitionIndex = 12756;

	class RealPerson : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::RealPerson** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::RealPerson**)Il2CppClass::FromTypeDefinitionIndex(RealPerson_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x60
		::UnityEngine::UI::Button* A0C96F47DCDE8F74; // 0x68
		::UnityEngine::UI::Button* F6EACE493D4E9681; // 0x70
		::UnityEngine::UI::Text* F4CE16EAC5D5B894; // 0x78
		::UnityEngine::UI::Text* F1C449F72951E8A4; // 0x80
		::UnityEngine::UI::Button* F1C7ECBBBFF6AA0A; // 0x88
		::System::Action* OnBack; // 0x90
		::System::Action* OnLogin; // 0x98
		::System::Action* OnLoginWithoutConfirm; // 0xA0
		::System::Action* OnRequestRule; // 0xA8
		::System::Action* OnMeetProblem; // 0xB0
		::MiHoYo::SDK::AccountModel* B7FD0E66818C5B41; // 0xB8

		::System::Void F5BB4FF243F1E783(::System::String* A0B66D81A744678F, ::System::String* BDA7C07307835DAA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_F5BB4FF243F1E783_OFFSET))(this, A0B66D81A744678F, BDA7C07307835DAA);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON__CTOR_OFFSET))(this);
		}

		::System::Void B7BF332844301EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_B7BF332844301EFC_OFFSET))(this);
		}

		::System::Void FB08F0065135719A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_FB08F0065135719A_OFFSET))(this);
		}

		::System::Void B0D966C939EB007C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_B0D966C939EB007C_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_BFA7961FF2AC380B_OFFSET))(E0BB02EDCCFC0E4E);
		}

		::System::Void AC71119F7E6D26DF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_AC71119F7E6D26DF_OFFSET))(this);
		}

		::System::Void BDE9208E7A2FFFCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_BDE9208E7A2FFFCA_OFFSET))(this);
		}

		::System::Void AAA119441812DF9E(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_AAA119441812DF9E_OFFSET))(this, E82293C0814051A5);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALPERSON_AB36E0EE549986E5_OFFSET))(this);
		}
	};
}
