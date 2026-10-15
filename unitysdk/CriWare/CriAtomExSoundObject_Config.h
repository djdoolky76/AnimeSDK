#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExSoundObject_Config_TypeDefinitionIndex = 40065;

	struct alignas(4) CriAtomExSoundObject_Config
	{
		::System::Boolean enableVoiceLimitScope; // 0x10
		::System::Boolean enableCategoryCueLimitScope; // 0x11
	};
}
