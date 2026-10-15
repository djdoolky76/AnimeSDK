#pragma once
#include "unitysdk/unitysdk.h"

	struct alignas(4) GameplayWaveRenderer_NoiseWaveParams
	{
		::System::Single amplitude; // 0x10
		::System::Single baseFrequency; // 0x14
		::System::Single speed; // 0x18
		::System::Single spatialScale; // 0x1C
		::System::Single temporalScale; // 0x20
		::System::Single freqVariation; // 0x24
		::System::Single phaseVariation; // 0x28
	};
