#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/HoYoChannelCallbackType.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WeLing/SDK/GyroType.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
namespace MiHoYo::SDK { class GameRoleModel; }
namespace MiHoYo::SDK { class GeetestView; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class MmtManager_GeetestModel; }
namespace MiHoYo::SDK { class SDKDelegate_DownloadDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GeNetworkAdapterDescriptionDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDiskFreeSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDriveTotalFreeSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDriveTotalSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetMacAddressDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetNetworkAdapterListDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetNetworkTypeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetRamRemainDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_InputFieldDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LoadAssetDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_NotificationDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnBoxConfigReadyDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGameControlReceiveDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGameRoleUpdateDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGyroEventDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGyroscopeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_SetAPMAgeGateDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_ShowTextDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_UnLoadAssetDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_UseRuntimeFontDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CallJSFunctionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CallJSPublishFunctionDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ClearBGImgDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ClearCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_CloseDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GeetestLoadURLDelegate; }
namespace MiHoYo::SDK { class WebDelegate_GetWebCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideBGDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideDelegate; }
namespace MiHoYo::SDK { class WebDelegate_HideNavigationBarDelegate; }
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
namespace MiHoYo::SDK { class WebDelegate_SetNewWindowTypeDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetUrlQueryDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetUserAgentDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebCookiesDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebFeatureDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetWebLinearDelegate; }
namespace MiHoYo::SDK { class WebDelegate_SetZoomEnabledDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowDevToolsDelegate; }
namespace MiHoYo::SDK { class WebDelegate_ShowGeetestV4WebDelegate; }
namespace MiHoYo::SDK { class WebDelegate_UpdateJoypadControlDelegate; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelDelegate_UnregisterCallbackDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Object; }
namespace UnityEngine::UI { class InputField; }

