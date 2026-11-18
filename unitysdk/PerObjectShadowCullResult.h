#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PerObjectShadowCullResult_TypeDefinitionIndex = 26894;

enum class PerObjectShadowCullResult : ::System::UInt32
{
	EntityPerObjectShadowOff = 6,
	EntityInvalid = 2,
	EntityIsNotActive = 7,
	Uninitialized = 0,
	Success = 1,
	EntityOutOfMaxDistance = 4,
	ReachDisableShadowDistance = 5,
	OutOfAtlas = 12,
	RenderersInvisible = 9,
	EntityIsSimpleModel = 3,
	OutOfFrustum = 10,
	EntityCBufferIsNull = 8,
	OutOfMaxCount = 11,
};
