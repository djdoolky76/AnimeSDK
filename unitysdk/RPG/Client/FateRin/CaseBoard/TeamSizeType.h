#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int TeamSizeType_TypeDefinitionIndex = 83595;

	enum class TeamSizeType : ::System::Int32
	{
		Single = 0,
		Double = 1,
		Triple = 2,
	};
}
