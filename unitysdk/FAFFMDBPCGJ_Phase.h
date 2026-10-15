#pragma once
#include "unitysdk/unitysdk.h"
	enum class FAFFMDBPCGJ_Phase : ::System::Int32
	{
		None = 0,
		RecycleCancelledCells = 1,
		CollectFrameData = 2,
		ScanDirection = 3,
		ResolveDirectionChain = 4,
		ReleaseDirectionCells = 5,
		ApplyStrength = 6,
	};
