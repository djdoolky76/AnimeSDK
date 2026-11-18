#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int AMLegIK_PelvisLegConstraint_TypeDefinitionIndex = 57189;

struct alignas(4) AMLegIK_PelvisLegConstraint
{
	::System::Single minKneeCandidate; // 0x10
	::System::Single maxReachIntervalMin; // 0x14
	::System::Single maxReachIntervalMax; // 0x18
	::System::Single maxReach; // 0x1C
	::System::Single horizontalDistSqr; // 0x20
	::System::Single thighToTargetY; // 0x24
};
