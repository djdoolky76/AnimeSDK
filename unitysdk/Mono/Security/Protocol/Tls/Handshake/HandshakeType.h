#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Protocol::Tls::Handshake
{
	inline static constexpr unsigned int HandshakeType_TypeDefinitionIndex = 2391;

	enum class HandshakeType : ::System::Byte
	{
		HelloRequest = 0,
		ClientHello = 1,
		ServerHello = 2,
		Certificate = 11,
		ServerKeyExchange = 12,
		CertificateRequest = 13,
		ServerHelloDone = 14,
		CertificateVerify = 15,
		ClientKeyExchange = 16,
		Finished = 20,
		None = 255,
	};
}
