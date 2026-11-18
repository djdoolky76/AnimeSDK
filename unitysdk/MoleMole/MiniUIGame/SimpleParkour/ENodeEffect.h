#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MiniUIGame::SimpleParkour
{
	inline static constexpr unsigned int ENodeEffect_TypeDefinitionIndex = 52184;

	enum class ENodeEffect : ::System::Int32
	{
		FadeOut = 2,
		FadeIn = 1,
		None = 0,
	};
}
