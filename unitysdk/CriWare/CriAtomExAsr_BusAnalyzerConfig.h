#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	struct alignas(4) CriAtomExAsr_BusAnalyzerConfig
	{
		::System::Int32 interval; // 0x10
		::System::Int32 peakHoldTime; // 0x14
	};
}
