#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Microsoft::Win32 { class RegistryKey; }

#define MICROSOFT_WIN32_REGISTRY_CCTOR_OFFSET UNITYSDK_OFFSET(0x17AB9C80)

namespace Microsoft::Win32
{
	inline static constexpr unsigned int Registry_TypeDefinitionIndex = 102;

	class Registry : public ::System::Object
	{
	public:
		static ::Microsoft::Win32::RegistryKey** StaticGet_Users()
		{
			return (::Microsoft::Win32::RegistryKey**)UnitySDK::FromName("Microsoft.Win32", "Registry")->GetStaticField(0x9450);
		}

		static ::Microsoft::Win32::RegistryKey** StaticGet_PerformanceData()
		{
			return (::Microsoft::Win32::RegistryKey**)UnitySDK::FromName("Microsoft.Win32", "Registry")->GetStaticField(0x9458);
		}

		static ::Microsoft::Win32::RegistryKey** StaticGet_ClassesRoot()
		{
			return (::Microsoft::Win32::RegistryKey**)UnitySDK::FromName("Microsoft.Win32", "Registry")->GetStaticField(0x9460);
		}

		static ::Microsoft::Win32::RegistryKey** StaticGet_DynData()
		{
			return (::Microsoft::Win32::RegistryKey**)UnitySDK::FromName("Microsoft.Win32", "Registry")->GetStaticField(0x9468);
		}

		static ::Microsoft::Win32::RegistryKey** StaticGet_LocalMachine()
		{
			return (::Microsoft::Win32::RegistryKey**)UnitySDK::FromName("Microsoft.Win32", "Registry")->GetStaticField(0x9470);
		}

		static ::Microsoft::Win32::RegistryKey** StaticGet_CurrentConfig()
		{
			return (::Microsoft::Win32::RegistryKey**)UnitySDK::FromName("Microsoft.Win32", "Registry")->GetStaticField(0x9478);
		}

		static ::Microsoft::Win32::RegistryKey** StaticGet_CurrentUser()
		{
			return (::Microsoft::Win32::RegistryKey**)UnitySDK::FromName("Microsoft.Win32", "Registry")->GetStaticField(0x9480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_WIN32_REGISTRY_CCTOR_OFFSET))();
		}

	};
}
