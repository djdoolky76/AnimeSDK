#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class Toggle; }

#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_A7B9D97A8EACDFF4_OFFSET UNITYSDK_OFFSET(0x3AB8C10)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_A8F95FCE9D3B4E19_OFFSET UNITYSDK_OFFSET(0x3AB8200)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x3AB8500)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_AD56BF9BAA8FBA13_OFFSET UNITYSDK_OFFSET(0x3A71B20)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_B59A8E3EC814D998_OFFSET UNITYSDK_OFFSET(0x3AB8FB0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_B5ACAF167D922632_OFFSET UNITYSDK_OFFSET(0x3AB81E0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_BA6706DFBC04795C_OFFSET UNITYSDK_OFFSET(0x3AB87C0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_BD38B6F1F11F1B3B_OFFSET UNITYSDK_OFFSET(0x3AB7EC0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_BFA7961FF2AC380B_OFFSET UNITYSDK_OFFSET(0x3AB85C0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_BFFF33EA83C86EC7_OFFSET UNITYSDK_OFFSET(0x39AA130)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_E25F49C9FB309A61_OFFSET UNITYSDK_OFFSET(0x3AB82A0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_E323F0492F5FC38E_OFFSET UNITYSDK_OFFSET(0x3AB8220)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_E40C1766D763EBDE_OFFSET UNITYSDK_OFFSET(0x391ECA0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_E85D1C741D5386D7_OFFSET UNITYSDK_OFFSET(0x3AB84B0)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_EEF04F4B2B8F5980_OFFSET UNITYSDK_OFFSET(0x391EC80)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x3AB8770)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_F8884B2D4673DE64_OFFSET UNITYSDK_OFFSET(0x3AB8260)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3AB7150)
#define MIHOYO_SDK_WIN_LOGINBYACCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x39230A0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginByAccount_TypeDefinitionIndex = 12111;

	class LoginByAccount : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::Win::LoginByAccount** StaticGet_F459A1CAE950E680()
		{
			return (::MiHoYo::SDK::Win::LoginByAccount**)Il2CppClass::FromTypeDefinitionIndex(LoginByAccount_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::UI::Button* F9B6CD06A11EA70F; // 0x60
		::UnityEngine::UI::Button* B1D38914498DA7C9; // 0x68
		::UnityEngine::GameObject* AB6A0AA71F1FE817; // 0x70
		::UnityEngine::UI::InputField* accountInput; // 0x78
		::UnityEngine::UI::InputField* passwordInput; // 0x80
		::UnityEngine::UI::Button* FDC0334372D85AE5; // 0x88
		::UnityEngine::UI::Button* B8B1B6E6109857D9; // 0x90
		::UnityEngine::UI::Button* B416C7659772A4B9; // 0x98
		::UnityEngine::UI::Toggle* BEBC975D297F089B; // 0xA0
		::UnityEngine::UI::Button* A68FF055D890E01B; // 0xA8
		::UnityEngine::UI::Button* A9B9EE9EDE5E1A79; // 0xB0
		::UnityEngine::UI::Toggle* B4E6B622270B9B5F; // 0xB8
		::UnityEngine::UI::Text* F7CD54AE78A36CAD; // 0xC0
		::System::Action* OnBack; // 0xC8
		::System::Action* OnClose; // 0xD0
		::System::Action* OnRegister; // 0xD8
		::System::Action* OnForgetPwd; // 0xE0
		::System::Action_2<::System::String*, ::System::String*>* OnLogin; // 0xE8
		::System::Action* OnUserAgreement; // 0xF0
		::System::Action* OnUserPrivacy; // 0xF8
		::System::Action_1<::System::Boolean>* OnToggleClicked; // 0x100
		::System::Action_1<::System::Boolean>* OnSaveRecordToggleClicked; // 0x108
		::System::Action* OnNotifyClose; // 0x110
		::MiHoYo::SDK::AccountModel* B7FD0E66818C5B41; // 0x118

		::System::Void BD38B6F1F11F1B3B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_BD38B6F1F11F1B3B_OFFSET))(this);
		}

		::System::Void EEF04F4B2B8F5980()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_EEF04F4B2B8F5980_OFFSET))(this);
		}

		::System::Void B59A8E3EC814D998(::System::Boolean FD96BCA2122A7513)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_B59A8E3EC814D998_OFFSET))(this, FD96BCA2122A7513);
		}

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_AB36E0EE549986E5_OFFSET))(this);
		}

		::System::Void E323F0492F5FC38E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_E323F0492F5FC38E_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void B5ACAF167D922632(::System::Boolean FE9C48DCF56C7987)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_B5ACAF167D922632_OFFSET))(this, FE9C48DCF56C7987);
		}

		::System::Void BA6706DFBC04795C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_BA6706DFBC04795C_OFFSET))(this);
		}

		static ::System::Void E85D1C741D5386D7()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_E85D1C741D5386D7_OFFSET))();
		}

		static ::System::Void BFA7961FF2AC380B(::MiHoYo::SDK::AccountModel* E0BB02EDCCFC0E4E)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_BFA7961FF2AC380B_OFFSET))(E0BB02EDCCFC0E4E);
		}

		::System::Void E40C1766D763EBDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_E40C1766D763EBDE_OFFSET))(this);
		}

		::System::Void AD56BF9BAA8FBA13()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_AD56BF9BAA8FBA13_OFFSET))(this);
		}

		::System::Void F8884B2D4673DE64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_F8884B2D4673DE64_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT__CTOR_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void A7B9D97A8EACDFF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_A7B9D97A8EACDFF4_OFFSET))(this);
		}

		::System::Void BFFF33EA83C86EC7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_BFFF33EA83C86EC7_OFFSET))(this);
		}

		::System::Void E25F49C9FB309A61()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_E25F49C9FB309A61_OFFSET))(this);
		}

		::System::Void A8F95FCE9D3B4E19(::System::Boolean FE9C48DCF56C7987)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINBYACCOUNT_A8F95FCE9D3B4E19_OFFSET))(this, FE9C48DCF56C7987);
		}
	};
}
