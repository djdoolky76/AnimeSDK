#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NapLodController_LoadingState.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int NapLodMeshLoadingState_TypeDefinitionIndex = 47453;

struct alignas(4) NapLodMeshLoadingState
{
	::NapLodController_LoadingState State; // 0x10
	::System::Byte _padding0[0x4];
	::Foundation::AssetRequestHandle RequestHandle; // 0x18
};
