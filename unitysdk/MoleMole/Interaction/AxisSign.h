#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Interaction
{
	inline static constexpr unsigned int AxisSign_TypeDefinitionIndex = 54475;

	enum class AxisSign : ::System::Int32
	{
		Yp = 2,
		Zp = 4,
		Xn = 1,
		Zn = 5,
		Yn = 3,
		None = -1,
		Xp = 0,
	};
}
