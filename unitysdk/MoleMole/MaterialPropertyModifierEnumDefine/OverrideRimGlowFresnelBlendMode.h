#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int OverrideRimGlowFresnelBlendMode_TypeDefinitionIndex = 84718;

	enum class OverrideRimGlowFresnelBlendMode : ::System::Byte
	{
		Mul = 2,
		Blend = 1,
		Add = 0,
	};
}
