#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
namespace Mono::Security::Interface { class MonoTlsProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CCTOR_OFFSET UNITYSDK_OFFSET(0x2027C3A0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CREATEDEFAULTPROVIDERIMPL_OFFSET UNITYSDK_OFFSET(0x2027BB40)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x2027B060)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET UNITYSDK_OFFSET(0x20273E10)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_OFFSET UNITYSDK_OFFSET(0x2027B160)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEPROVIDERREGISTRATION_OFFSET UNITYSDK_OFFSET(0x2027B5A0)
#define MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET UNITYSDK_OFFSET(0x2027BC30)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MonoTlsProviderFactory_TypeDefinitionIndex = 2444;

	class MonoTlsProviderFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>** StaticGet_providerCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Guid, ::Mono::Security::Interface::MonoTlsProvider*>**)UnitySDK::FromName("Mono.Net.Security", "MonoTlsProviderFactory")->GetStaticField(0x28100);
		}

		static ::Mono::Security::Interface::MonoTlsProvider** StaticGet_defaultProvider()
		{
			return (::Mono::Security::Interface::MonoTlsProvider**)UnitySDK::FromName("Mono.Net.Security", "MonoTlsProviderFactory")->GetStaticField(0x28108);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::System::Guid, ::System::String*>*>** StaticGet_providerRegistration()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::System::Guid, ::System::String*>*>**)UnitySDK::FromName("Mono.Net.Security", "MonoTlsProviderFactory")->GetStaticField(0x28110);
		}

		static ::System::Object** StaticGet_locker()
		{
			return (::System::Object**)UnitySDK::FromName("Mono.Net.Security", "MonoTlsProviderFactory")->GetStaticField(0x28118);
		}

		static ::System::Guid* StaticGet_UnityTlsId()
		{
			return (::System::Guid*)UnitySDK::FromName("Mono.Net.Security", "MonoTlsProviderFactory")->GetStaticField(0x8310);
		}

		static ::System::Guid* StaticGet_LegacyId()
		{
			return (::System::Guid*)UnitySDK::FromName("Mono.Net.Security", "MonoTlsProviderFactory")->GetStaticField(0x8320);
		}

		static ::System::Boolean* StaticGet_initialized()
		{
			return (::System::Boolean*)UnitySDK::FromName("Mono.Net.Security", "MonoTlsProviderFactory")->GetStaticField(0x8330);
		}

		static ::System::Guid* StaticGet_AppleTlsId()
		{
			return (::System::Guid*)UnitySDK::FromName("Mono.Net.Security", "MonoTlsProviderFactory")->GetStaticField(0x8334);
		}

		static ::System::Guid* StaticGet_BtlsId()
		{
			return (::System::Guid*)UnitySDK::FromName("Mono.Net.Security", "MonoTlsProviderFactory")->GetStaticField(0x8344);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CCTOR_OFFSET))();
		}

		static ::Mono::Security::Interface::MonoTlsProvider* GetProviderInternal()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDERINTERNAL_OFFSET))();
		}

		static ::System::Void InitializeInternal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEINTERNAL_OFFSET))();
		}

		static ::Mono::Security::Interface::MonoTlsProvider* LookupProvider(::System::String* a1, ::System::Boolean a2)
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_LOOKUPPROVIDER_OFFSET))(a1, a2);
		}

		static ::System::Void InitializeProviderRegistration()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_INITIALIZEPROVIDERREGISTRATION_OFFSET))();
		}

		static ::Mono::Security::Interface::MonoTlsProvider* CreateDefaultProviderImpl()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_CREATEDEFAULTPROVIDERIMPL_OFFSET))();
		}

		static ::Mono::Security::Interface::MonoTlsProvider* GetProvider()
		{
			return ((::Mono::Security::Interface::MonoTlsProvider*(*)())((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MONOTLSPROVIDERFACTORY_GETPROVIDER_OFFSET))();
		}

	};
}
