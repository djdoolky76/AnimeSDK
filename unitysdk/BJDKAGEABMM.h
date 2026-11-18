#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int BJDKAGEABMM_TypeDefinitionIndex = 34778;

enum class BJDKAGEABMM : ::System::Int32
{
	InDirty = 2,
	Normal = 0,
	InChange = 6,
	InGlobalQueue = 1,
	AfterChange = 0,
	AfterDirty = 4,
};
