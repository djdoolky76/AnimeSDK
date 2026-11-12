#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_KIBANAMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D010960)
#define MIHOYO_SDK_KIBANAMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D010950)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaModule_TypeDefinitionIndex = 7579;

	class KibanaModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Notify()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1270);
		}

		static ::System::String** StaticGet_Network()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1278);
		}

		static ::System::String** StaticGet_Function()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1280);
		}

		static ::System::String** StaticGet_CXBinding()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1288);
		}

		static ::System::String** StaticGet_SecurityServerTCP()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1290);
		}

		static ::System::String** StaticGet_AGEGATE()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1298);
		}

		static ::System::String** StaticGet_SecurityServerKCP()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12A0);
		}

		static ::System::String** StaticGet_Notice()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12A8);
		}

		static ::System::String** StaticGet_APM()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12B0);
		}

		static ::System::String** StaticGet_UGC()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12B8);
		}

		static ::System::String** StaticGet_Pay()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12C0);
		}

		static ::System::String** StaticGet_PS()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12C8);
		}

		static ::System::String** StaticGet_SecurityServer()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12D0);
		}

		static ::System::String** StaticGet_Download()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12D8);
		}

		static ::System::String** StaticGet_Login()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12E0);
		}

		static ::System::String** StaticGet_Windows()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12E8);
		}

		static ::System::String** StaticGet_CX()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12F0);
		}

		static ::System::String** StaticGet_Kid()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x12F8);
		}

		static ::System::String** StaticGet_NATIVE_TASK()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1300);
		}

		static ::System::String** StaticGet_BiliBili()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1308);
		}

		static ::System::String** StaticGet_VOX()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1310);
		}

		static ::System::String** StaticGet_LAUNCH_PROTOCOL()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1318);
		}

		static ::System::String** StaticGet_Watermark()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1320);
		}

		static ::System::String** StaticGet_Exception()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1328);
		}

		static ::System::String** StaticGet_RegionTranslation()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1330);
		}

		static ::System::String** StaticGet_Cloud()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1338);
		}

		static ::System::String** StaticGet_Epic()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1340);
		}

		static ::System::String** StaticGet_PSBinding()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1348);
		}

		static ::System::String** StaticGet_Webview()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1350);
		}

		static ::System::String** StaticGet_CXLogin()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1358);
		}

		static ::System::String** StaticGet_HttpDns()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1360);
		}

		static ::System::String** StaticGet_Default()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1368);
		}

		static ::System::String** StaticGet_Test()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1370);
		}

		static ::System::String** StaticGet_DeviceFp()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x1378);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAMODULE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAMODULE_CCTOR_OFFSET))();
		}

	};
}
