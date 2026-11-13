#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"
namespace MiHoYo::SDK::Win { class GuestBindMail; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_GUESTBINDMAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x19C74F40)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_BACK_OFFSET UNITYSDK_OFFSET(0x19C75BF0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_BIND_OFFSET UNITYSDK_OFFSET(0x19C75C30)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_CLOSE_OFFSET UNITYSDK_OFFSET(0x19C75C10)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x19C75EF0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x19C75E90)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_HIDE_OFFSET UNITYSDK_OFFSET(0x17222EF0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19C75ED0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_REGISTER_OFFSET UNITYSDK_OFFSET(0x19C75EB0)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_SETMAILINPUTTEXT_OFFSET UNITYSDK_OFFSET(0x17221E50)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_SHOW_OFFSET UNITYSDK_OFFSET(0x17220B90)
#define MIHOYO_SDK_WIN_GUESTBINDMAIL_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x19C75BE0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int GuestBindMail_TypeDefinitionIndex = 9505;

	class GuestBindMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		::UnityEngine::UI::Button* closeButton; // 0x58
		::UnityEngine::UI::Button* backButton; // 0x60
		::UnityEngine::UI::InputField* mailInput; // 0x68
		::UnityEngine::UI::InputField* passwordInput; // 0x70
		::UnityEngine::UI::Button* submitButton; // 0x78
		::UnityEngine::UI::Button* registerButton; // 0x80
		::UnityEngine::UI::Button* forgetPasswordButton; // 0x88
		::UnityEngine::UI::Text* submitButtonText; // 0x90
		::UnityEngine::UI::Text* registerButtonText; // 0x98
		::UnityEngine::UI::Text* forgetPasswordButtonText; // 0xA0
		::System::Action* OnBack; // 0xA8
		::System::Action* OnClose; // 0xB0
		::System::Action* OnRegister; // 0xB8
		::System::Action* OnForget; // 0xC0
		::System::Action_2<::System::String*, ::System::String*>* OnBind; // 0xC8
		static ::MiHoYo::SDK::Win::GuestBindMail** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::GuestBindMail**)UnitySDK::FromName("MiHoYo.SDK.Win", "GuestBindMail")->GetStaticField(0x22B90);
		}

		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* CloseButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* MailInputPath; // 0x0
		// static const ::System::String* PasswordInputPath; // 0x0
		// static const ::System::String* SubmitButtonPath; // 0x0
		// static const ::System::String* RegisterButtonPath; // 0x0
		// static const ::System::String* ForgetPasswordButtonPath; // 0x0
		// static const ::System::String* MailInputTextPath; // 0x0
		// static const ::System::String* PasswordInputTextPath; // 0x0
		// static const ::System::String* MailInputPlaceholderPath; // 0x0
		// static const ::System::String* PasswordInputPlaceholderPath; // 0x0
		// static const ::System::String* SubmitButtonTextPath; // 0x0
		// static const ::System::String* RegisterButtonTextPath; // 0x0
		// static const ::System::String* ForgetPasswordButtonTextPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_CTOR_OFFSET))(this);
		}

		static ::System::Void Show()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_SHOW_OFFSET))();
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_HIDE_OFFSET))();
		}

		::System::Void SetMailInputText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_SETMAILINPUTTEXT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_BACK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_CLOSE_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_BIND_OFFSET))(this);
		}

		::System::Void ForgetPassword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_FORGETPASSWORD_OFFSET))(this);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_REGISTER_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_GUESTBINDMAIL_ONDESTROY_OFFSET))(this);
		}

	};
}
