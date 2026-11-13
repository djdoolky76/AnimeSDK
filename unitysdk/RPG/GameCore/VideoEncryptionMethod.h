#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VideoEncryptionMethod_TypeDefinitionIndex = 15615;

	enum class VideoEncryptionMethod : ::System::Int32
	{
		ADX = 0,
		HCA = 1,
		AES_HCA = 2,
	};
}
