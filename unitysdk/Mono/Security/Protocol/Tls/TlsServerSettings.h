#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/ClientCertificateType.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509CertificateCollection_8FF10F09B594C630; }
namespace System { class String; }
namespace System::Security::Cryptography { class RSA; }

#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x1FBC6500)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATERSA_OFFSET UNITYSDK_OFFSET(0x1FBC6480)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1FBC6460)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATETYPES_OFFSET UNITYSDK_OFFSET(0x1FBC6520)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_DISTINGUISEDNAMES_OFFSET UNITYSDK_OFFSET(0x1FBC6540)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_RSAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1FBC6490)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_SERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1FBC6440)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_SIGNEDPARAMS_OFFSET UNITYSDK_OFFSET(0x1FBC64E0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATEREQUEST_OFFSET UNITYSDK_OFFSET(0x1FBC6510)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1FBC6470)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATETYPES_OFFSET UNITYSDK_OFFSET(0x1FBC6530)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_DISTINGUISEDNAMES_OFFSET UNITYSDK_OFFSET(0x1FBC6550)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_RSAPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1FBC64C0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_SERVERKEYEXCHANGE_OFFSET UNITYSDK_OFFSET(0x1FBC6450)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_SIGNEDPARAMS_OFFSET UNITYSDK_OFFSET(0x1FBC64F0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_UPDATECERTIFICATERSA_OFFSET UNITYSDK_OFFSET(0x1FBC6570)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC6560)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int TlsServerSettings_TypeDefinitionIndex = 2387;

	class TlsServerSettings : public ::System::Object
	{
	public:
		::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>* certificateTypes; // 0x10
		::Il2CppArray<::System::Byte>* signedParams; // 0x18
		::System::Security::Cryptography::RSAParameters rsaParameters; // 0x20
		::Il2CppArray<::System::String*>* distinguisedNames; // 0x60
		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* certificates; // 0x68
		::System::Security::Cryptography::RSA* certificateRSA; // 0x70
		::System::Boolean certificateRequest; // 0x78
		::System::Boolean serverKeyExchange; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ServerKeyExchange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_SERVERKEYEXCHANGE_OFFSET))(this);
		}

		::System::Void set_ServerKeyExchange(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_SERVERKEYEXCHANGE_OFFSET))(this, value);
		}

		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* get_Certificates()
		{
			return ((::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATES_OFFSET))(this);
		}

		::System::Void set_Certificates(::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATES_OFFSET))(this, value);
		}

		::System::Security::Cryptography::RSA* get_CertificateRSA()
		{
			return ((::System::Security::Cryptography::RSA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATERSA_OFFSET))(this);
		}

		::System::Security::Cryptography::RSAParameters get_RsaParameters()
		{
			return ((::System::Security::Cryptography::RSAParameters(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_RSAPARAMETERS_OFFSET))(this);
		}

		::System::Void set_RsaParameters(::System::Security::Cryptography::RSAParameters value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RSAParameters))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_RSAPARAMETERS_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_SignedParams()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_SIGNEDPARAMS_OFFSET))(this);
		}

		::System::Void set_SignedParams(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_SIGNEDPARAMS_OFFSET))(this, value);
		}

		::System::Boolean get_CertificateRequest()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATEREQUEST_OFFSET))(this);
		}

		::System::Void set_CertificateRequest(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATEREQUEST_OFFSET))(this, value);
		}

		::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>* get_CertificateTypes()
		{
			return ((::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_CERTIFICATETYPES_OFFSET))(this);
		}

		::System::Void set_CertificateTypes(::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Mono::Security::Protocol::Tls::Handshake::ClientCertificateType>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_CERTIFICATETYPES_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_DistinguisedNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_GET_DISTINGUISEDNAMES_OFFSET))(this);
		}

		::System::Void set_DistinguisedNames(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_SET_DISTINGUISEDNAMES_OFFSET))(this, value);
		}

		::System::Void UpdateCertificateRSA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSERVERSETTINGS_UPDATECERTIFICATERSA_OFFSET))(this);
		}
	};
}
