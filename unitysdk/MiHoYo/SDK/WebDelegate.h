#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class WebDelegate_CallJSFunctionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CallJSPublishFunctionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ClearBGImgDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ClearCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CloseDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GeetestLoadURLDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetGlobalUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetWebCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideBGDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideNavigationBarDelegate; }
namespace MiHoYo::SDK { class WebDelegate_InitDelegate; }
namespace MiHoYo::SDK { class WebDelegate_LoadDelegate; }
namespace MiHoYo::SDK { class WebDelegate_OnUniWebViewMessageDelegate; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewBeforeNavigationMessageDelegate; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewBeforePageHide; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewInputEnableStatus; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewNativeReady; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewPageClose; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewPageError; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewPageFinish; }
namespace MiHoYo::SDK { class WebDelegate_OnWebViewPopupBrowserCreate; }
namespace MiHoYo::SDK { class WebDelegate_PreLoadDelegate; }
namespace MiHoYo::SDK { class WebDelegate_QueryIsOffScreenRenderingDelegate; }
namespace MiHoYo::SDK { class WebDelegate_RegisterGeetestViewDelegate; }
namespace MiHoYo::SDK { class WebDelegate_RegisterJSPostMessageDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetAdjustDPIEnableDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetBackButtonActionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetBackButtonEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetBouncesEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetCurrentWebviewAnimationEnableDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetForwardButtonEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetFrameDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetGameVolumeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetGlobalUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetNewWindowTypeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetUrlQueryDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebAnimationEnableDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebFeatureDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebLinearDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebVolumeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetZoomEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowDevToolsDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowGeetestV4WebDelegate; }
namespace MiHoYo::SDK { class WebDelegate_UpdateJoypadControlDelegate; }

