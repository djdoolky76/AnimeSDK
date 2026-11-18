#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UIElement.h"

namespace MiHoYo::SDK::Win { class QRCode; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_UI_ACCOUNTBINDING_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D8572B0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_BACK_OFFSET UNITYSDK_OFFSET(0x1D85A340)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_BINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D85A910)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_CAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1D8568D0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_CLEARCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1D856F60)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_CLEARINPUTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D856CF0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_CLOSE_OFFSET UNITYSDK_OFFSET(0x1D85A360)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_HIDE_OFFSET UNITYSDK_OFFSET(0x1D857240)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_INVALIDATEQRCODE_OFFSET UNITYSDK_OFFSET(0x1D856080)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_LOADINGQRCODE_OFFSET UNITYSDK_OFFSET(0x1D856310)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_ONAGREEMENTCHECKBOXTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0x1D85A820)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_ONCAPTCHACODEINPUTFIELDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D85A6A0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_ONCAPTCHACOUNTDOWNENDS_OFFSET UNITYSDK_OFFSET(0x1D85A510)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_ONMAILINPUTFIELDVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1D85A5A0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_REFRESHQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1D85AAA0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_REQUESTCAPTCHACODE_OFFSET UNITYSDK_OFFSET(0x1D85A380)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SETINPUTACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D856B50)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SETQRIMAGE_OFFSET UNITYSDK_OFFSET(0x1D855E60)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SETSENDCAPTCHABUTTONSTATUS_OFFSET UNITYSDK_OFFSET(0x1D856810)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1D85AA20)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1D85A9A0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_SHOW_OFFSET UNITYSDK_OFFSET(0x1D857140)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_STARTCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1D8564B0)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_STOPCAPTCHACOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1D856920)
#define MIHOYO_SDK_UI_ACCOUNTBINDING_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1D85A480)
#define MIHOYO_SDK_UI_ACCOUNTBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D85AB00)

namespace MiHoYo::SDK::UI
{
	inline static constexpr unsigned int AccountBinding_TypeDefinitionIndex = 19641;

