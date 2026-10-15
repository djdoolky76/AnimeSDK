#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int DHBOGGBEMFF_PVSState_TypeDefinitionIndex = 49128;

	enum class DHBOGGBEMFF_PVSState : ::System::Int32
	{
		Culled = 0,
		NotCulled = 1,
		Unkown = 2,
		NoPVS = 3,
		Count = 4,
	};
