#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EDebugMode_TypeDefinitionIndex = 68430;

enum class EDebugMode : ::System::Int32
{
	ShowVertexColor = 4,
	None = 0,
	ShowVertexUV = 3,
	ShowVertexId = 1,
	ShowSegmentId = 2,
};
