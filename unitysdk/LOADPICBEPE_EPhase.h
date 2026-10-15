#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LOADPICBEPE_EPhase_TypeDefinitionIndex = 74207;

	enum class LOADPICBEPE_EPhase : ::System::Int32
	{
		Wait = 0,
		Ready = 1,
		Start = 2,
		End = 3,
		Finish = 4,
	};
