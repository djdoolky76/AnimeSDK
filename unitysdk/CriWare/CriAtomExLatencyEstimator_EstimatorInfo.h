#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExLatencyEstimator_Status.h"

namespace CriWare
{
	struct alignas(4) CriAtomExLatencyEstimator_EstimatorInfo
	{
		::CriWare::CriAtomExLatencyEstimator_Status status; // 0x10
		::System::UInt32 estimated_latency; // 0x14
	};
}
