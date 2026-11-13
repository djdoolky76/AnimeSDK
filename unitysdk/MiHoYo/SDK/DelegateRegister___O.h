#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class BiliBiliDelegate_GetProcessWndDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKInitDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKLoginDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKLogoutDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKPayDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKStartHeartbeatDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKUnInitDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_AsbPathDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDiskTypeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_IsEditorDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LoadFileDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LogDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_ResourcePathDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_SecuritySetLoginResultDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_WebEventDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_WebViewAnimationEnable; }
namespace MiHoYo::SDK { class SDKDelegate_WebViewJoypadCloseEnable; }
namespace MiHoYo::SDK { class TelemetryDelegate_InitDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_ReportToDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_ReportToKibanaDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_SetConfigDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StartDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StartKibanaDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StopDataUploadDelegate; }
namespace MiHoYo::SDK { class TelemetryDelegate_StopKibanaDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetGlobalUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_InitDelegate; }
namespace MiHoYo::SDK { class WebDelegate_PreLoadDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetGameVolumeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetGlobalUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebVolumeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_AuthTokenDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckEntitlementsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_CheckoutDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ConsumeDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_InitDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_LoginDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_ProductsDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_QueryDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___O_TypeDefinitionIndex = 47302;

	class DelegateRegister___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate** StaticGet__12___SetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x197C0);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate** StaticGet__41___ReportToKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToKibanaDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x197C8);
		}

		static ::MiHoYo::SDK::BiliBiliDelegate_SDKPayDelegate** StaticGet__30___SDKPay()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKPayDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x197D0);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate** StaticGet__38___ReportToDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_ReportToDataUploadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x197D8);
		}

		static ::MiHoYo::SDK::SDKDelegate_LogDelegate** StaticGet__4___OnMiHoYoSDKLogNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_LogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x197E0);
		}

		static ::MiHoYo::SDK::SDKDelegate_WebEventDelegate** StaticGet__6___OnGetWebEvent()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebEventDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x197E8);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate** StaticGet__39___StartKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartKibanaDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x197F0);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate** StaticGet__37___StopDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopDataUploadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x197F8);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate** StaticGet__35___SetConfig()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_SetConfigDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19800);
		}

		static ::MiHoYo::SDK::BiliBiliDelegate_SDKUnInitDelegate** StaticGet__28___SDKUnInit()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKUnInitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19808);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate** StaticGet__9___GetDiskType()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19810);
		}

		static ::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate** StaticGet__5___SetLoginResult()
		{
			return (::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19818);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate** StaticGet__36___StartDataUpload()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StartDataUploadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19820);
		}

		static ::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate** StaticGet__13___GetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19828);
		}

		static ::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate** StaticGet__1___OnGetResourcePath()
		{
			return (::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19830);
		}

		static ::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate** StaticGet__16___SetGameVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19838);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate** StaticGet__17___Init()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_InitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19840);
		}

		static ::MiHoYo::SDK::SDKDelegate_AsbPathDelegate** StaticGet__0___OnGetAsbPath()
		{
			return (::MiHoYo::SDK::SDKDelegate_AsbPathDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19848);
		}

		static ::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate** StaticGet__14___GetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19850);
		}

		static ::MiHoYo::SDK::BiliBiliDelegate_GetProcessWndDelegate** StaticGet__33___GetProcessWnd()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_GetProcessWndDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19858);
		}

		static ::MiHoYo::SDK::SDKDelegate_LoadFileDelegate** StaticGet__3___LoadJsonFile()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadFileDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19860);
		}

		static ::MiHoYo::SDK::BiliBiliDelegate_SDKLogoutDelegate** StaticGet__32___SDKLogout()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKLogoutDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19868);
		}

		static ::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate** StaticGet__15___SetWebVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19870);
		}

		static ::MiHoYo::SDK::BiliBiliDelegate_SDKInitDelegate** StaticGet__27___SDKInit()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKInitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19878);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate** StaticGet__25___RegisterGameOverlayCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterGameOverlayCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19880);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate** StaticGet__40___StopKibana()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_StopKibanaDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19888);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate** StaticGet__22___CheckEntitlements()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckEntitlementsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19890);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate** StaticGet__19___AuthToken()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_AuthTokenDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19898);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate** StaticGet__24___RegisterMicroTxnCallback()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_RegisterMicroTxnCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198A0);
		}

		static ::MiHoYo::SDK::BiliBiliDelegate_SDKLoginDelegate** StaticGet__29___SDKLogin()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKLoginDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198A8);
		}

		static ::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable** StaticGet__7___SetAnimationEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198B0);
		}

		static ::MiHoYo::SDK::TelemetryDelegate_InitDelegate** StaticGet__34___Init()
		{
			return (::MiHoYo::SDK::TelemetryDelegate_InitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198B8);
		}

		static ::MiHoYo::SDK::WebDelegate_InitDelegate** StaticGet__10___Init()
		{
			return (::MiHoYo::SDK::WebDelegate_InitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198C0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate** StaticGet__18___Login()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_LoginDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198C8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate** StaticGet__26___Query()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_QueryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198D0);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate** StaticGet__20___Products()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ProductsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198D8);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate** StaticGet__21___Checkout()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_CheckoutDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198E0);
		}

		static ::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable** StaticGet__8___SetJoypadCloseEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198E8);
		}

		static ::MiHoYo::SDK::WebDelegate_PreLoadDelegate** StaticGet__11___PreLoad()
		{
			return (::MiHoYo::SDK::WebDelegate_PreLoadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198F0);
		}

		static ::MiHoYo::SDK::BiliBiliDelegate_SDKStartHeartbeatDelegate** StaticGet__31___SDKStartHeartbeat()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKStartHeartbeatDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x198F8);
		}

		static ::MiHoYo::SDK::SDKDelegate_IsEditorDelegate** StaticGet__2___IsEditor()
		{
			return (::MiHoYo::SDK::SDKDelegate_IsEditorDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19900);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate** StaticGet__23___Consume()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_ConsumeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x19908);
		}

	};
}
