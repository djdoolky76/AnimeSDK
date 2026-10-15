#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriAtomExPlayback_Status : ::System::Int32
	{
		Prep = 1,
		Playing = 2,
		Removed = 3,
	};
}