#define MIHOYO_SDK_DELEGATEREGISTER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB0E410)
#define MIHOYO_SDK_DELEGATEREGISTER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0E440)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERAPM_B__7_0_OFFSET UNITYSDK_OFFSET(0x1AB13540)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERAPM_B__7_1_OFFSET UNITYSDK_OFFSET(0x1AB137C0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERHOYOCHANNELS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AB12C10)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x1AB0F960)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_10_OFFSET UNITYSDK_OFFSET(0x1AB10950)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_11_OFFSET UNITYSDK_OFFSET(0x1AB10A10)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_12_OFFSET UNITYSDK_OFFSET(0x1AB10AD0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_13_OFFSET UNITYSDK_OFFSET(0x1AB10AF0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_14_OFFSET UNITYSDK_OFFSET(0x1AB10BD0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_15_OFFSET UNITYSDK_OFFSET(0x1AB10C90)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_16_OFFSET UNITYSDK_OFFSET(0x1AB10D50)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_17_OFFSET UNITYSDK_OFFSET(0x1AB10E10)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_18_OFFSET UNITYSDK_OFFSET(0x1AB10F70)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_19_OFFSET UNITYSDK_OFFSET(0x1AB11040)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_1_OFFSET UNITYSDK_OFFSET(0x1AB0FB10)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_20_OFFSET UNITYSDK_OFFSET(0x1AB11100)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_21_OFFSET UNITYSDK_OFFSET(0x1AB111B0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_22_OFFSET UNITYSDK_OFFSET(0x1AB11270)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_23_OFFSET UNITYSDK_OFFSET(0x1AB11320)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_24_OFFSET UNITYSDK_OFFSET(0x1AB113E0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_25_OFFSET UNITYSDK_OFFSET(0x1AB11510)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_26_OFFSET UNITYSDK_OFFSET(0x1AB11640)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_27_OFFSET UNITYSDK_OFFSET(0x1AB11700)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_28_OFFSET UNITYSDK_OFFSET(0x1AB117E0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_29_OFFSET UNITYSDK_OFFSET(0x1AB118C0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_2_OFFSET UNITYSDK_OFFSET(0x1AB0FCC0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_30_OFFSET UNITYSDK_OFFSET(0x1AB11970)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_31_OFFSET UNITYSDK_OFFSET(0x1AB11F30)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_32_OFFSET UNITYSDK_OFFSET(0x1AB122A0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_33_OFFSET UNITYSDK_OFFSET(0x1AB122D0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_34_OFFSET UNITYSDK_OFFSET(0x1AB12320)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_35_OFFSET UNITYSDK_OFFSET(0x1AB12350)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_36_OFFSET UNITYSDK_OFFSET(0x1AB12380)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_37_OFFSET UNITYSDK_OFFSET(0x1AB123B0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_38_OFFSET UNITYSDK_OFFSET(0x1AB12470)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_39_OFFSET UNITYSDK_OFFSET(0x1AB12530)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_3_OFFSET UNITYSDK_OFFSET(0x1AB0FE70)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_40_OFFSET UNITYSDK_OFFSET(0x1AB12630)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_41_OFFSET UNITYSDK_OFFSET(0x1AB12670)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_4_OFFSET UNITYSDK_OFFSET(0x1AB10020)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_5_OFFSET UNITYSDK_OFFSET(0x1AB101D0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_6_OFFSET UNITYSDK_OFFSET(0x1AB10380)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_7_OFFSET UNITYSDK_OFFSET(0x1AB10530)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_8_OFFSET UNITYSDK_OFFSET(0x1AB106E0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_9_OFFSET UNITYSDK_OFFSET(0x1AB10890)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_0_OFFSET UNITYSDK_OFFSET(0x1AB0E450)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_10_OFFSET UNITYSDK_OFFSET(0x1AB0EB00)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_11_OFFSET UNITYSDK_OFFSET(0x1AB0EEF0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_12_OFFSET UNITYSDK_OFFSET(0x1AB0EF80)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_13_OFFSET UNITYSDK_OFFSET(0x1AB0F3A0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_14_OFFSET UNITYSDK_OFFSET(0x1AB0F650)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_15_OFFSET UNITYSDK_OFFSET(0x1AB0F6F0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_16_OFFSET UNITYSDK_OFFSET(0x1AB0F810)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_17_OFFSET UNITYSDK_OFFSET(0x1AB0F8A0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_18_OFFSET UNITYSDK_OFFSET(0x1AB0F900)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_1_OFFSET UNITYSDK_OFFSET(0x1AB0E4B0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_2_OFFSET UNITYSDK_OFFSET(0x1AB0E510)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_3_OFFSET UNITYSDK_OFFSET(0x1AB0E570)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_4_OFFSET UNITYSDK_OFFSET(0x1AB0E620)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_5_OFFSET UNITYSDK_OFFSET(0x1AB0E680)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_6_OFFSET UNITYSDK_OFFSET(0x1AB0E6C0)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_7_OFFSET UNITYSDK_OFFSET(0x1AB0E720)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_8_OFFSET UNITYSDK_OFFSET(0x1AB0E800)
#define MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_9_OFFSET UNITYSDK_OFFSET(0x1AB0E8E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int DelegateRegister___c_TypeDefinitionIndex = 47303;

	class DelegateRegister___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate** StaticGet___9__0_3()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195B0);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnGameControlReceiveDelegate** StaticGet___9__0_16()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGameControlReceiveDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195B8);
		}

		static ::MiHoYo::SDK::WebDelegate_HideDelegate** StaticGet___9__1_21()
		{
			return (::MiHoYo::SDK::WebDelegate_HideDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195C0);
		}

		static ::MiHoYo::SDK::WebDelegate_ShowGeetestV4WebDelegate** StaticGet___9__1_41()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowGeetestV4WebDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195C8);
		}

		static ::MiHoYo::SDK::WebDelegate_SetBouncesEnabledDelegate** StaticGet___9__1_19()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBouncesEnabledDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195D0);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnGameRoleUpdateDelegate** StaticGet___9__0_17()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGameRoleUpdateDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195D8);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewBeforeNavigationMessageDelegate** StaticGet___9__1_7()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewBeforeNavigationMessageDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195E0);
		}

		static ::MiHoYo::SDK::WebDelegate_SetBackButtonEnabledDelegate** StaticGet___9__1_14()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBackButtonEnabledDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195E8);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDiskFreeSpaceDelegate** StaticGet___9__0_6()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDiskFreeSpaceDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195F0);
		}

		static ::MiHoYo::SDK::SDKDelegate_ShowTextDelegate** StaticGet___9__0_18()
		{
			return (::MiHoYo::SDK::SDKDelegate_ShowTextDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x195F8);
		}

		static ::MiHoYo::SDK::WebDelegate_ClearBGImgDelegate** StaticGet___9__1_29()
		{
			return (::MiHoYo::SDK::WebDelegate_ClearBGImgDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19600);
		}

		static ::MiHoYo::SDK::SDKDelegate_NotificationDelegate** StaticGet___9__0_1()
		{
			return (::MiHoYo::SDK::SDKDelegate_NotificationDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19608);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetNetworkTypeDelegate** StaticGet___9__0_13()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetNetworkTypeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19610);
		}

		static ::MiHoYo::SDK::WebDelegate_SetUserAgentDelegate** StaticGet___9__1_12()
		{
			return (::MiHoYo::SDK::WebDelegate_SetUserAgentDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19618);
		}

		static ::MiHoYo::SDK::SDKDelegate_UnLoadAssetDelegate** StaticGet___9__0_4()
		{
			return (::MiHoYo::SDK::SDKDelegate_UnLoadAssetDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19620);
		}

		static ::MiHoYo::SDK::WebDelegate_SetForwardButtonEnabledDelegate** StaticGet___9__1_15()
		{
			return (::MiHoYo::SDK::WebDelegate_SetForwardButtonEnabledDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19628);
		}

		static ::MiHoYo::SDK::WebDelegate_OnUniWebViewMessageDelegate** StaticGet___9__1_0()
		{
			return (::MiHoYo::SDK::WebDelegate_OnUniWebViewMessageDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19630);
		}

		static ::MiHoYo::SDK::SDKDelegate_SetAPMAgeGateDelegate** StaticGet___9__7_0()
		{
			return (::MiHoYo::SDK::SDKDelegate_SetAPMAgeGateDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19638);
		}

		static ::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate** StaticGet___9__2_0()
		{
			return (::MiHoYo::SDK::PC::OS::HoYoChannelDelegate_UnregisterCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19640);
		}

		static ::MiHoYo::SDK::WebDelegate_HideNavigationBarDelegate** StaticGet___9__1_18()
		{
			return (::MiHoYo::SDK::WebDelegate_HideNavigationBarDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19648);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewBeforePageHide** StaticGet___9__1_4()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewBeforePageHide**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19650);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnBoxConfigReadyDelegate** StaticGet___9__7_1()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnBoxConfigReadyDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19658);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDriveTotalSpaceDelegate** StaticGet___9__0_7()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDriveTotalSpaceDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19660);
		}

		static ::MiHoYo::SDK::SDKDelegate_GeNetworkAdapterDescriptionDelegate** StaticGet___9__0_11()
		{
			return (::MiHoYo::SDK::SDKDelegate_GeNetworkAdapterDescriptionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19668);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageError** StaticGet___9__1_2()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageError**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19670);
		}

		static ::MiHoYo::SDK::WebDelegate_SetWebLinearDelegate** StaticGet___9__1_32()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebLinearDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19678);
		}

		static ::MiHoYo::SDK::WebDelegate_SetWebCookiesDelegate** StaticGet___9__1_34()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebCookiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19680);
		}

		static ::MiHoYo::SDK::WebDelegate_CallJSPublishFunctionDelegate** StaticGet___9__1_28()
		{
			return (::MiHoYo::SDK::WebDelegate_CallJSPublishFunctionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19688);
		}

		static ::MiHoYo::SDK::WebDelegate_ClearCookiesDelegate** StaticGet___9__1_25()
		{
			return (::MiHoYo::SDK::WebDelegate_ClearCookiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19690);
		}

		static ::MiHoYo::SDK::WebDelegate_SetCookiesDelegate** StaticGet___9__1_24()
		{
			return (::MiHoYo::SDK::WebDelegate_SetCookiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19698);
		}

		static ::MiHoYo::SDK::WebDelegate_SetWebFeatureDelegate** StaticGet___9__1_39()
		{
			return (::MiHoYo::SDK::WebDelegate_SetWebFeatureDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196A0);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewNativeReady** StaticGet___9__1_5()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewNativeReady**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196A8);
		}

		static ::MiHoYo::SDK::WebDelegate_HideBGDelegate** StaticGet___9__1_26()
		{
			return (::MiHoYo::SDK::WebDelegate_HideBGDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196B8);
		}

		static ::MiHoYo::SDK::WebDelegate_SetCurrentWebviewAnimationEnableDelegate** StaticGet___9__1_17()
		{
			return (::MiHoYo::SDK::WebDelegate_SetCurrentWebviewAnimationEnableDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196C0);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetRamRemainDelegate** StaticGet___9__0_9()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetRamRemainDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196C8);
		}

		static ::MiHoYo::SDK::WebDelegate_SetFrameDelegate** StaticGet___9__1_13()
		{
			return (::MiHoYo::SDK::WebDelegate_SetFrameDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196D0);
		}

		static ::MiHoYo::SDK::WebDelegate_RegisterGeetestViewDelegate** StaticGet___9__1_31()
		{
			return (::MiHoYo::SDK::WebDelegate_RegisterGeetestViewDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196D8);
		}

		static ::MiHoYo::SDK::WebDelegate_SetBackButtonActionDelegate** StaticGet___9__1_16()
		{
			return (::MiHoYo::SDK::WebDelegate_SetBackButtonActionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196E0);
		}

		static ::MiHoYo::SDK::SDKDelegate_InputFieldDelegate** StaticGet___9__0_2()
		{
			return (::MiHoYo::SDK::SDKDelegate_InputFieldDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196E8);
		}

		static ::MiHoYo::SDK::WebDelegate_QueryIsOffScreenRenderingDelegate** StaticGet___9__1_40()
		{
			return (::MiHoYo::SDK::WebDelegate_QueryIsOffScreenRenderingDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196F0);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnGyroscopeDelegate** StaticGet___9__0_15()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGyroscopeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x196F8);
		}

		static ::MiHoYo::SDK::WebDelegate_SetAdjustDPIEnableDelegate** StaticGet___9__1_37()
		{
			return (::MiHoYo::SDK::WebDelegate_SetAdjustDPIEnableDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19700);
		}

		static ::MiHoYo::SDK::WebDelegate_SetNewWindowTypeDelegate** StaticGet___9__1_11()
		{
			return (::MiHoYo::SDK::WebDelegate_SetNewWindowTypeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19708);
		}

		static ::MiHoYo::SDK::WebDelegate_SetUrlQueryDelegate** StaticGet___9__1_33()
		{
			return (::MiHoYo::SDK::WebDelegate_SetUrlQueryDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19710);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewInputEnableStatus** StaticGet___9__1_6()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewInputEnableStatus**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19718);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDriveTotalFreeSpaceDelegate** StaticGet___9__0_8()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDriveTotalFreeSpaceDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19720);
		}

		static ::MiHoYo::SDK::WebDelegate_ShowDevToolsDelegate** StaticGet___9__1_10()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowDevToolsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19728);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnGyroEventDelegate** StaticGet___9__0_14()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGyroEventDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19730);
		}

		static ::MiHoYo::SDK::WebDelegate_LoadDelegate** StaticGet___9__1_9()
		{
			return (::MiHoYo::SDK::WebDelegate_LoadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19738);
		}

		static ::MiHoYo::SDK::WebDelegate_CloseDelegate** StaticGet___9__1_20()
		{
			return (::MiHoYo::SDK::WebDelegate_CloseDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19740);
		}

		static ::MiHoYo::SDK::WebDelegate_UpdateJoypadControlDelegate** StaticGet___9__1_36()
		{
			return (::MiHoYo::SDK::WebDelegate_UpdateJoypadControlDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19748);
		}

		static ::MiHoYo::SDK::WebDelegate_SetZoomEnabledDelegate** StaticGet___9__1_23()
		{
			return (::MiHoYo::SDK::WebDelegate_SetZoomEnabledDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19750);
		}

		static ::MiHoYo::SDK::WebDelegate_GeetestLoadURLDelegate** StaticGet___9__1_30()
		{
			return (::MiHoYo::SDK::WebDelegate_GeetestLoadURLDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19758);
		}

		static ::MiHoYo::SDK::WebDelegate_GetWebCookiesDelegate** StaticGet___9__1_35()
		{
			return (::MiHoYo::SDK::WebDelegate_GetWebCookiesDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19760);
		}

		static ::MiHoYo::SDK::SDKDelegate_DownloadDelegate** StaticGet___9__0_0()
		{
			return (::MiHoYo::SDK::SDKDelegate_DownloadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19768);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageFinish** StaticGet___9__1_1()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageFinish**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19770);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewPopupBrowserCreate** StaticGet___9__1_8()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPopupBrowserCreate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19778);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetMacAddressDelegate** StaticGet___9__0_10()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetMacAddressDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19780);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetNetworkAdapterListDelegate** StaticGet___9__0_12()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetNetworkAdapterListDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19788);
		}

		static ::MiHoYo::SDK::WebDelegate_ShowDelegate** StaticGet___9__1_22()
		{
			return (::MiHoYo::SDK::WebDelegate_ShowDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19790);
		}

		static ::MiHoYo::SDK::SDKDelegate_UseRuntimeFontDelegate** StaticGet___9__0_5()
		{
			return (::MiHoYo::SDK::SDKDelegate_UseRuntimeFontDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x19798);
		}

		static ::MiHoYo::SDK::WebDelegate_OnWebViewPageClose** StaticGet___9__1_3()
		{
			return (::MiHoYo::SDK::WebDelegate_OnWebViewPageClose**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x197A0);
		}

		static ::MiHoYo::SDK::WebDelegate_RegisterJSPostMessageDelegate** StaticGet___9__1_38()
		{
			return (::MiHoYo::SDK::WebDelegate_RegisterJSPostMessageDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x197A8);
		}

		static ::MiHoYo::SDK::WebDelegate_CallJSFunctionDelegate** StaticGet___9__1_27()
		{
			return (::MiHoYo::SDK::WebDelegate_CallJSFunctionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>c")->GetStaticField(0x197B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C_CTOR_OFFSET))(this);
		}

		::System::Void _Register_b__0_0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_0_OFFSET))(this, a1);
		}

		::System::Void _Register_b__0_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_1_OFFSET))(this, a1);
		}

		::System::Void _Register_b__0_2(::UnityEngine::UI::InputField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_2_OFFSET))(this, a1);
		}

		::UnityEngine::Object* _Register_b__0_3(::System::String* a1, ::System::Type* a2)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_3_OFFSET))(this, a1, a2);
		}

		::System::Void _Register_b__0_4(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_4_OFFSET))(this, a1);
		}

		::System::Boolean _Register_b__0_5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_5_OFFSET))(this);
		}

		::System::String* _Register_b__0_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_6_OFFSET))(this);
		}

		::System::Double _Register_b__0_7(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_7_OFFSET))(this, a1);
		}

		::System::Double _Register_b__0_8(::System::String* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_8_OFFSET))(this, a1);
		}

		::System::Double _Register_b__0_9()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_9_OFFSET))(this);
		}

		::System::String* _Register_b__0_10()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_10_OFFSET))(this);
		}

		::System::String* _Register_b__0_11()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_11_OFFSET))(this);
		}

		::System::String* _Register_b__0_12()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_12_OFFSET))(this);
		}

		::System::String* _Register_b__0_13()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_13_OFFSET))(this);
		}

		::System::Void _Register_b__0_14(::WeLing::SDK::GyroType a1, ::Il2CppArray<::System::Single>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::WeLing::SDK::GyroType, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_14_OFFSET))(this, a1, a2);
		}

		::System::Void _Register_b__0_15(::CloudGame::MailBox::GameControl::Gyroscope a1)
		{
			return ((::System::Void(*)(::PVOID, ::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_15_OFFSET))(this, a1);
		}

		::System::Void _Register_b__0_16(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_16_OFFSET))(this, a1);
		}

		::System::Void _Register_b__0_17(::MiHoYo::SDK::GameRoleModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GameRoleModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_17_OFFSET))(this, a1);
		}

		::System::Void _Register_b__0_18(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTER_B__0_18_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_0_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_1_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_2_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_3(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_3_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_4_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_5(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_5_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_6(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_6_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_7_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_8(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_8_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_9(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_9_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_10(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_10_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_11(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_11_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_12(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_12_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_13(::System::Object* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_13_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _RegisterWebFunc_b__1_14(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_14_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_15(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_15_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_16(::System::Object* a1, ::System::Func_1<::System::Boolean>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_16_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_17(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_17_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_18(::System::Object* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_18_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RegisterWebFunc_b__1_19(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_19_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_20(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_20_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_21(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_21_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_22(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_22_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_23(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_23_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_24(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_24_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RegisterWebFunc_b__1_25(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_25_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_26(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_26_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_27(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_27_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RegisterWebFunc_b__1_28(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_28_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RegisterWebFunc_b__1_29(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_29_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_30(::MiHoYo::SDK::GeetestView* a1, ::System::String* a2, ::MiHoYo::SDK::MmtManager_GeetestModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*, ::System::String*, ::MiHoYo::SDK::MmtManager_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_30_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RegisterWebFunc_b__1_31(::MiHoYo::SDK::GeetestView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_31_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_32(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_32_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_33(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_33_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_34(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_34_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_35(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_35_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_36()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_36_OFFSET))(this);
		}

		::System::Void _RegisterWebFunc_b__1_37(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_37_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterWebFunc_b__1_38(::System::Object* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::JSONNode*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::JSONNode*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_38_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RegisterWebFunc_b__1_39(::System::Object* a1, ::MiHoYo::SDK::WebFeature a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_39_OFFSET))(this, a1, a2);
		}

		::System::Boolean _RegisterWebFunc_b__1_40(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_40_OFFSET))(this, a1);
		}

		::System::Void _RegisterWebFunc_b__1_41(::System::Object* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERWEBFUNC_B__1_41_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RegisterHoYoChannels_b__2_0(::MiHoYo::SDK::PC::OS::HoYoChannelCallbackType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelCallbackType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERHOYOCHANNELS_B__2_0_OFFSET))(this, a1);
		}

		::System::Void _RegisterAPM_b__7_0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERAPM_B__7_0_OFFSET))(this, a1);
		}

		::System::Void _RegisterAPM_b__7_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DELEGATEREGISTER___C__REGISTERAPM_B__7_1_OFFSET))(this, a1);
		}

	};
}
