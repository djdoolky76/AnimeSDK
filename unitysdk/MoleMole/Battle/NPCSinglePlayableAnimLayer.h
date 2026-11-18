#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int NPCSinglePlayableAnimLayer_TypeDefinitionIndex = 55239;

	enum class NPCSinglePlayableAnimLayer : ::System::Int32
	{
		UpperBody = 1,
		Base = 0,
		BlendShape = 2,
		Count = 4,
		Eyes = 3,
	};
}
