#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	enum class X509SubjectKeyIdentifierHashAlgorithm : ::System::Int32
	{
		Sha1 = 0,
		ShortSha1 = 1,
		CapiSha1 = 2,
	};
}
