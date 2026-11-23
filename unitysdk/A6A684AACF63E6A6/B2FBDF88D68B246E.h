#pragma once
#include "unitysdk/unitysdk.h"

namespace A6A684AACF63E6A6
{
	inline static constexpr unsigned int B2FBDF88D68B246E_TypeDefinitionIndex = 15214;

	enum class B2FBDF88D68B246E : ::System::Int32
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
