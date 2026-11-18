#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimSlowType_TypeDefinitionIndex = 53732;

	enum class CharacterAimSlowType : ::System::Int32
	{
		Collision = 1,
		Both = 2,
		AttachPoint = 0,
	};
}
