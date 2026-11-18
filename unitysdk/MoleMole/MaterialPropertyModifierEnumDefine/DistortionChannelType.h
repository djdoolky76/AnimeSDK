#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int DistortionChannelType_TypeDefinitionIndex = 55686;

	enum class DistortionChannelType : ::System::Byte
	{
		B = 2,
		A = 3,
		RG = 4,
		R = 0,
		G = 1,
	};
}
