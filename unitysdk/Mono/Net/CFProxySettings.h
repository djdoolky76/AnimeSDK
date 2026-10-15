#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Mono::Net { class CFDictionary; }

#define MONO_NET_CFPROXYSETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFC1190)
#define MONO_NET_CFPROXYSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFBE270)
#define MONO_NET_CFPROXYSETTINGS_GET_DICTIONARY_OFFSET UNITYSDK_OFFSET(0x1EFC1770)

namespace Mono::Net
{
	class CFProxySettings : public ::System::Object
	{
	public:
		::Mono::Net::CFDictionary* settings; // 0x10
		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigURLString()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxySettings")->GetStaticField(0xB9C0);
		}

		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPEnable()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxySettings")->GetStaticField(0xB9C8);
		}

		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPPort()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxySettings")->GetStaticField(0xB9D0);
		}

		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigJavaScript()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxySettings")->GetStaticField(0xB9D8);
		}

		static ::System::IntPtr* StaticGet_kCFNetworkProxiesProxyAutoConfigEnable()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxySettings")->GetStaticField(0xB9E0);
		}

		static ::System::IntPtr* StaticGet_kCFNetworkProxiesHTTPProxy()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Mono.Net", "CFProxySettings")->GetStaticField(0xB9E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Mono::Net::CFDictionary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Net::CFDictionary*))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_CTOR_OFFSET))(this, a1);
		}

		::Mono::Net::CFDictionary* get_Dictionary()
		{
			return ((::Mono::Net::CFDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFPROXYSETTINGS_GET_DICTIONARY_OFFSET))(this);
		}

	};
}