#define MIHOYO_SDK_WEBDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0206F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_TypeDefinitionIndex = 7809;

	class WebDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::WebDelegate_UpdateJoypadControlDelegate** StaticGet_UpdateJoypadControl()
		{
			return (::MiHoYo::SDK::WebDelegate_UpdateJoypadControlDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD2E0);
		}

		static ::MiHoYo::SDK::WebDelegate_QueryIsOffScreenRenderingDelegate** StaticGet_QueryIsOffScreenRendering()
		{
			return (::MiHoYo::SDK::WebDelegate_QueryIsOffScreenRenderingDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD2E8);
		}

		static ::MiHoYo::SDK::WebDelegate_GetWebCookiesDelegate** StaticGet_GetWebCookies()
		{
			return (::MiHoYo::SDK::WebDelegate_GetWebCookiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD2F0);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageError** StaticGet_OnPageError()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageError**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD2F8);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageFinish** StaticGet_OnPageFinish()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageFinish**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD300);
		}

		static ::MiHoYo::SDK::WebDelegate_OnUniWebViewMessageDelegate** StaticGet_OnUniWebViewMessage()
		{
			return (::MiHoYo::SDK::WebDelegate_OnUniWebViewMessageDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD308);
		}

		static ::MiHoYo::SDK::WebDelegate_SetBackButtonActionDelegate** StaticGet_SetBackButtonAction()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBackButtonActionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD310);
		}

		static ::MiHoYo::SDK::WebDelegate_SetNewWindowTypeDelegate** StaticGet_SetNewWindowType()
		{
			return (::MiHoYo::SDK::WebDelegate_SetNewWindowTypeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD318);
		}

		static ::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate** StaticGet_GetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetGlobalUserAgentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD320);
		}

		static ::MiHoYo::SDK::WebDelegate_ClearCookiesDelegate** StaticGet_ClearCookies()
		{
			return (::MiHoYo::SDK::WebDelegate_ClearCookiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD328);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewBeforeNavigationMessageDelegate** StaticGet_OnBeforeNavigationMessage()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewBeforeNavigationMessageDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD330);
		}

		static ::MiHoYo::SDK::WebDelegate_PreLoadDelegate** StaticGet_PreLoad()
		{
			return (::MiHoYo::SDK::WebDelegate_PreLoadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD338);
		}

		static ::MiHoYo::SDK::WebDelegate_CallJSPublishFunctionDelegate** StaticGet_CallJSPublishFunction()
		{
			return (::MiHoYo::SDK::WebDelegate_CallJSPublishFunctionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD340);
		}

		static ::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate** StaticGet_SetGlobalUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGlobalUserAgentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD348);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewPopupBrowserCreate** StaticGet_OnPopupBrowserCreate()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPopupBrowserCreate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD350);
		}

		static ::MiHoYo::SDK::WebDelegate_InitDelegate** StaticGet_Init()
		{
			return (::MiHoYo::SDK::WebDelegate_InitDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD358);
		}

		static ::MiHoYo::SDK::WebDelegate_RegisterGeetestViewDelegate** StaticGet_RegisterGeetestView()
		{
			return (::MiHoYo::SDK::WebDelegate_RegisterGeetestViewDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD360);
		}

		static ::MiHoYo::SDK::WebDelegate_SetFrameDelegate** StaticGet_SetFrame()
		{
			return (::MiHoYo::SDK::WebDelegate_SetFrameDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD368);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewInputEnableStatus** StaticGet_OnInputEnableStatus()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewInputEnableStatus**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD370);
		}

		static ::MiHoYo::SDK::WebDelegate_SetWebLinearDelegate** StaticGet_SetWebLinear()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebLinearDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD378);
		}

		static ::MiHoYo::SDK::WebDelegate_ShowDelegate** StaticGet_Show()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD380);
		}

		static ::MiHoYo::SDK::WebDelegate_SetWebFeatureDelegate** StaticGet_SetWebFeature()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebFeatureDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD388);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewBeforePageHide** StaticGet_OnPageBeforeHide()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewBeforePageHide**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD390);
		}

		static ::MiHoYo::SDK::WebDelegate_SetBackButtonEnabledDelegate** StaticGet_SetBackButtonEnabled()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBackButtonEnabledDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD398);
		}

		static ::MiHoYo::SDK::WebDelegate_SetForwardButtonEnabledDelegate** StaticGet_SetForwardButtonEnabled()
		{
			return (::MiHoYo::SDK::WebDelegate_SetForwardButtonEnabledDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3A0);
		}

		static ::MiHoYo::SDK::WebDelegate_LoadDelegate** StaticGet_Load()
		{
			return (::MiHoYo::SDK::WebDelegate_LoadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3A8);
		}

		static ::MiHoYo::SDK::WebDelegate_CloseDelegate** StaticGet_Close()
		{
			return (::MiHoYo::SDK::WebDelegate_CloseDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3B0);
		}

		static ::MiHoYo::SDK::WebDelegate_SetCurrentWebviewAnimationEnableDelegate** StaticGet_SetCurrentWebviewAnimationEnable()
		{
			return (::MiHoYo::SDK::WebDelegate_SetCurrentWebviewAnimationEnableDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3B8);
		}

		static ::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate** StaticGet_GetUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_GetUserAgentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3C0);
		}

		static ::MiHoYo::SDK::WebDelegate_SetUrlQueryDelegate** StaticGet_SetWebUrlQuery()
		{
			return (::MiHoYo::SDK::WebDelegate_SetUrlQueryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3C8);
		}

		static ::MiHoYo::SDK::WebDelegate_GeetestLoadURLDelegate** StaticGet_GeetestLoadURL()
		{
			return (::MiHoYo::SDK::WebDelegate_GeetestLoadURLDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3D0);
		}

		static ::MiHoYo::SDK::WebDelegate_ShowGeetestV4WebDelegate** StaticGet_ShowGeetestV4Web()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowGeetestV4WebDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3D8);
		}

		static ::MiHoYo::SDK::WebDelegate_SetZoomEnabledDelegate** StaticGet_SetZoomEnabled()
		{
			return (::MiHoYo::SDK::WebDelegate_SetZoomEnabledDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3E0);
		}

		static ::MiHoYo::SDK::WebDelegate_SetWebCookiesDelegate** StaticGet_SetWebCookies()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebCookiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3E8);
		}

		static ::MiHoYo::SDK::WebDelegate_CallJSFunctionDelegate** StaticGet_CallJSFunction()
		{
			return (::MiHoYo::SDK::WebDelegate_CallJSFunctionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3F0);
		}

		static ::MiHoYo::SDK::WebDelegate_HideBGDelegate** StaticGet_HideBG()
		{
			return (::MiHoYo::SDK::WebDelegate_HideBGDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD3F8);
		}

		static ::MiHoYo::SDK::WebDelegate_SetBouncesEnabledDelegate** StaticGet_SetBouncesEnabled()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBouncesEnabledDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD400);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageClose** StaticGet_OnPageClose()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageClose**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD408);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewNativeReady** StaticGet_OnNativeReady()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewNativeReady**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD410);
		}

		static ::MiHoYo::SDK::WebDelegate_ClearBGImgDelegate** StaticGet_ClearBGImg()
		{
			return (::MiHoYo::SDK::WebDelegate_ClearBGImgDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD418);
		}

		static ::MiHoYo::SDK::WebDelegate_HideDelegate** StaticGet_Hide()
		{
			return (::MiHoYo::SDK::WebDelegate_HideDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD420);
		}

		static ::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate** StaticGet_SetWebVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebVolumeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD428);
		}

		static ::MiHoYo::SDK::WebDelegate_SetCookiesDelegate** StaticGet_SetCookies()
		{
			return (::MiHoYo::SDK::WebDelegate_SetCookiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD430);
		}

		static ::MiHoYo::SDK::WebDelegate_SetAdjustDPIEnableDelegate** StaticGet_SetAdjustDPIEnable()
		{
			return (::MiHoYo::SDK::WebDelegate_SetAdjustDPIEnableDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD438);
		}

		static ::MiHoYo::SDK::WebDelegate_SetWebAnimationEnableDelegate** StaticGet_SetWebAnimationEnable()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebAnimationEnableDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD440);
		}

		static ::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate** StaticGet_SetGameVolume()
		{
			return (::MiHoYo::SDK::WebDelegate_SetGameVolumeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD448);
		}

		static ::MiHoYo::SDK::WebDelegate_SetUserAgentDelegate** StaticGet_SetUserAgent()
		{
			return (::MiHoYo::SDK::WebDelegate_SetUserAgentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD450);
		}

		static ::MiHoYo::SDK::WebDelegate_HideNavigationBarDelegate** StaticGet_HideNavigationBar()
		{
			return (::MiHoYo::SDK::WebDelegate_HideNavigationBarDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD458);
		}

		static ::MiHoYo::SDK::WebDelegate_RegisterJSPostMessageDelegate** StaticGet_RegisterJSPostMessage()
		{
			return (::MiHoYo::SDK::WebDelegate_RegisterJSPostMessageDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD460);
		}

		static ::MiHoYo::SDK::WebDelegate_ShowDevToolsDelegate** StaticGet_ShowDevTools()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowDevToolsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WebDelegate")->GetStaticField(0xD468);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CTOR_OFFSET))(this);
		}

	};
}
