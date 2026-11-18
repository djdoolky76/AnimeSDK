#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int SecondaryEmissionBlendMode_TypeDefinitionIndex = 79699;

	enum class SecondaryEmissionBlendMode : ::System::Byte
	{
		MulMask = 2,
		Mul = 1,
		Normal = 0,
	};
}
