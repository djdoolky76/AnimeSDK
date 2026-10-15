#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/GrantType.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class OverseaGrantMail; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BDABF30)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_BACK_OFFSET UNITYSDK_OFFSET(0x1BDADBB0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_CLICTOTHERBUTTON_OFFSET UNITYSDK_OFFSET(0x1BDADF30)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BDADFD0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BDAE060)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_HIDE_OFFSET UNITYSDK_OFFSET(0x1BDADB40)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BDAE040)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_QUESTION_OFFSET UNITYSDK_OFFSET(0x1BDADBD0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1BDADD60)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_RESETCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BDADD50)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_SHOW_OFFSET UNITYSDK_OFFSET(0x1BDADA40)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BDADF50)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_START_OFFSET UNITYSDK_OFFSET(0x1BDAD6E0)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_SUBMIT_OFFSET UNITYSDK_OFFSET(0x1BDADD90)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x1BDAD550)
#define MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x1BDACF90)

namespace MiHoYo::SDK::Win
{
	class OverseaGrantMail : public ::MiHoYo::SDK::UIElement
	{
	public:
		::UnityEngine::GameObject* dialog; // 0x58
		::UnityEngine::UI::Button* backButton; // 0x60
		::UnityEngine::UI::Button* questionButton; // 0x68
		::UnityEngine::UI::Text* contentTitle; // 0x70
		::UnityEngine::UI::Text* contentText; // 0x78
		::UnityEngine::UI::InputField* verifycodeInput; // 0x80
		::UnityEngine::UI::Button* requestCodeButton; // 0x88
		::UnityEngine::UI::Text* requestCodeText; // 0x90
		::UnityEngine::UI::Button* nextButton; // 0x98
		::UnityEngine::UI::Text* nextButtonText; // 0xA0
		::UnityEngine::UI::Button* otherButton; // 0xA8
		::UnityEngine::UI::Text* otherButtonText; // 0xB0
		::System::Action* OnBack; // 0xB8
		::System::Action* OnGetCode; // 0xC0
		::System::Action* OnSubmit; // 0xC8
		::System::Action* OnOtherButton; // 0xD0
		::System::Boolean isRequestVerifyCode; // 0xD8
		::System::Byte _padding0[0x3];
		::System::Single countDownTime; // 0xDC
		::System::Boolean retrieveFlag; // 0xE0
		::System::Byte _padding1[0x7];
		::MiHoYo::SDK::AccountModel* account; // 0xE8
		static ::MiHoYo::SDK::Win::OverseaGrantMail** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::OverseaGrantMail**)UnitySDK::FromName("MiHoYo.SDK.Win", "OverseaGrantMail")->GetStaticField(0x20460);
		}

		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::String* DialogPath; // 0x0
		// static const ::System::String* QuestionButtonPath; // 0x0
		// static const ::System::String* BackButtonPath; // 0x0
		// static const ::System::String* ContentTitlePath; // 0x0
		// static const ::System::String* ContentTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputPath; // 0x0
		// static const ::System::String* VerifyCodeInputTextPath; // 0x0
		// static const ::System::String* VerifyCodeInputTipsPath; // 0x0
		// static const ::System::String* RequestCodeButtonPath; // 0x0
		// static const ::System::String* RequestCodeTextPath; // 0x0
		// static const ::System::String* NextButtonPath; // 0x0
		// static const ::System::String* NextButtonTextPath; // 0x0
		// static const ::System::String* OtherButtonPath; // 0x0
		// static const ::System::String* OtherButtonTextPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_UPDATETEXT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_START_OFFSET))(this);
		}

		static ::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_SHOW_OFFSET))(a1);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_HIDE_OFFSET))();
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_BACK_OFFSET))(this);
		}

		::System::Void Question()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_QUESTION_OFFSET))(this);
		}

		::System::Void ResetCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_RESETCOUNTDOWN_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_REQUESTVERIFYMESSAGE_OFFSET))(this);
		}

		::System::Void Submit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_SUBMIT_OFFSET))(this);
		}

		::System::Void ClictOtherButton()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_CLICTOTHERBUTTON_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* CountDown(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_COUNTDOWN_OFFSET))(this, a1);
		}

		::System::Void UpdateRequestCodeButtonStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_UPDATEREQUESTCODEBUTTONSTATUS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_OVERSEAGRANTMAIL_ONDESTROY_OFFSET))(this);
		}

	};
}
