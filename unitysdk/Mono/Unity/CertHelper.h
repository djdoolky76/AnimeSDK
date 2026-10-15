#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"
namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x1EF9FAD0)
#define MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x1EF9FCC0)
#define MONO_UNITY_CERTHELPER_NATIVECHAINTOMANAGEDCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1EFA0050)

namespace Mono::Unity
{
	inline static constexpr unsigned int CertHelper_TypeDefinitionIndex = 2347;

	class CertHelper : public ::System::Object
	{
	public:
		static ::System::Void AddCertificatesToNativeChain(::PVOID a1, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* a2, ::PVOID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddCertificateToNativeChain(::PVOID a1, ::System::Security::Cryptography::X509Certificates::X509Certificate* a2, ::PVOID a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET))(a1, a2, a3);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* NativeChainToManagedCollection(::Mono::Unity::UnityTls_unitytls_x509list_ref a1, ::PVOID a2)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::Mono::Unity::UnityTls_unitytls_x509list_ref, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_NATIVECHAINTOMANAGEDCOLLECTION_OFFSET))(a1, a2);
		}

	};
}
