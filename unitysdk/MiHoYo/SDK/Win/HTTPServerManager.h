#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Win { class HTTPServerManager; }
namespace MiHoYo::SDK::Win { class MiHoYoSDKHTTPServer; }

#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CED49F0)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CED49E0)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1CED3D50)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_SETHTTPSERVERENABLE_OFFSET UNITYSDK_OFFSET(0x1CED3D20)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1CED4120)
#define MIHOYO_SDK_WIN_HTTPSERVERMANAGER_STOP_OFFSET UNITYSDK_OFFSET(0x1CED46B0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int HTTPServerManager_TypeDefinitionIndex = 9443;

	class HTTPServerManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::HTTPServerManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::HTTPServerManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "HTTPServerManager")->GetStaticField(0x29C10);
		}

		static ::MiHoYo::SDK::Win::MiHoYoSDKHTTPServer** StaticGet_server()
		{
			return (::MiHoYo::SDK::Win::MiHoYoSDKHTTPServer**)UnitySDK::FromName("MiHoYo.SDK.Win", "HTTPServerManager")->GetStaticField(0x29C18);
		}

		static ::System::Boolean* StaticGet_isUsingHttpServer()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK.Win", "HTTPServerManager")->GetStaticField(0x8640);
		}

		// static const ::System::String* ServerResourcesPath; // 0x0
		// static const ::System::Object Port; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_CCTOR_OFFSET))();
		}

		::System::Void SetHttpServerEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_SETHTTPSERVERENABLE_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_HTTPSERVERMANAGER_STOP_OFFSET))(this);
		}

	};
}
