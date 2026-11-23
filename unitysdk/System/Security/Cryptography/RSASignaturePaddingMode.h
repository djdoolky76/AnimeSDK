#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSASignaturePaddingMode_TypeDefinitionIndex = 10658;

	enum class RSASignaturePaddingMode : ::System::Int32
	{
		Pkcs1 = 0,
		Pss = 1,
	};
}
