#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcbLoader_LoaderConfig_TypeDefinitionIndex = 40997;

	struct alignas(4) CriAtomExAcbLoader_LoaderConfig
	{
		::System::Boolean shouldLoadAwbOnMemory; // 0x10
	};
}
