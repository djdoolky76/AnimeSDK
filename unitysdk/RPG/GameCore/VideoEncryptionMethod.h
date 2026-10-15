#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class VideoEncryptionMethod : ::System::Int32
	{
		ADX = 0,
		HCA = 1,
		AES_HCA = 2,
	};
}
