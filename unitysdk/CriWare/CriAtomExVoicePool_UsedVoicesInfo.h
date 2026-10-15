#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	struct alignas(4) CriAtomExVoicePool_UsedVoicesInfo
	{
		::System::Int32 numUsedVoices; // 0x10
		::System::Int32 numPoolVoices; // 0x14
	};
}
