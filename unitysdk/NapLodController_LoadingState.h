#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapLodController_LoadingState_TypeDefinitionIndex = 82349;

enum class NapLodController_LoadingState : ::System::Int32
{
	Ready = 2,
	Loading = 1,
	Unload = 0,
};
