#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E20414261B1C0E7D_UpdateStepCount.h"
#include "unitysdk/E7F9C9491EE9F059/A1DD51B242BE0B4E.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int E20414261B1C0E7D_SerializedState_TypeDefinitionIndex = 14304;

struct alignas(4) E20414261B1C0E7D_SerializedState
{
	::E7F9C9491EE9F059::A1DD51B242BE0B4E lastUpdateType; // 0x10
	::E20414261B1C0E7D_UpdateStepCount playerUpdateStepCount; // 0x14
};
