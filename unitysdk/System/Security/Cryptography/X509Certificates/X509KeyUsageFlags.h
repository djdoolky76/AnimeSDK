#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	enum class X509KeyUsageFlags : ::System::Int32
	{
		None = 0,
		EncipherOnly = 1,
		CrlSign = 2,
		KeyCertSign = 4,
		KeyAgreement = 8,
		DataEncipherment = 16,
		KeyEncipherment = 32,
		NonRepudiation = 64,
		DigitalSignature = 128,
		DecipherOnly = 32768,
	};
}
