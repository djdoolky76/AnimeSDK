#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/CFProxyType.h"
#include "unitysdk/System/Object.h"
namespace Mono::Net { class CFDictionary; }
namespace System { class String; }

#define MONO_NET_CFPROXY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAE5EF0)
#define MONO_NET_CFPROXY_CFPROXYTYPETOENUM_OFFSET UNITYSDK_OFFSET(0x1DAE6A40)
#define MONO_NET_CFPROXY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE2AA0)
#define MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONJAVASCRIPT_OFFSET UNITYSDK_OFFSET(0x1DAE54C0)
#define MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONURL_OFFSET UNITYSDK_OFFSET(0x1DAE5660)
#define MONO_NET_CFPROXY_GET_HOSTNAME_OFFSET UNITYSDK_OFFSET(0x1DAE4C90)
#define MONO_NET_CFPROXY_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1DAE4AF0)
#define MONO_NET_CFPROXY_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1DAE4E30)
#define MONO_NET_CFPROXY_GET_PROXYTYPE_OFFSET UNITYSDK_OFFSET(0x1DAE47B0)
#define MONO_NET_CFPROXY_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1DAE4950)

namespace Mono::Net
{
	inline static constexpr unsigned int CFProxy_TypeDefinitionIndex = 2415;

	class CFProxy : public ::System::Object
	{
	public:
		::Mono::Net::CFDictionary* settings; // 0x10
		static ::System::IntPtr* StaticGet_kCFProxyAutoConfigurationJavaScriptKey()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x99C0);
		}

		static ::System::IntPtr* StaticGet_kCFProxyTypeSOCKS()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x99C8);
		}

		static ::System::IntPtr* StaticGet_kCFProxyPortNumberKey()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x99D0);
		}

		static ::System::IntPtr* StaticGet_kCFProxyHostNameKey()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x99D8);
		}

		static ::System::IntPtr* StaticGet_kCFProxyTypeKey()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x99E0);
		}

		static ::System::IntPtr* StaticGet_kCFProxyTypeHTTPS()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x99E8);
		}

		static ::System::IntPtr* StaticGet_kCFProxyTypeAutoConfigurationURL()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x99F0);
		}

		static ::System::IntPtr* StaticGet_kCFProxyUsernameKey()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x99F8);
		}

		static ::System::IntPtr* StaticGet_kCFProxyTypeAutoConfigurationJavaScript()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x9A00);
		}

		static ::System::IntPtr* StaticGet_kCFProxyTypeFTP()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x9A08);
		}

		static ::System::IntPtr* StaticGet_kCFProxyTypeHTTP()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x9A10);
		}

		static ::System::IntPtr* StaticGet_kCFProxyAutoConfigurationURLKey()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x9A18);
		}

		static ::System::IntPtr* StaticGet_kCFProxyPasswordKey()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxy")->GetStaticField(0x9A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Mono::Net::CFDictionary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::CFDictionary*))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_CTOR_OFFSET))(this, a1);
		}

		static ::Mono::Net::CFProxyType CFProxyTypeToEnum(::System::IntPtr a1)
		{
			return ((::Mono::Net::CFProxyType(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_CFPROXYTYPETOENUM_OFFSET))(a1);
		}

		::System::IntPtr get_AutoConfigurationJavaScript()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONJAVASCRIPT_OFFSET))(this);
		}

		::System::IntPtr get_AutoConfigurationUrl()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_AUTOCONFIGURATIONURL_OFFSET))(this);
		}

		::System::String* get_HostName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_HOSTNAME_OFFSET))(this);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_PASSWORD_OFFSET))(this);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_PORT_OFFSET))(this);
		}

		::Mono::Net::CFProxyType get_ProxyType()
		{
			return ((::Mono::Net::CFProxyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_PROXYTYPE_OFFSET))(this);
		}

		::System::String* get_Username()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXY_GET_USERNAME_OFFSET))(this);
		}

	};
}
