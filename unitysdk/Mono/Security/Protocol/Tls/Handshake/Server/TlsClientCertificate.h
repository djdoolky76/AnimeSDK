#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Tls/Handshake/HandshakeMessage.h"

namespace Mono::Security::Protocol::Tls { class Context; }
namespace Mono::Security::X509 { class X509CertificateCollection_8FF10F09B594C630; }
namespace Mono::Security::X509 { class X509Certificate_6FD3D162D0D30FF0; }

#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_CHECKCERTIFICATEUSAGE_OFFSET UNITYSDK_OFFSET(0x1F2C5BC0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_GET_HASCERTIFICATE_OFFSET UNITYSDK_OFFSET(0x1F2C50D0)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_PROCESSASSSL3_OFFSET UNITYSDK_OFFSET(0x1F2C5110)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_PROCESSASTLS1_OFFSET UNITYSDK_OFFSET(0x1F2C5120)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F2C4E70)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_VALIDATECERTIFICATES_OFFSET UNITYSDK_OFFSET(0x1F2C5340)
#define MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C4E40)

namespace Mono::Security::Protocol::Tls::Handshake::Server
{
	inline static constexpr unsigned int TlsClientCertificate_TypeDefinitionIndex = 2392;

	class TlsClientCertificate : public ::Mono::Security::Protocol::Tls::Handshake::HandshakeMessage
	{
	public:
		::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* clientCertificates; // 0x58

		::System::Void _ctor(::Mono::Security::Protocol::Tls::Context* context, ::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Tls::Context*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE__CTOR_OFFSET))(this, context, buffer);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_UPDATE_OFFSET))(this);
		}

		::System::Boolean get_HasCertificate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_GET_HASCERTIFICATE_OFFSET))(this);
		}

		::System::Void ProcessAsSsl3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_PROCESSASSSL3_OFFSET))(this);
		}

		::System::Void ProcessAsTls1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_PROCESSASTLS1_OFFSET))(this);
		}

		::System::Boolean checkCertificateUsage(::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0* cert)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Security::X509::X509Certificate_6FD3D162D0D30FF0*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_CHECKCERTIFICATEUSAGE_OFFSET))(this, cert);
		}

		::System::Void validateCertificates(::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630* certificates)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509CertificateCollection_8FF10F09B594C630*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_HANDSHAKE_SERVER_TLSCLIENTCERTIFICATE_VALIDATECERTIFICATES_OFFSET))(this, certificates);
		}
	};
}
