#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK::Win { class SafePhoneManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_BINDMOBILETICKET_OFFSET UNITYSDK_OFFSET(0x1CF74CD0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF757C0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CHECKSAFEMOBILE_OFFSET UNITYSDK_OFFSET(0x1CF73840)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1CF74640)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF757B0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HANDLETICKETINVALID_OFFSET UNITYSDK_OFFSET(0x1CF75470)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEBINDMOBILEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF73D10)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEVERIFYMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF74150)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1CF74660)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETBINDRESULT_OFFSET UNITYSDK_OFFSET(0x1CF74AA0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMAILCODE_OFFSET UNITYSDK_OFFSET(0x1CF75070)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMOBILECODE_OFFSET UNITYSDK_OFFSET(0x1CF74BD0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x1CF755E0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAIL_OFFSET UNITYSDK_OFFSET(0x1CF752C0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1CF74760)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1CF75170)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1CF74F10)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_RESETTICKET_OFFSET UNITYSDK_OFFSET(0x1CF75060)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF73DC0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1CF73B10)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF74200)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAIL_OFFSET UNITYSDK_OFFSET(0x1CF739B0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x1CF73970)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMAILCODE_B__26_0_OFFSET UNITYSDK_OFFSET(0x1CF767E0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMOBILECODE_B__22_0_OFFSET UNITYSDK_OFFSET(0x1CF76310)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMAILCAPTCHA_B__27_0_OFFSET UNITYSDK_OFFSET(0x1CF76AC0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMOBILECAPTCHA_B__24_0_OFFSET UNITYSDK_OFFSET(0x1CF765F0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_0_OFFSET UNITYSDK_OFFSET(0x1CF75810)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_1_OFFSET UNITYSDK_OFFSET(0x1CF75850)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_2_OFFSET UNITYSDK_OFFSET(0x1CF75890)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_3_OFFSET UNITYSDK_OFFSET(0x1CF75A20)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1CF75E90)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_0_OFFSET UNITYSDK_OFFSET(0x1CF75F30)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_1_OFFSET UNITYSDK_OFFSET(0x1CF75F70)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_2_OFFSET UNITYSDK_OFFSET(0x1CF75FB0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_3_OFFSET UNITYSDK_OFFSET(0x1CF75FD0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAIL_B__17_0_OFFSET UNITYSDK_OFFSET(0x1CF76270)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafePhoneManager_TypeDefinitionIndex = 9370;

	class SafePhoneManager : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnBindSafePhoneSuccess; // 0x10
		::MiHoYo::SDK::AccountModel* accountModel; // 0x18
		::System::String* phoneNumber; // 0x20
		::System::Action_2<::System::Int32, ::System::String*>* OnBindSafePhoneFail; // 0x28
		::System::Action_1<::System::String*>* m_callbackPluginUIGetCaptcha; // 0x30
		::System::Action_1<::System::String*>* m_callbackPluginUIGetMailCaptcha; // 0x38
		::System::String* ticket; // 0x40
		::System::Action* OnClose; // 0x48
		static ::MiHoYo::SDK::Win::SafePhoneManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::SafePhoneManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "SafePhoneManager")->GetStaticField(0x26C40);
		}

		// static const ::System::String* actionType; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CCTOR_OFFSET))();
		}

		::System::Boolean CheckSafeMobile(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CHECKSAFEMOBILE_OFFSET))(this, a1);
		}

		::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOW_OFFSET))(this, a1);
		}

		::System::Void HideBindMobilePluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEBINDMOBILEPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowBindMobilePluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILEPLUGINUI_OFFSET))(this);
		}

		::System::Void ShowBindMobile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILE_OFFSET))(this);
		}

		::System::Void HideVerifyMailPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEVERIFYMAILPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowVerifyMailPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAILPLUGINUI_OFFSET))(this);
		}

		::System::Void ShowVerifyMail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAIL_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CLOSE_OFFSET))(this);
		}

		::System::Void OnBindMobile(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONBINDMOBILE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetBindResult(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETBINDRESULT_OFFSET))(this, a1);
		}

		::System::Void RequestBindMobile(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTBINDMOBILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGetMobileCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMOBILECODE_OFFSET))(this, a1);
		}

		::System::Void BindMobileTicket(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_BINDMOBILETICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestMobileCaptcha(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMOBILECAPTCHA_OFFSET))(this, a1);
		}

		::System::Void ResetTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_RESETTICKET_OFFSET))(this);
		}

		::System::Void OnGetMailCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMAILCODE_OFFSET))(this, a1);
		}

		::System::Void RequestMailCaptcha(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMAILCAPTCHA_OFFSET))(this, a1);
		}

		::System::Void OnVerifyMail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAIL_OFFSET))(this, a1);
		}

		::System::Void HandleTicketInvalid(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HANDLETICKETINVALID_OFFSET))(this, a1, a2);
		}

		::System::Void OnVerifyMailByCode(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAILBYCODE_OFFSET))(this, a1);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMobile_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILE_B__13_0_OFFSET))(this);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowVerifyMail_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAIL_B__17_0_OFFSET))(this);
		}

		::System::Void _OnGetMobileCode_b__22_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMOBILECODE_B__22_0_OFFSET))(this, a1);
		}

		::System::Void _RequestMobileCaptcha_b__24_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMOBILECAPTCHA_B__24_0_OFFSET))(this, a1);
		}

		::System::Void _OnGetMailCode_b__26_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMAILCODE_B__26_0_OFFSET))(this, a1);
		}

		::System::Void _RequestMailCaptcha_b__27_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMAILCAPTCHA_B__27_0_OFFSET))(this, a1);
		}

	};
}
