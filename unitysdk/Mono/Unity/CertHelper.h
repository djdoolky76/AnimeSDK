#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Mono/Unity/UnityTls_unitytls_x509list_ref.h"

namespace System::Security::Cryptography::X509Certificates { class X509Certificate; }
namespace System::Security::Cryptography::X509Certificates { class X509CertificateCollection; }

#define MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x1CF9E600)
#define MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET UNITYSDK_OFFSET(0x1CF9E7C0)
#define MONO_UNITY_CERTHELPER_NATIVECHAINTOMANAGEDCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1CF9EAD0)

namespace Mono::Unity
{
	inline static constexpr unsigned int CertHelper_TypeDefinitionIndex = 2521;

	class CertHelper : public ::System::Object
	{
	public:
		static ::System::Void AddCertificatesToNativeChain(::PVOID nativeCertificateChain, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, ::PVOID errorState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATESTONATIVECHAIN_OFFSET))(nativeCertificateChain, certificates, errorState);
		}

		static ::System::Void AddCertificateToNativeChain(::PVOID nativeCertificateChain, ::System::Security::Cryptography::X509Certificates::X509Certificate* certificate, ::PVOID errorState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_ADDCERTIFICATETONATIVECHAIN_OFFSET))(nativeCertificateChain, certificate, errorState);
		}

		static ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* NativeChainToManagedCollection(::Mono::Unity::UnityTls_unitytls_x509list_ref nativeCertificateChain, ::PVOID errorState)
		{
			return ((::System::Security::Cryptography::X509Certificates::X509CertificateCollection*(*)(::Mono::Unity::UnityTls_unitytls_x509list_ref, ::PVOID))((::PBYTE)hIl2Cpp + MONO_UNITY_CERTHELPER_NATIVECHAINTOMANAGEDCOLLECTION_OFFSET))(nativeCertificateChain, errorState);
		}
	};
}
