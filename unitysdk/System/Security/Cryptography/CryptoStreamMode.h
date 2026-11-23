#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoStreamMode_TypeDefinitionIndex = 10805;

	enum class CryptoStreamMode : ::System::Int32
	{
		Read = 0,
		Write = 1,
	};
}
