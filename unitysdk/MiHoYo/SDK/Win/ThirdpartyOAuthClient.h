#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Win/AuthProcess.h"
#include "unitysdk/MiHoYo/SDK/Win/OAuthType.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class ThirdpartyOAuthClient_OnAuthCompleteDelegate; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Net { class HttpListener; }
namespace UnityEngine { class Coroutine; }

#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ADD_ONAUTHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CF81BE0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF81CE0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ENTERWAITINGSTAGE_OFFSET UNITYSDK_OFFSET(0x1CF82A00)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_GETRANDOMUNUSEDPORT_OFFSET UNITYSDK_OFFSET(0x1CF83080)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_HIDETHIRDPARTYOAUTH_OFFSET UNITYSDK_OFFSET(0x1CF82AD0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHFAILED_OFFSET UNITYSDK_OFFSET(0x1CF84890)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHSUCCEED_OFFSET UNITYSDK_OFFSET(0x1CF85130)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONCONTEXTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1CF85430)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONWAITINGTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1CF84000)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_REMOVE_ONAUTHCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1CF81C60)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_SHOWLOGINPAGE_OFFSET UNITYSDK_OFFSET(0x1CF81E60)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF82430)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTAPPLEOAUTH_OFFSET UNITYSDK_OFFSET(0x1CF81D30)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTCALLBACKLISTENER_OFFSET UNITYSDK_OFFSET(0x1CF82CE0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTFACEBOOKOAUTH_OFFSET UNITYSDK_OFFSET(0x1CF821A0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTGOOGLEOAUTH_OFFSET UNITYSDK_OFFSET(0x1CF82070)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTTIMEOUTMONITOR_OFFSET UNITYSDK_OFFSET(0x1CF831A0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTTWITTEROAUTH_OFFSET UNITYSDK_OFFSET(0x1CF821B0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOPCALLBACKLISTENER_OFFSET UNITYSDK_OFFSET(0x1CF823B0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOPTIMEOUTMONITOR_OFFSET UNITYSDK_OFFSET(0x1CF822F0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOP_OFFSET UNITYSDK_OFFSET(0x1CF821C0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_UPDATEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF83B00)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWLOGINPAGE_B__22_0_OFFSET UNITYSDK_OFFSET(0x1CF85CD0)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWLOGINPAGE_B__22_1_OFFSET UNITYSDK_OFFSET(0x1CF85F30)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWTHIRDPARTYOAUTHPLUGINUI_B__23_0_OFFSET UNITYSDK_OFFSET(0x1CF85F40)
#define MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWTHIRDPARTYOAUTHPLUGINUI_B__23_1_OFFSET UNITYSDK_OFFSET(0x1CF85F50)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int ThirdpartyOAuthClient_TypeDefinitionIndex = 9271;

	class ThirdpartyOAuthClient : public ::System::Object
	{
	public:
		::System::Net::HttpListener* httpListener; // 0x10
		::System::String* authPageUrl; // 0x18
		::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate* OnAuthComplete; // 0x20
		::System::String* authParameters; // 0x28
		::UnityEngine::Coroutine* timeoutMonitor; // 0x30
		::System::String* callbackUri; // 0x38
		::MiHoYo::SDK::ReportType reportType; // 0x40
		static ::MiHoYo::SDK::Win::OAuthType* StaticGet_AuthType()
		{
			return (::MiHoYo::SDK::Win::OAuthType*)UnitySDK::FromName("MiHoYo.SDK.Win", "ThirdpartyOAuthClient")->GetStaticField(0x8760);
		}

		// static const ::System::Object TIMEOUT_SEC; // 0x0
		// static const ::System::String* GOOGLE_AUTH_SCOPE; // 0x0
		// static const ::System::String* GOOGLE_RESP_TYPE; // 0x0
		// static const ::System::String* APPLE_RESP_TYPE; // 0x0
		// static const ::System::String* APPLE_RESP_MODE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_CTOR_OFFSET))(this);
		}

		::System::Void add_OnAuthComplete(::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ADD_ONAUTHCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void remove_OnAuthComplete(::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::ThirdpartyOAuthClient_OnAuthCompleteDelegate*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_REMOVE_ONAUTHCOMPLETE_OFFSET))(this, a1);
		}

		::System::Void StartAppleOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTAPPLEOAUTH_OFFSET))(this);
		}

		::System::Void StartGoogleOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTGOOGLEOAUTH_OFFSET))(this);
		}

		::System::Void StartFacebookOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTFACEBOOKOAUTH_OFFSET))(this);
		}

		::System::Void StartTwitterOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTTWITTEROAUTH_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOP_OFFSET))(this);
		}

		::System::Void ShowLoginPage(::MiHoYo::SDK::Win::OAuthType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::OAuthType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_SHOWLOGINPAGE_OFFSET))(this, a1);
		}

		::System::Boolean ShowThirdPartyOAuthPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_SHOWTHIRDPARTYOAUTHPLUGINUI_OFFSET))(this);
		}

		::System::Void HideThirdPartyOAuth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_HIDETHIRDPARTYOAUTH_OFFSET))(this);
		}

		::System::Void StartCallbackListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTCALLBACKLISTENER_OFFSET))(this);
		}

		::System::Void StopCallbackListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOPCALLBACKLISTENER_OFFSET))(this);
		}

		::System::Void StartTimeoutMonitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STARTTIMEOUTMONITOR_OFFSET))(this);
		}

		::System::Void StopTimeoutMonitor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_STOPTIMEOUTMONITOR_OFFSET))(this);
		}

		::System::Void EnterWaitingStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ENTERWAITINGSTAGE_OFFSET))(this);
		}

		::System::Void OnWaitingTimeout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONWAITINGTIMEOUT_OFFSET))(this);
		}

		::System::Void UpdatePluginUI(::MiHoYo::SDK::Win::AuthProcess a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::AuthProcess))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_UPDATEPLUGINUI_OFFSET))(this, a1);
		}

		::System::Void OnAuthFailed(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHFAILED_OFFSET))(this, a1);
		}

		::System::Void OnAuthSucceed(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONAUTHSUCCEED_OFFSET))(this, a1, a2);
		}

		::System::Void OnContextCallback(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_ONCONTEXTCALLBACK_OFFSET))(this, a1);
		}

		::System::Int32 GetRandomUnusedPort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT_GETRANDOMUNUSEDPORT_OFFSET))(this);
		}

		::System::Void _ShowLoginPage_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWLOGINPAGE_B__22_0_OFFSET))(this);
		}

		::System::Void _ShowLoginPage_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWLOGINPAGE_B__22_1_OFFSET))(this);
		}

		::System::Void _ShowThirdPartyOAuthPluginUI_b__23_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWTHIRDPARTYOAUTHPLUGINUI_B__23_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowThirdPartyOAuthPluginUI_b__23_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_THIRDPARTYOAUTHCLIENT__SHOWTHIRDPARTYOAUTHPLUGINUI_B__23_1_OFFSET))(this, a1, a2);
		}

	};
}
