#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriAtomEx_SilentMode : ::System::Int32
	{
		Normal = 0,
		Stop = 1,
		Virtual = 2,
		VirtualRetrigger = 3,
	};
}
