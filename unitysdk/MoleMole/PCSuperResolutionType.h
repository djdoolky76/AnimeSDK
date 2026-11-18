#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PCSuperResolutionType_TypeDefinitionIndex = 64578;

	enum class PCSuperResolutionType : ::System::Int32
	{
		None = 0,
		XeSS = 3,
		DLSS = 1,
		FSR = 2,
	};
}
