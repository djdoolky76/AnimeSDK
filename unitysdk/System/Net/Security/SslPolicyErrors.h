#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Security
{
	enum class SslPolicyErrors : ::System::Int32
	{
		None = 0,
		RemoteCertificateNotAvailable = 1,
		RemoteCertificateNameMismatch = 2,
		RemoteCertificateChainErrors = 4,
	};
}
