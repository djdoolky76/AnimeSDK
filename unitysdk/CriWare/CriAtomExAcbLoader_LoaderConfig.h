#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	struct alignas(4) CriAtomExAcbLoader_LoaderConfig
	{
		::System::Boolean shouldLoadAwbOnMemory; // 0x10
	};
}
