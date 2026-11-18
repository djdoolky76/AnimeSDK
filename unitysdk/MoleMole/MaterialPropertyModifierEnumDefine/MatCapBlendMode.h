#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MatCapBlendMode_TypeDefinitionIndex = 45716;

	enum class MatCapBlendMode : ::System::Byte
	{
		Overlay = 2,
		Add = 1,
		AlphaBlended = 0,
	};
}
