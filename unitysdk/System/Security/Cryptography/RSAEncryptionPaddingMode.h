#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	enum class RSAEncryptionPaddingMode : ::System::Int32
	{
		Pkcs1 = 0,
		Oaep = 1,
	};
}
