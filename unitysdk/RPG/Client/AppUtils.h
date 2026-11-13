#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFHILPANBNL.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NetworkReachability.h"
#include "unitysdk/RPG/Client/AppUtils_CNameData.h"
#include "unitysdk/UnityEngine/NativeString.h"
namespace RPG::GameCore { class UIAdaptiveDeviceConfig; }
namespace System { class String; }
namespace System::Globalization { class CultureInfo; }
namespace System::Text::RegularExpressions { class Regex; }
namespace System::Threading { class Thread; }

#define RPG_CLIENT_APPUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA98CB0)
#define RPG_CLIENT_APPUTILS_CLEARCHECKSUMRESULTS_OFFSET UNITYSDK_OFFSET(0x1CA98550)
#define RPG_CLIENT_APPUTILS_CULTURECHECK_OFFSET UNITYSDK_OFFSET(0x1CA985C0)
#define RPG_CLIENT_APPUTILS_GETANDROIDSOCNAME_OFFSET UNITYSDK_OFFSET(0x1CA96A60)
#define RPG_CLIENT_APPUTILS_GETCHECKSUMBYINDEX_OFFSET UNITYSDK_OFFSET(0x1CA98050)
#define RPG_CLIENT_APPUTILS_GETCPS_OFFSET UNITYSDK_OFFSET(0x1CA98B30)
#define RPG_CLIENT_APPUTILS_GETDEVICEINFOWITHNATIVESTRING_OFFSET UNITYSDK_OFFSET(0x1CA95520)
#define RPG_CLIENT_APPUTILS_GETDEVICEINFO_OFFSET UNITYSDK_OFFSET(0x1CA953F0)
#define RPG_CLIENT_APPUTILS_GETDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1CA96740)
#define RPG_CLIENT_APPUTILS_GETDEVICEUNIQUEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1CA95350)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEID_OFFSET UNITYSDK_OFFSET(0x1CA96AA0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICENAME_OFFSET UNITYSDK_OFFSET(0x1CA96790)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1CA967D0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVENDOR_OFFSET UNITYSDK_OFFSET(0x1CA96860)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVERSION_OFFSET UNITYSDK_OFFSET(0x1CA968A0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSHADERLEVEL_OFFSET UNITYSDK_OFFSET(0x1CA96AE0)
#define RPG_CLIENT_APPUTILS_GETGRAPHICSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1CA968E0)
#define RPG_CLIENT_APPUTILS_GETLOCALTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1CA97E70)
#define RPG_CLIENT_APPUTILS_GETOPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1CA966F0)
#define RPG_CLIENT_APPUTILS_GETPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1CA95390)
#define RPG_CLIENT_APPUTILS_GETPROCESSORCOUNT_OFFSET UNITYSDK_OFFSET(0x1CA96920)
#define RPG_CLIENT_APPUTILS_GETPROCESSORFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1CA96970)
#define RPG_CLIENT_APPUTILS_GETPROCESSORTYPE_OFFSET UNITYSDK_OFFSET(0x1CA969C0)
#define RPG_CLIENT_APPUTILS_GETRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1CA97F80)
#define RPG_CLIENT_APPUTILS_GETRPGDEVICEID_OFFSET UNITYSDK_OFFSET(0x1CA98900)
#define RPG_CLIENT_APPUTILS_GETSYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1CA96A10)
#define RPG_CLIENT_APPUTILS_GETVIDEOSETTING_OFFSET UNITYSDK_OFFSET(0x1CA96B20)
#define RPG_CLIENT_APPUTILS_GET_DPI_OFFSET UNITYSDK_OFFSET(0x1CA930B0)
#define RPG_CLIENT_APPUTILS_GET_GETPLATFORMNAME_OFFSET UNITYSDK_OFFSET(0x1CA93B60)
#define RPG_CLIENT_APPUTILS_GET_ISANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93CC0)
#define RPG_CLIENT_APPUTILS_GET_ISAPPLEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93CF0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDANDROIDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93ED0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDIOSPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93F00)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA94A70)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA94850)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDPCPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA94AA0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93020)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEGAMEPAD_OFFSET UNITYSDK_OFFSET(0x1CA94DB0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEKEYBOARDMOUSE_OFFSET UNITYSDK_OFFSET(0x1CA94BE0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDUSETOUCH_OFFSET UNITYSDK_OFFSET(0x1CA94E10)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBANDROID_OFFSET UNITYSDK_OFFSET(0x1CA94730)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBIOS_OFFSET UNITYSDK_OFFSET(0x1CA94760)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBKEYBOARD_OFFSET UNITYSDK_OFFSET(0x1CA94820)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBMAC_OFFSET UNITYSDK_OFFSET(0x1CA947C0)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPC_OFFSET UNITYSDK_OFFSET(0x1CA94790)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA94560)
#define RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBTOUCH_OFFSET UNITYSDK_OFFSET(0x1CA947F0)
#define RPG_CLIENT_APPUTILS_GET_ISDEBUG_OFFSET UNITYSDK_OFFSET(0x1CA994A0)
#define RPG_CLIENT_APPUTILS_GET_ISEDITOR_OFFSET UNITYSDK_OFFSET(0x1CA93C30)
#define RPG_CLIENT_APPUTILS_GET_ISMACEDITOR_OFFSET UNITYSDK_OFFSET(0x1CA93CA0)
#define RPG_CLIENT_APPUTILS_GET_ISMACPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93DF0)
#define RPG_CLIENT_APPUTILS_GET_ISMOBILEORCLOUDMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA949E0)
#define RPG_CLIENT_APPUTILS_GET_ISMOBILEPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93D20)
#define RPG_CLIENT_APPUTILS_GET_ISNETAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1CA93F30)
#define RPG_CLIENT_APPUTILS_GET_ISOVERSEA_OFFSET UNITYSDK_OFFSET(0x1CA994D0)
#define RPG_CLIENT_APPUTILS_GET_ISPCLAYOUT_OFFSET UNITYSDK_OFFSET(0x1CA94AD0)
#define RPG_CLIENT_APPUTILS_GET_ISPROFILE_OFFSET UNITYSDK_OFFSET(0x1CA994B0)
#define RPG_CLIENT_APPUTILS_GET_ISPS4PLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93E90)
#define RPG_CLIENT_APPUTILS_GET_ISPS5PLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93EB0)
#define RPG_CLIENT_APPUTILS_GET_ISPSPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93E10)
#define RPG_CLIENT_APPUTILS_GET_ISRELEASE_OFFSET UNITYSDK_OFFSET(0x1CA994C0)
#define RPG_CLIENT_APPUTILS_GET_ISWIFI_OFFSET UNITYSDK_OFFSET(0x1CA93F50)
#define RPG_CLIENT_APPUTILS_GET_ISWINDOWSEDITOR_OFFSET UNITYSDK_OFFSET(0x1CA93C80)
#define RPG_CLIENT_APPUTILS_GET_ISWINDOWSPLATFORM_OFFSET UNITYSDK_OFFSET(0x1CA93DC0)
#define RPG_CLIENT_APPUTILS_GET_NETWORKREACHABILITY_OFFSET UNITYSDK_OFFSET(0x1CA93F80)
#define RPG_CLIENT_APPUTILS_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1CA94FC0)
#define RPG_CLIENT_APPUTILS_GET_SUPPORTMETALFX_OFFSET UNITYSDK_OFFSET(0x1CA93F90)
#define RPG_CLIENT_APPUTILS_GET_UIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1CA993C0)
#define RPG_CLIENT_APPUTILS_INITPLATFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1CA93FF0)
#define RPG_CLIENT_APPUTILS_LAUNCHCHECKSUMTHREAD_OFFSET UNITYSDK_OFFSET(0x1CA981E0)
#define RPG_CLIENT_APPUTILS_QUERYURLCNAME_OFFSET UNITYSDK_OFFSET(0x1CA93440)
#define RPG_CLIENT_APPUTILS_REDIRECTTOTAPTAP_OFFSET UNITYSDK_OFFSET(0x1CA98C70)
#define RPG_CLIENT_APPUTILS_REPLACELOCALTIME_OFFSET UNITYSDK_OFFSET(0x1CA93700)
#define RPG_CLIENT_APPUTILS_RESETDPI_OFFSET UNITYSDK_OFFSET(0x1CA933C0)
#define RPG_CLIENT_APPUTILS_RESETUIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1CA98DB0)
#define RPG_CLIENT_APPUTILS_SETDEVICEFINGERPRINT_OFFSET UNITYSDK_OFFSET(0x1CA94E70)
#define RPG_CLIENT_APPUTILS_SETRAWCULTUREINFO_OFFSET UNITYSDK_OFFSET(0x1CA98870)
#define RPG_CLIENT_APPUTILS_SETSERIALNUMBERDIRTY_OFFSET UNITYSDK_OFFSET(0x1CA94F60)
#define RPG_CLIENT_APPUTILS_SET_UIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1CA99470)
#define RPG_CLIENT_APPUTILS_WAITCHECKSUMCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1CA983F0)
#define RPG_CLIENT_APPUTILS__CLOUDINIT_OFFSET UNITYSDK_OFFSET(0x1CA92F60)
#define RPG_CLIENT_APPUTILS__ENSUREUIADAPTIVEDEVICECONFIG_OFFSET UNITYSDK_OFFSET(0x1CA99300)
#define RPG_CLIENT_APPUTILS__GETDPI_OFFSET UNITYSDK_OFFSET(0x1CA92F00)
#define RPG_CLIENT_APPUTILS__GETMOBILEUIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1CA98FE0)
#define RPG_CLIENT_APPUTILS__GETUIADAPTIVEDEVICETYPEBYDEVICEMODEL_OFFSET UNITYSDK_OFFSET(0x1CA990E0)
#define RPG_CLIENT_APPUTILS__GETUIADAPTIVEDEVICETYPEBYSCREENRATIO_OFFSET UNITYSDK_OFFSET(0x1CA98F70)
#define RPG_CLIENT_APPUTILS__INITDPISETTING_OFFSET UNITYSDK_OFFSET(0x1CA92E00)
#define RPG_CLIENT_APPUTILS__INITUIADAPTIVEDEVICETYPE_OFFSET UNITYSDK_OFFSET(0x1CA98DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AppUtils_TypeDefinitionIndex = 60554;

	class AppUtils : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_mSerialNumber()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0xA860);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_TimeRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0xA868);
		}

		static ::System::String** StaticGet_DeviceFingerPrint()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0xA870);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_checksumResults()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0xA878);
		}

		static ::System::Globalization::CultureInfo** StaticGet_RawCultureInfo()
		{
			return (::System::Globalization::CultureInfo**)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0xA880);
		}

		static ::System::String** StaticGet_LOCALZONE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0xA888);
		}

		static ::System::Threading::Thread** StaticGet_checksumComputeThread()
		{
			return (::System::Threading::Thread**)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0xA890);
		}

		static ::System::String** StaticGet_LOCALTIMEZONE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0xA898);
		}

		static ::RPG::GameCore::UIAdaptiveDeviceType* StaticGet__uiAdaptiveDeviceType()
		{
			return (::RPG::GameCore::UIAdaptiveDeviceType*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x1260);
		}

		static ::System::Int32* StaticGet__OrigDeviceWidth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x1264);
		}

		static ::System::Boolean* StaticGet_IsSerialNumberDirty()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x1268);
		}

		static ::System::Boolean* StaticGet__IsUiAdaptiveDeviceTypeInited()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x1269);
		}

		static ::System::Single* StaticGet__ScreenRatioPad()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x126C);
		}

		static ::JFHILPANBNL* StaticGet__PlatformType()
		{
			return (::JFHILPANBNL*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x1270);
		}

		static ::System::Int32* StaticGet__LastDeviceHeight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x1274);
		}

		static ::System::Int32* StaticGet__LastDeviceWidth()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x1278);
		}

		static ::System::Single* StaticGet__dpi()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x127C);
		}

		static ::System::Single* StaticGet_DefaultBezelLessScreenMaxIndent()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x1280);
		}

		static ::System::Int32* StaticGet__OrigDeviceHeight()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "AppUtils")->GetStaticField(0x1284);
		}

		// static const ::System::Object DEFAULT_DPI; // 0x0
		// static const ::System::String* taptap_game_appID; // 0x0
		// static const ::System::String* _UI_ADAPTIVE_DEVICE_CONFIG_PATH; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_CCTOR_OFFSET))();
		}

		static ::System::Void _InitDPISetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__INITDPISETTING_OFFSET))();
		}

		static ::System::Single _GetDpi()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__GETDPI_OFFSET))();
		}

		static ::System::Void _CloudInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__CLOUDINIT_OFFSET))();
		}

		static ::System::Single get_Dpi()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_DPI_OFFSET))();
		}

		static ::System::Void ResetDpi()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_RESETDPI_OFFSET))();
		}

		static ::RPG::Client::AppUtils_CNameData QueryUrlCName(::System::String* a1)
		{
			return ((::RPG::Client::AppUtils_CNameData(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_QUERYURLCNAME_OFFSET))(a1);
		}

		static ::System::String* ReplaceLocalTime(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_REPLACELOCALTIME_OFFSET))(a1);
		}

		static ::System::String* get_GetPlatformName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_GETPLATFORMNAME_OFFSET))();
		}

		static ::System::Boolean get_IsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISEDITOR_OFFSET))();
		}

		static ::System::Boolean get_IsWindowsEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISWINDOWSEDITOR_OFFSET))();
		}

		static ::System::Boolean get_IsMacEditor()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISMACEDITOR_OFFSET))();
		}

		static ::System::Boolean get_IsAndroidPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISANDROIDPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsApplePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISAPPLEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsWindowsPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISWINDOWSPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsMacPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISMACPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsPSPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPSPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsPS4Platform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPS4PLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsPS5Platform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPS5PLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudAndroidPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDANDROIDPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudIOSPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDIOSPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsNetAvailable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISNETAVAILABLE_OFFSET))();
		}

		static ::System::Boolean get_IsWifi()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISWIFI_OFFSET))();
		}

		static ::UnityEngine::NetworkReachability get_NetworkReachability()
		{
			return ((::UnityEngine::NetworkReachability(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_NETWORKREACHABILITY_OFFSET))();
		}

		static ::System::Boolean get_SupportMetalFX()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_SUPPORTMETALFX_OFFSET))();
		}

		static ::System::Boolean get_IsCloudPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDPLATFORM_OFFSET))();
		}

		static ::System::Void InitPlatformType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_INITPLATFORMTYPE_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsMobileOrCloudMobilePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISMOBILEORCLOUDMOBILEPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebAndroid()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBANDROID_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebIOS()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBIOS_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebPC()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBPC_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebMac()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBMAC_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebTouch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBTOUCH_OFFSET))();
		}

		static ::System::Boolean get_IsCloudWebKeyboard()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDWEBKEYBOARD_OFFSET))();
		}

		static ::System::Boolean get_IsCloudMacPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDMACPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsCloudPCPlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDPCPLATFORM_OFFSET))();
		}

		static ::System::Boolean get_IsPCLayout()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPCLAYOUT_OFFSET))();
		}

		static ::System::Boolean get_IsCloudUseTouch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDUSETOUCH_OFFSET))();
		}

		static ::System::Boolean get_IsCloudUseKeyboardMouse()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEKEYBOARDMOUSE_OFFSET))();
		}

		static ::System::Boolean get_IsCloudUseGamePad()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISCLOUDUSEGAMEPAD_OFFSET))();
		}

		static ::System::Void SetDeviceFingerPrint(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SETDEVICEFINGERPRINT_OFFSET))(a1);
		}

		static ::System::Void SetSerialNumberDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SETSERIALNUMBERDIRTY_OFFSET))();
		}

		static ::System::String* get_SerialNumber()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_SERIALNUMBER_OFFSET))();
		}

		static ::JFHILPANBNL GetPlatformType()
		{
			return ((::JFHILPANBNL(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETPLATFORMTYPE_OFFSET))();
		}

		static ::System::String* GetDeviceInfo()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETDEVICEINFO_OFFSET))();
		}

		static ::UnityEngine::NativeString GetDeviceInfoWithNativeString()
		{
			return ((::UnityEngine::NativeString(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETDEVICEINFOWITHNATIVESTRING_OFFSET))();
		}

		static ::System::String* GetVideoSetting()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETVIDEOSETTING_OFFSET))();
		}

		static ::System::String* GetLocalTimeZone()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETLOCALTIMEZONE_OFFSET))();
		}

		static ::System::String* GetOperatingSystem()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETOPERATINGSYSTEM_OFFSET))();
		}

		static ::System::Int32 GetGraphicsDeviceID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEID_OFFSET))();
		}

		static ::System::String* GetDeviceModel()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETDEVICEMODEL_OFFSET))();
		}

		static ::System::Int32 GetGraphicShaderLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSHADERLEVEL_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICENAME_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceType()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICETYPE_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceVendor()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVENDOR_OFFSET))();
		}

		static ::System::String* GetGraphicsDeviceVersion()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSDEVICEVERSION_OFFSET))();
		}

		static ::System::Int32 GetGraphicsMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETGRAPHICSMEMORYSIZE_OFFSET))();
		}

		static ::System::Int32 GetProcessorCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETPROCESSORCOUNT_OFFSET))();
		}

		static ::System::Int32 GetProcessorFrequency()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETPROCESSORFREQUENCY_OFFSET))();
		}

		static ::System::String* GetProcessorType()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETPROCESSORTYPE_OFFSET))();
		}

		static ::System::Int32 GetSystemMemorySize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETSYSTEMMEMORYSIZE_OFFSET))();
		}

		static ::System::String* GetDeviceUniqueIdentifier()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETDEVICEUNIQUEIDENTIFIER_OFFSET))();
		}

		static ::System::String* GetResolution()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETRESOLUTION_OFFSET))();
		}

		static ::System::String* GetCheckSumByIndex(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETCHECKSUMBYINDEX_OFFSET))(a1);
		}

		static ::System::Void launchChecksumThread()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_LAUNCHCHECKSUMTHREAD_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* waitChecksumCompute()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_WAITCHECKSUMCOMPUTE_OFFSET))();
		}

		static ::System::Void clearChecksumResults()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_CLEARCHECKSUMRESULTS_OFFSET))();
		}

		static ::System::String* GetAndroidSoCName()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETANDROIDSOCNAME_OFFSET))();
		}

		static ::System::Void CultureCheck()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_CULTURECHECK_OFFSET))();
		}

		static ::System::Void SetRawCultureInfo(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SETRAWCULTUREINFO_OFFSET))(a1);
		}

		static ::System::String* GetRPGDeviceID()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETRPGDEVICEID_OFFSET))();
		}

		static ::System::String* GetCps()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GETCPS_OFFSET))();
		}

		static ::System::Boolean RedirectToTaptap()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_REDIRECTTOTAPTAP_OFFSET))();
		}

		static ::System::Boolean ResetUIAdaptiveDeviceType()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_RESETUIADAPTIVEDEVICETYPE_OFFSET))();
		}

		static ::System::Void _InitUIAdaptiveDeviceType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__INITUIADAPTIVEDEVICETYPE_OFFSET))();
		}

		static ::RPG::GameCore::UIAdaptiveDeviceType _GetUIAdaptiveDeviceTypeByScreenRatio(::System::Single a1)
		{
			return ((::RPG::GameCore::UIAdaptiveDeviceType(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__GETUIADAPTIVEDEVICETYPEBYSCREENRATIO_OFFSET))(a1);
		}

		static ::RPG::GameCore::UIAdaptiveDeviceType _GetMobileUIAdaptiveDeviceType(::System::Single a1)
		{
			return ((::RPG::GameCore::UIAdaptiveDeviceType(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__GETMOBILEUIADAPTIVEDEVICETYPE_OFFSET))(a1);
		}

		static ::System::Boolean _GetUIAdaptiveDeviceTypeByDeviceModel(::RPG::GameCore::UIAdaptiveDeviceType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::UIAdaptiveDeviceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__GETUIADAPTIVEDEVICETYPEBYDEVICEMODEL_OFFSET))(a1);
		}

		static ::RPG::GameCore::UIAdaptiveDeviceConfig* _EnsureUIAdaptiveDeviceConfig()
		{
			return ((::RPG::GameCore::UIAdaptiveDeviceConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS__ENSUREUIADAPTIVEDEVICECONFIG_OFFSET))();
		}

		static ::RPG::GameCore::UIAdaptiveDeviceType get_UIAdaptiveDeviceType()
		{
			return ((::RPG::GameCore::UIAdaptiveDeviceType(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_UIADAPTIVEDEVICETYPE_OFFSET))();
		}

		static ::System::Void set_UIAdaptiveDeviceType(::RPG::GameCore::UIAdaptiveDeviceType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::UIAdaptiveDeviceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_SET_UIADAPTIVEDEVICETYPE_OFFSET))(a1);
		}

		static ::System::Boolean get_IsDebug()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISDEBUG_OFFSET))();
		}

		static ::System::Boolean get_IsProfile()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISPROFILE_OFFSET))();
		}

		static ::System::Boolean get_IsRelease()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISRELEASE_OFFSET))();
		}

		static ::System::Boolean get_IsOverSea()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_APPUTILS_GET_ISOVERSEA_OFFSET))();
		}

	};
}
