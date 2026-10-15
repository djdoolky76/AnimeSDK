#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	enum class CriWarePS4_AudioPortAttribute : ::System::Int32
	{
		Normal = 0,
		Restricted = 65536,
		MixToMain = 131072,
	};
}
