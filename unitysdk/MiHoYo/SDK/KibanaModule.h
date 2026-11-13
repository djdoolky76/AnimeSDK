#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_KIBANAMODULE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6A7070)
#define MIHOYO_SDK_KIBANAMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6A7060)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KibanaModule_TypeDefinitionIndex = 7579;

	class KibanaModule : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_Network()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F10);
		}

		static ::System::String** StaticGet_BiliBili()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F18);
		}

		static ::System::String** StaticGet_HttpDns()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F20);
		}

		static ::System::String** StaticGet_UGC()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F28);
		}

		static ::System::String** StaticGet_VOX()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F30);
		}

		static ::System::String** StaticGet_AGEGATE()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F38);
		}

		static ::System::String** StaticGet_PS()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F40);
		}

		static ::System::String** StaticGet_Webview()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F48);
		}

		static ::System::String** StaticGet_Default()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F50);
		}

		static ::System::String** StaticGet_PSBinding()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F58);
		}

		static ::System::String** StaticGet_Exception()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F60);
		}

		static ::System::String** StaticGet_Download()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F68);
		}

		static ::System::String** StaticGet_APM()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F70);
		}

		static ::System::String** StaticGet_Watermark()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F78);
		}

		static ::System::String** StaticGet_NATIVE_TASK()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F80);
		}

		static ::System::String** StaticGet_SecurityServerKCP()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F88);
		}

		static ::System::String** StaticGet_Pay()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F90);
		}

		static ::System::String** StaticGet_Kid()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8F98);
		}

		static ::System::String** StaticGet_SecurityServerTCP()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FA0);
		}

		static ::System::String** StaticGet_RegionTranslation()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FA8);
		}

		static ::System::String** StaticGet_CXLogin()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FB0);
		}

		static ::System::String** StaticGet_Windows()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FB8);
		}

		static ::System::String** StaticGet_Login()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FC0);
		}

		static ::System::String** StaticGet_Cloud()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FC8);
		}

		static ::System::String** StaticGet_Function()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FD0);
		}

		static ::System::String** StaticGet_CX()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FD8);
		}

		static ::System::String** StaticGet_DeviceFp()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FE0);
		}

		static ::System::String** StaticGet_CXBinding()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FE8);
		}

		static ::System::String** StaticGet_LAUNCH_PROTOCOL()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FF0);
		}

		static ::System::String** StaticGet_SecurityServer()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x8FF8);
		}

		static ::System::String** StaticGet_Notify()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x9000);
		}

		static ::System::String** StaticGet_Test()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x9008);
		}

		static ::System::String** StaticGet_Notice()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x9010);
		}

		static ::System::String** StaticGet_Epic()
		{
			return (::System::String**)UnitySDK::FromName("MiHoYo.SDK", "KibanaModule")->GetStaticField(0x9018);
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
