#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
namespace MiHoYo::SDK::PluginUI { class HoYoSDKPhoneLogin; }
namespace System { class String; }

#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xB67DC10)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB67DB60)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONACCOUNTLOGIN_OFFSET UNITYSDK_OFFSET(0xB67E590)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0xB67E4C0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0xB67E220)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0xB67EBF0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONENTERGAME_OFFSET UNITYSDK_OFFSET(0xB67EA00)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONGETVERIFYCODECALLBACK_OFFSET UNITYSDK_OFFSET(0xB67E6F0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONGETVERIFYCODERESULT_OFFSET UNITYSDK_OFFSET(0xB67E830)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONQRCODELOGIN_OFFSET UNITYSDK_OFFSET(0xB67E5D0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0xB67DC90)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONTAPTAPLOGIN_OFFSET UNITYSDK_OFFSET(0xB67EBB0)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONTOGGLECLICKED_OFFSET UNITYSDK_OFFSET(0xB67E610)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0xB67EB30)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONUSERPRIVACY_OFFSET UNITYSDK_OFFSET(0xB67EB70)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_SHOW_OFFSET UNITYSDK_OFFSET(0xB67DD50)
#define MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN__SHOW_B__4_0_OFFSET UNITYSDK_OFFSET(0xB67EE70)

namespace MiHoYo::SDK::PluginUI
{
	inline static constexpr unsigned int HoYoSDKPhoneLogin_TypeDefinitionIndex = 47788;

	class HoYoSDKPhoneLogin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
	{
	public:
		static ::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin**)UnitySDK::FromName("MiHoYo.SDK.PluginUI", "HoYoSDKPhoneLogin")->GetStaticField(0x28D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin* Instance()
		{
			return ((::MiHoYo::SDK::PluginUI::HoYoSDKPhoneLogin*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_INSTANCE_OFFSET))();
		}

		::System::Void OnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONSHOW_OFFSET))(this);
		}

		::System::Void OnClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONCLOSE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_SHOW_OFFSET))(this);
		}

		::System::Void OnCloseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONCLOSECALLBACK_OFFSET))(this);
		}

		::System::Void OnAccountLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONACCOUNTLOGIN_OFFSET))(this);
		}

		::System::Void OnQRCodeLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONQRCODELOGIN_OFFSET))(this);
		}

		::System::Void OnToggleClicked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONTOGGLECLICKED_OFFSET))(this, a1);
		}

		::System::Void OnGetVerifyCodeCallback(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONGETVERIFYCODECALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnGetVerifyCodeResult(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONGETVERIFYCODERESULT_OFFSET))(this, a1);
		}

		::System::Void OnEnterGame(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONENTERGAME_OFFSET))(this, a1, a2);
		}

		::System::Void OnUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void OnUserPrivacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONUSERPRIVACY_OFFSET))(this);
		}

		::System::Void OnTapTapLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONTAPTAPLOGIN_OFFSET))(this);
		}

		::System::Void OnElementStatusChanged(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN_ONELEMENTSTATUSCHANGED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _Show_b__4_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PLUGINUI_HOYOSDKPHONELOGIN__SHOW_B__4_0_OFFSET))(this, a1);
		}

	};
}
