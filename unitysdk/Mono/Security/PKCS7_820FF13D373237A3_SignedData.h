#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace Mono::Security { class PKCS7_820FF13D373237A3_ContentInfo; }
namespace Mono::Security { class PKCS7_820FF13D373237A3_SignerInfo; }
namespace Mono::Security::X509 { class X509CertificateCollection_8FF10F09B594C630; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }

#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GETASN1_OFFSET UNITYSDK_OFFSET(0x1F7FDED0)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1F7FFA70)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1F7FDEC0)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1F7FF2F0)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_CONTENTINFO_OFFSET UNITYSDK_OFFSET(0x1F7FF300)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_CRLS_OFFSET UNITYSDK_OFFSET(0x1F7FF310)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1F7FF320)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_SIGNERINFO_OFFSET UNITYSDK_OFFSET(0x1F7FF330)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_USEAUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F7FF360)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F7FF340)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_OIDTONAME_OFFSET UNITYSDK_OFFSET(0x1F7FDD10)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1F7FDEA0)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_SET_USEAUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F7FF370)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F7FF350)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_VERIFYSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1F7FF380)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7FD530)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F7FD590)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7FD360)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_820FF13D373237A3_SignedData_TypeDefinitionIndex = 2279;

	class PKCS7_820FF13D373237A3_SignedData : public ::System::Object
	{
	public:
		::Mono::Security::PKCS7_820FF13D373237A3_SignerInfo* signerInfo; // 0x10
		::Mono::Security::PKCS7_820FF13D373237A3_ContentInfo* contentInfo; // 0x18
		::System::String* hashAlgorithm; // 0x20
		::System::Collections::ArrayList* crls; // 0x28
		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* certs; // 0x30
		::System::Boolean mda; // 0x38
		::System::Boolean signed_; // 0x39
		::System::Byte version; // 0x3A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::Mono::Security::ASN1_B704B12AF883B8E0* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA__CTOR_2_OFFSET))(this, asn1);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* get_ASN1()
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_ASN1_OFFSET))(this);
		}

		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_CERTIFICATES_OFFSET))(this);
		}

		::Mono::Security::PKCS7_820FF13D373237A3_ContentInfo* get_ContentInfo()
		{
			return ((::Mono::Security::PKCS7_820FF13D373237A3_ContentInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_CONTENTINFO_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_Crls()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_CRLS_OFFSET))(this);
		}

		::System::String* get_HashName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_HASHNAME_OFFSET))(this);
		}

		::System::Void set_HashName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_SET_HASHNAME_OFFSET))(this, value);
		}

		::Mono::Security::PKCS7_820FF13D373237A3_SignerInfo* get_SignerInfo()
		{
			return ((::Mono::Security::PKCS7_820FF13D373237A3_SignerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_SIGNERINFO_OFFSET))(this);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_SET_VERSION_OFFSET))(this, value);
		}

		::System::Boolean get_UseAuthenticatedAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GET_USEAUTHENTICATEDATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_UseAuthenticatedAttributes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_SET_USEAUTHENTICATEDATTRIBUTES_OFFSET))(this, value);
		}

		::System::Boolean VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm* aa)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_VERIFYSIGNATURE_OFFSET))(this, aa);
		}

		::System::String* OidToName(::System::String* oid)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_OIDTONAME_OFFSET))(this, oid);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* GetASN1()
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GETASN1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNEDDATA_GETBYTES_OFFSET))(this);
		}
	};
}
