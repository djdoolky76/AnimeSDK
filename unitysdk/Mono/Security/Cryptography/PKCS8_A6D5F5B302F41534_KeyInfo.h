#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security::Cryptography
{
	inline static constexpr unsigned int PKCS8_A6D5F5B302F41534_KeyInfo_TypeDefinitionIndex = 2462;

	enum class PKCS8_A6D5F5B302F41534_KeyInfo : ::System::Int32
	{
		PrivateKey = 0,
		EncryptedPrivateKey = 1,
		Unknown = 2,
	};
}
