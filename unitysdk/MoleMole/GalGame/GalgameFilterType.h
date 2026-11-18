#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalgameFilterType_TypeDefinitionIndex = 84660;

	enum class GalgameFilterType : ::System::Int32
	{
		None = 0,
		Recalling = 1,
		Connecting = 2,
		WhiteScreenShaking = 3,
	};
}
