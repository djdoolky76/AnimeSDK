#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class SDKDelegate_AsbPathDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_CheckHttpDnsPlusEnableDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_DeviceFPRefreshDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_DownloadDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GeNetworkAdapterDescriptionDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDeviceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDeviceFPDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDiskFreeSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDiskTypeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDriveTotalFreeSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetDriveTotalSpaceDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetMacAddressDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetNetworkAdapterListDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetNetworkTypeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_GetRamRemainDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_HttpRequestByHttpDnsPlusDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_HttpRequestBytHttpDnsDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_InputFieldDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_IsEditorDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_IsInStackTopDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LoadAssetDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LoadFileDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_LogDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_NotificationDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnBoxConfigReadyDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGameControlReceiveDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGameRoleUpdateDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGyroEventDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnGyroscopeDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnHideNativeUIDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_OnShowNativeUIDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_ResourcePathDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_SecuritySetLoginResultDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_SetAPMAgeGateDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_ShowTextDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_UnLoadAssetDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_UseRuntimeFontDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_WebEventDelegate; }
namespace MiHoYo::SDK { class SDKDelegate_WebViewAnimationEnable; }
namespace MiHoYo::SDK { class SDKDelegate_WebViewJoypadCloseEnable; }

#define MIHOYO_SDK_SDKDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D03AE00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SDKDelegate_TypeDefinitionIndex = 7777;

	class SDKDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable** StaticGet_OnWebViewJoypadCloseEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewJoypadCloseEnable**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9AC0);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnShowNativeUIDelegate** StaticGet_OnShowNativeUI()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnShowNativeUIDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9AC8);
		}

		static ::MiHoYo::SDK::SDKDelegate_UseRuntimeFontDelegate** StaticGet_UseRuntimeFontHandler()
		{
			return (::MiHoYo::SDK::SDKDelegate_UseRuntimeFontDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9AD0);
		}

		static ::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate** StaticGet_OnGetResourcePath()
		{
			return (::MiHoYo::SDK::SDKDelegate_ResourcePathDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9AD8);
		}

		static ::MiHoYo::SDK::SDKDelegate_HttpRequestByHttpDnsPlusDelegate** StaticGet_HttpRequestByHttpDnsPlus()
		{
			return (::MiHoYo::SDK::SDKDelegate_HttpRequestByHttpDnsPlusDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9AE0);
		}

		static ::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate** StaticGet_SecuritySetLoginResult()
		{
			return (::MiHoYo::SDK::SDKDelegate_SecuritySetLoginResultDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9AE8);
		}

		static ::MiHoYo::SDK::SDKDelegate_LoadFileDelegate** StaticGet_LoadFile()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadFileDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9AF0);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDeviceDelegate** StaticGet_OnGetDevice()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDeviceDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9AF8);
		}

		static ::MiHoYo::SDK::SDKDelegate_WebEventDelegate** StaticGet_OnGetWebEvent()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebEventDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B00);
		}

		static ::MiHoYo::SDK::SDKDelegate_ShowTextDelegate** StaticGet_MiHoYoSDKShowTextNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_ShowTextDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B08);
		}

		static ::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate** StaticGet_LoadAsset()
		{
			return (::MiHoYo::SDK::SDKDelegate_LoadAssetDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B10);
		}

		static ::MiHoYo::SDK::SDKDelegate_IsInStackTopDelegate** StaticGet_IsInStackTop()
		{
			return (::MiHoYo::SDK::SDKDelegate_IsInStackTopDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B18);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetNetworkTypeDelegate** StaticGet_GetNetworkType()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetNetworkTypeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B20);
		}

		static ::MiHoYo::SDK::SDKDelegate_AsbPathDelegate** StaticGet_OnGetAsbPath()
		{
			return (::MiHoYo::SDK::SDKDelegate_AsbPathDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B28);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnBoxConfigReadyDelegate** StaticGet_OnBoxConfigReady()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnBoxConfigReadyDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B30);
		}

		static ::MiHoYo::SDK::SDKDelegate_IsEditorDelegate** StaticGet_IsEditor()
		{
			return (::MiHoYo::SDK::SDKDelegate_IsEditorDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B38);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate** StaticGet_GetDiskType()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDiskTypeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B40);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDriveTotalFreeSpaceDelegate** StaticGet_GetDriveTotalFreeSpace()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDriveTotalFreeSpaceDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B48);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnGameControlReceiveDelegate** StaticGet_OnGameControlReceive()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGameControlReceiveDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B50);
		}

		static ::MiHoYo::SDK::SDKDelegate_GeNetworkAdapterDescriptionDelegate** StaticGet_GeNetworkAdapterDescription()
		{
			return (::MiHoYo::SDK::SDKDelegate_GeNetworkAdapterDescriptionDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B58);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDiskFreeSpaceDelegate** StaticGet_GetDiskFreeSpace()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDiskFreeSpaceDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B60);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDriveTotalSpaceDelegate** StaticGet_GetDriveTotalSpace()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDriveTotalSpaceDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B68);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetMacAddressDelegate** StaticGet_GetMacAddress()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetMacAddressDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B70);
		}

		static ::MiHoYo::SDK::SDKDelegate_DownloadDelegate** StaticGet_MiHoYoSDKDownloadNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_DownloadDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B78);
		}

		static ::MiHoYo::SDK::SDKDelegate_NotificationDelegate** StaticGet_MiHoYoSDKNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_NotificationDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B80);
		}

		static ::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable** StaticGet_OnWebViewAnimationEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_WebViewAnimationEnable**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B88);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnGameRoleUpdateDelegate** StaticGet_OnGameRoleUpdate()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGameRoleUpdateDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B90);
		}

		static ::MiHoYo::SDK::SDKDelegate_DeviceFPRefreshDelegate** StaticGet_OnDeviceFPRefresh()
		{
			return (::MiHoYo::SDK::SDKDelegate_DeviceFPRefreshDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9B98);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetNetworkAdapterListDelegate** StaticGet_GetNetworkAdapterList()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetNetworkAdapterListDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BA0);
		}

		static ::MiHoYo::SDK::SDKDelegate_HttpRequestBytHttpDnsDelegate** StaticGet_HttpRequestBytHttpDns()
		{
			return (::MiHoYo::SDK::SDKDelegate_HttpRequestBytHttpDnsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BA8);
		}

		static ::MiHoYo::SDK::SDKDelegate_SetAPMAgeGateDelegate** StaticGet_SetAPMAgeGate()
		{
			return (::MiHoYo::SDK::SDKDelegate_SetAPMAgeGateDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BB0);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetRamRemainDelegate** StaticGet_GetRamRemain()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetRamRemainDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BB8);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnGyroEventDelegate** StaticGet_OnGyroEvent()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGyroEventDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BC0);
		}

		static ::MiHoYo::SDK::SDKDelegate_LogDelegate** StaticGet_MiHoYoSDKLogNotification()
		{
			return (::MiHoYo::SDK::SDKDelegate_LogDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BC8);
		}

		static ::MiHoYo::SDK::SDKDelegate_UnLoadAssetDelegate** StaticGet_UnLoadAsset()
		{
			return (::MiHoYo::SDK::SDKDelegate_UnLoadAssetDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BD0);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnHideNativeUIDelegate** StaticGet_OnHideNativeUI()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnHideNativeUIDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BD8);
		}

		static ::MiHoYo::SDK::SDKDelegate_InputFieldDelegate** StaticGet_MiHoYoSDKAddInputField()
		{
			return (::MiHoYo::SDK::SDKDelegate_InputFieldDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BE0);
		}

		static ::MiHoYo::SDK::SDKDelegate_CheckHttpDnsPlusEnableDelegate** StaticGet_CheckHttpDnsPlusEnable()
		{
			return (::MiHoYo::SDK::SDKDelegate_CheckHttpDnsPlusEnableDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BE8);
		}

		static ::MiHoYo::SDK::SDKDelegate_OnGyroscopeDelegate** StaticGet_OnGyroscope()
		{
			return (::MiHoYo::SDK::SDKDelegate_OnGyroscopeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BF0);
		}

		static ::MiHoYo::SDK::SDKDelegate_GetDeviceFPDelegate** StaticGet_OnGetDeviceFP()
		{
			return (::MiHoYo::SDK::SDKDelegate_GetDeviceFPDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SDKDelegate")->GetStaticField(0x9BF8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SDKDELEGATE_CTOR_OFFSET))(this);
		}

	};
}
