#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Net { class IWebProxy; }
namespace System::Net::Configuration { class DefaultProxySectionInternal; }

#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B02D0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETDEFAULTPROXY_USINGOLDMONOCODE_OFFSET UNITYSDK_OFFSET(0x1C1B0120)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSECTION_OFFSET UNITYSDK_OFFSET(0x1C1B01B0)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSYSTEMWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1C1B0140)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_CLASSSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1C1B0160)
#define SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_WEBPROXY_OFFSET UNITYSDK_OFFSET(0x1C1B02E0)

namespace System::Net::Configuration
{
	inline static constexpr unsigned int DefaultProxySectionInternal_TypeDefinitionIndex = 2976;

	class DefaultProxySectionInternal : public ::System::Object
	{
	public:
		::System::Net::IWebProxy* webProxy; // 0x10
		static ::System::Object** StaticGet_classSyncObject()
		{
			return (::System::Object**)UnitySDK::FromName("System.Net.Configuration", "DefaultProxySectionInternal")->GetStaticField(0x387A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_CTOR_OFFSET))(this);
		}

		static ::System::Net::IWebProxy* GetDefaultProxy_UsingOldMonoCode()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETDEFAULTPROXY_USINGOLDMONOCODE_OFFSET))();
		}

		static ::System::Net::IWebProxy* GetSystemWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSYSTEMWEBPROXY_OFFSET))();
		}

		static ::System::Object* get_ClassSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_CLASSSYNCOBJECT_OFFSET))();
		}

		static ::System::Net::Configuration::DefaultProxySectionInternal* GetSection()
		{
			return ((::System::Net::Configuration::DefaultProxySectionInternal*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GETSECTION_OFFSET))();
		}

		::System::Net::IWebProxy* get_WebProxy()
		{
			return ((::System::Net::IWebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CONFIGURATION_DEFAULTPROXYSECTIONINTERNAL_GET_WEBPROXY_OFFSET))(this);
		}

	};
}
