#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security { class ASN1_B704B12AF883B8E0; }
namespace Mono::Security::X509 { class X509Certificate_6FD3D162D0D30FF0; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }

#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GETASN1_OFFSET UNITYSDK_OFFSET(0x1F8DB070)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1F8DC390)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_ASN1_OFFSET UNITYSDK_OFFSET(0x1F8DB060)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_AUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F8DC0C0)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1F8DC0D0)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1F8DC0F0)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_ISSUERNAME_OFFSET UNITYSDK_OFFSET(0x1F8DAE50)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1F8DC110)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x1F8DAE60)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1F8DC130)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1F8DAF60)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_UNAUTHENTICATEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F8DC360)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F8DC370)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_CERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1F8DC0E0)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_HASHNAME_OFFSET UNITYSDK_OFFSET(0x1F8DC100)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1F8DC120)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x1F8DC230)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1F8DC380)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8DA8B0)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F8DA910)
#define MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8DA790)

namespace Mono::Security
{
	inline static constexpr unsigned int PKCS7_820FF13D373237A3_SignerInfo_TypeDefinitionIndex = 2280;

	class PKCS7_820FF13D373237A3_SignerInfo : public ::System::Object
	{
	public:
		::System::String* hashAlgorithm; // 0x10
		::System::Collections::ArrayList* unauthenticatedAttributes; // 0x18
		::Il2CppArray<::System::Byte>* serial; // 0x20
		::Il2CppArray<::System::Byte>* signature; // 0x28
		::System::Collections::ArrayList* authenticatedAttributes; // 0x30
		::Il2CppArray<::System::Byte>* ski; // 0x38
		::System::String* issuer; // 0x40
		::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* x509; // 0x48
		::System::Security::Cryptography::AsymmetricAlgorithm* key; // 0x50
		::System::Byte version; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO__CTOR_1_OFFSET))(this, data);
		}

		::System::Void _ctor_2(::Mono::Security::ASN1_B704B12AF883B8E0* asn1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::ASN1_B704B12AF883B8E0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO__CTOR_2_OFFSET))(this, asn1);
		}

		::System::String* get_IssuerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_ISSUERNAME_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SerialNumber()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_SERIALNUMBER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_SubjectKeyIdentifier()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_SUBJECTKEYIDENTIFIER_OFFSET))(this);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* get_ASN1()
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_ASN1_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_AuthenticatedAttributes()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_AUTHENTICATEDATTRIBUTES_OFFSET))(this);
		}

		::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* get_Certificate()
		{
			return ((::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_CERTIFICATE_OFFSET))(this);
		}

		::System::Void set_Certificate(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_CERTIFICATE_OFFSET))(this, value);
		}

		::System::String* get_HashName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_HASHNAME_OFFSET))(this);
		}

		::System::Void set_HashName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_HASHNAME_OFFSET))(this, value);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_Key()
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::Security::Cryptography::AsymmetricAlgorithm* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::AsymmetricAlgorithm*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_KEY_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Signature()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_SIGNATURE_OFFSET))(this, value);
		}

		::System::Collections::ArrayList* get_UnauthenticatedAttributes()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_UNAUTHENTICATEDATTRIBUTES_OFFSET))(this);
		}

		::System::Byte get_Version()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_SET_VERSION_OFFSET))(this, value);
		}

		::Mono::Security::ASN1_B704B12AF883B8E0* GetASN1()
		{
			return ((::Mono::Security::ASN1_B704B12AF883B8E0*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GETASN1_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PKCS7_820FF13D373237A3_SIGNERINFO_GETBYTES_OFFSET))(this);
		}
	};
}
