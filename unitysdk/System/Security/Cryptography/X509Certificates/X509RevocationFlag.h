#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	enum class X509RevocationFlag : ::System::Int32
	{
		EndCertificateOnly = 0,
		EntireChain = 1,
		ExcludeRoot = 2,
	};
}
