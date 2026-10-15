#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriAtomExLatencyEstimator_Status : ::System::Int32
	{
		Stop = 0,
		Processing = 1,
		Done = 2,
		Error = 3,
	};
}
