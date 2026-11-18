#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int GGMOACGNCCP_TypeDefinitionIndex = 81727;

enum class GGMOACGNCCP : ::System::Int32
{
	Normal = 1,
	Waiting = 0,
	StopTick = 3,
	Culled = 4,
	HalfTick = 2,
};
