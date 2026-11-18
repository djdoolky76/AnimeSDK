#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int PropertyModifyFunction_TypeDefinitionIndex = 72239;

	enum class PropertyModifyFunction : ::System::Int32
	{
		Mul = 2,
		Mod = 6,
		Unknow = 0,
		Rand = 5,
		Add = 1,
		Div = 4,
		Replace = 3,
	};
}
