#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	inline static constexpr unsigned int CriWarePS5_PortFlag_TypeDefinitionIndex = 40902;

	enum class CriWarePS5_PortFlag : ::System::UInt32
	{
		Restricted = 1,
		Passthrough = 2,
	};
}