	class AccountBinding : public ::MiHoYo::SDK::UIElement
	{
	public:
		static ::MiHoYo::SDK::UI::AccountBinding** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::UI::AccountBinding**)Il2CppClass::FromTypeDefinitionIndex(AccountBinding_TypeDefinitionIndex)->GetStaticField(0x9600);
		}
		// static const ::System::String* PrefabName; // 0x0
		// static const ::System::Int32 CAPTCHA_RESEND_COUNTDOWN_SECONDS = 0x3C; // 0x0
		// static const ::System::String* backBtnPath; // 0x0
		// static const ::System::String* closeBtnPath; // 0x0
		// static const ::System::String* titleTextPath; // 0x0
		// static const ::System::String* descTextPath; // 0x0
		// static const ::System::String* manualBindTitleTextPath; // 0x0
		// static const ::System::String* mailInputPath; // 0x0
		// static const ::System::String* mailInputClearAllBtnPath; // 0x0
		// static const ::System::String* codeInputPath; // 0x0
		// static const ::System::String* codeInputClearAllBtnPath; // 0x0
		// static const ::System::String* sendCaptchaBtnPath; // 0x0
		// static const ::System::String* sendCaptchaBtnTextPath; // 0x0
		// static const ::System::String* showUserAgreementObjPath; // 0x0
		// static const ::System::String* viewUserAgreementLabelTextPath; // 0x0
		// static const ::System::String* viewUserAgreementBtnPath; // 0x0
		// static const ::System::String* showPrivacyProtocolObjPath; // 0x0
		// static const ::System::String* viewPrivacyProtocolLabelTextPath; // 0x0
		// static const ::System::String* viewPrivacyProtocolBtnPath; // 0x0
		// static const ::System::String* agreementCheckboxPath; // 0x0
		// static const ::System::String* agreementCheckboxTextPath; // 0x0
		// static const ::System::String* bindBtnPath; // 0x0
		// static const ::System::String* bindBtnTextPath; // 0x0
		// static const ::System::String* qrBindTitleTextPath; // 0x0
		// static const ::System::String* qrImagePath; // 0x0
		// static const ::System::String* qrLoadingPanelPath; // 0x0
		// static const ::System::String* qrExpiredPanelPath; // 0x0
		// static const ::System::String* qrRefreshBtnPath; // 0x0
		// static const ::System::String* qrStatusTipsTextPath; // 0x0
		// static const ::System::String* scanInstructionTextPath; // 0x0
		::UnityEngine::UI::Text* titleText; // 0x58
		::UnityEngine::UI::Text* descText; // 0x60
		::UnityEngine::UI::Text* manualBindTitleText; // 0x68
		::UnityEngine::UI::Text* sendCaptchaButtonText; // 0x70
		::UnityEngine::UI::Text* viewUserAgreementLabelText; // 0x78
		::UnityEngine::UI::Text* viewPrivacyProtocolLabelText; // 0x80
		::UnityEngine::UI::Text* agreementCheckboxText; // 0x88
		::UnityEngine::UI::Text* bindBtnText; // 0x90
		::UnityEngine::UI::Text* qrBindTitleText; // 0x98
		::UnityEngine::UI::Text* scanInstructionText; // 0xA0
		::UnityEngine::UI::Button* backBtn; // 0xA8
		::UnityEngine::UI::Button* closeBtn; // 0xB0
		::UnityEngine::UI::Button* mailInputClearAllBtn; // 0xB8
		::UnityEngine::UI::Button* captchaInputClearAllBtn; // 0xC0
		::UnityEngine::UI::Button* viewUserAgreementBtn; // 0xC8
		::UnityEngine::UI::Button* viewPrivacyProtocolBtn; // 0xD0
		::UnityEngine::UI::Button* sendCaptchaBtn; // 0xD8
		::UnityEngine::UI::Button* bindBtn; // 0xE0
		::UnityEngine::UI::Button* qrRefreshBtn; // 0xE8
		::UnityEngine::GameObject* agreementCheckboxObj; // 0xF0
		::UnityEngine::GameObject* showUserAgreementObj; // 0xF8
		::UnityEngine::GameObject* showPrivacyProtocolObj; // 0x100
		::UnityEngine::UI::InputField* mailInput; // 0x108
		::UnityEngine::UI::InputField* captchaInput; // 0x110
		::UnityEngine::GameObject* qrImageObj; // 0x118
		::MiHoYo::SDK::Win::QRCode* qrCodeComponent; // 0x120
		::UnityEngine::GameObject* qrLoadingPanelObj; // 0x128
		::UnityEngine::GameObject* qrExpiredPanelObj; // 0x130
		::UnityEngine::GameObject* qrStatusTipsTextObj; // 0x138
		::System::Single resendCaptchaCountdownSeconds; // 0x140
		::System::Byte _padding0[0x4];
		::UnityEngine::Coroutine* CaptchaCountdownCoroutine; // 0x148
		::System::String* gamertag; // 0x150
		::System::Boolean showAgreement; // 0x158
		::System::Byte _padding1[0x7];
		::System::Action* OnBackBtnClicked; // 0x160
		::System::Action* OnCloseBtnClicked; // 0x168
		::System::Action_1<::System::String*>* OnGetCaptchaBtnClicked; // 0x170
		::System::Action* OnShowUserAgreementClicked; // 0x178
		::System::Action* OnShowPrivacyProtocolClicked; // 0x180
		::System::Action_1<::System::String*>* OnBindBtnClicked; // 0x188
		::System::Action* OnQRRefreshBtnClicked; // 0x190

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING__CTOR_OFFSET))(this);
		}

		::System::Void SetQRImage(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SETQRIMAGE_OFFSET))(this, url);
		}

		::System::Void InvalidateQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_INVALIDATEQRCODE_OFFSET))(this);
		}

		::System::Void LoadingQRCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_LOADINGQRCODE_OFFSET))(this);
		}

		::System::Void StartCaptchaCountdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_STARTCAPTCHACOUNTDOWN_OFFSET))(this);
		}

		::System::Void StopCaptchaCountdown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_STOPCAPTCHACOUNTDOWN_OFFSET))(this);
		}

		::System::Void SetInputAccount(::System::String* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SETINPUTACCOUNT_OFFSET))(this, account);
		}

		::System::Void ClearInputAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_CLEARINPUTACCOUNT_OFFSET))(this);
		}

		::System::Void ClearCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_CLEARCAPTCHACODE_OFFSET))(this);
		}

		static ::System::Void Show(::System::String* gamertag, ::System::Boolean showAgreement)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SHOW_OFFSET))(gamertag, showAgreement);
		}

		static ::System::Void Hide()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_HIDE_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_AWAKE_OFFSET))(this);
		}

		::System::Void Back()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_BACK_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_CLOSE_OFFSET))(this);
		}

		::System::Void RequestCaptchaCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_REQUESTCAPTCHACODE_OFFSET))(this);
		}

		::System::Void UpdateCaptchaResendCountdown(::System::Single seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_UPDATECAPTCHARESENDCOUNTDOWN_OFFSET))(this, seconds);
		}

		::System::Collections::IEnumerator* CaptchaResendCountdown()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_CAPTCHARESENDCOUNTDOWN_OFFSET))(this);
		}

		::System::Void OnCaptchaCountdownEnds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_ONCAPTCHACOUNTDOWNENDS_OFFSET))(this);
		}

		::System::Void OnMailInputFieldValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_ONMAILINPUTFIELDVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void OnCaptchaCodeInputFieldValueChanged(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_ONCAPTCHACODEINPUTFIELDVALUECHANGED_OFFSET))(this, val);
		}

		::System::Void OnAgreementCheckboxToggleClicked(::System::Boolean isOn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_ONAGREEMENTCHECKBOXTOGGLECLICKED_OFFSET))(this, isOn);
		}

		::System::Void SetSendCaptchaButtonStatus(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SETSENDCAPTCHABUTTONSTATUS_OFFSET))(this, enable);
		}

		::System::Void BindAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_BINDACCOUNT_OFFSET))(this);
		}

		::System::Void ShowUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SHOWUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_SHOWPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void RefreshQRImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_ACCOUNTBINDING_REFRESHQRIMAGE_OFFSET))(this);
		}
	};
}
