#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3A37CD0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_A9E50101F6A877A8_OFFSET UNITYSDK_OFFSET(0x3A367A0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3A370D0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_AD56BF9BAA8FBA13_OFFSET UNITYSDK_OFFSET(0x393DE90)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_B7E234B520B30E62_OFFSET UNITYSDK_OFFSET(0x3A37490)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_BD38B6F1F11F1B3B_OFFSET UNITYSDK_OFFSET(0x3A36A00)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_BE939DAB826FD0DE_OFFSET UNITYSDK_OFFSET(0x3A370A0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3A37120)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_E1F8AE9E50ABC640_OFFSET UNITYSDK_OFFSET(0x3A36EF0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_E37FD45A942FC5EF_OFFSET UNITYSDK_OFFSET(0x3A37320)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_E40C1766D763EBDE_OFFSET UNITYSDK_OFFSET(0x3A36880)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3A37050)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_EEF04F4B2B8F5980_OFFSET UNITYSDK_OFFSET(0x3A36E50)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_EFD9C68CCD3D42F2_OFFSET UNITYSDK_OFFSET(0x3A36FD0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3A372D0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F556E7B420C433FD_OFFSET UNITYSDK_OFFSET(0x3A36920)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F93410FB8E046835_OFFSET UNITYSDK_OFFSET(0x3A366C0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A35B90)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccountOversea_TypeDefinitionIndex = 12936;

	class LoginByAccountOversea : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByAccountOversea** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::LoginByAccountOversea**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccountOversea_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x60
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x68
		::UnityEngine::GameObject* AB6A0AA71F1FE817; // 0x70
		::UnityEngine::UI::InputField* accountInput; // 0x78
		::UnityEngine::UI::InputField* passwordInput; // 0x80
		::UnityEngine::UI::Button* FDC0334372D85AE5; // 0x88
		::UnityEngine::UI::Button* B416C7659772A4B9; // 0x90
		::UnityEngine::Transform* B1BB6B08CD949738; // 0x98
		::UnityEngine::Transform* E759717135E089AE; // 0xA0
		::UnityEngine::Transform* B0D239DF4DB3A8CF; // 0xA8
		::UnityEngine::Transform* F4C43149D0AC919D; // 0xB0
		::UnityEngine::Transform* F514D42C55777609; // 0xB8
		::UnityEngine::Transform* A6B8F779F2F61F5E; // 0xC0
		::UnityEngine::UI::Text* EC1E5C176D168AC4; // 0xC8
		::UnityEngine::UI::Text* A0AA9B3068096F3D; // 0xD0
		::UnityEngine::UI::Text* E5C85D8F9AD94B08; // 0xD8
		::UnityEngine::UI::Text* A796D57DEEADDD61; // 0xE0
		::System::Action* OnClose; // 0xE8
		::System::Action_2<::System::String*, ::System::String*>* OnLogin; // 0xF0
		::System::Action* OnRegister; // 0xF8
		::System::Action* OnForgetPwd; // 0x100
		::System::Action* OnGuest; // 0x108
		::System::Action* OnApple; // 0x110
		::System::Action* OnGoogle; // 0x118
		::System::Action* OnTwitter; // 0x120
		::System::Action* OnFacebook; // 0x128
		::System::Action* OnBack; // 0x130

		::System::Void E37FD45A942FC5EF(::System::Boolean E03C9EF207AF3CCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_E37FD45A942FC5EF_OFFSET))(this, E03C9EF207AF3CCB);
		}

		::System::Void B7E234B520B30E62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_B7E234B520B30E62_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA__CTOR_OFFSET))(this);
		}

		static ::System::Void BFA7961FF2AC380B(::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_BFA7961FF2AC380B_OFFSET))(E0BB02EDCCFC0E4E);
		}

		::System::Void BD38B6F1F11F1B3B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_BD38B6F1F11F1B3B_OFFSET))(this);
		}

		::System::Void F93410FB8E046835()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F93410FB8E046835_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_E85D1C741D5386D7_OFFSET))();
		}

		::System::Void EEF04F4B2B8F5980()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_EEF04F4B2B8F5980_OFFSET))(this);
		}

		::System::Void E1F8AE9E50ABC640()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_E1F8AE9E50ABC640_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void BE939DAB826FD0DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_BE939DAB826FD0DE_OFFSET))(this);
		}

		::System::Void F556E7B420C433FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F556E7B420C433FD_OFFSET))(this);
		}

		::System::Void A9E50101F6A877A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_A9E50101F6A877A8_OFFSET))(this);
		}

		::System::Void EFD9C68CCD3D42F2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_EFD9C68CCD3D42F2_OFFSET))(this);
		}

		::System::Void AD56BF9BAA8FBA13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_AD56BF9BAA8FBA13_OFFSET))(this);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void E40C1766D763EBDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNTOVERSEA_E40C1766D763EBDE_OFFSET))(this);
		}
	};
}
