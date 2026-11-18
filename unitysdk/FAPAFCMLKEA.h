#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FAPAFCMLKEA_TypeDefinitionIndex = 82475;

enum class FAPAFCMLKEA : ::System::Int32
{
	None = 0,
	PreGreatRange = 4,
	PostMissRange = 3,
	PreMissRange = 2,
	PrePerfectRange = 6,
	PostPerfectRange = 7,
	Perfect = 8,
	PostOut = 9,
	PreOut = 1,
	PostGreatRange = 5,
};
