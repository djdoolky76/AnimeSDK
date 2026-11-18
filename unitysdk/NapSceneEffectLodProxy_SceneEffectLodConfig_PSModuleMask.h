#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapSceneEffectLodProxy_SceneEffectLodConfig_PSModuleMask_TypeDefinitionIndex = 27308;

enum class NapSceneEffectLodProxy_SceneEffectLodConfig_PSModuleMask : ::System::Int32
{
	Shape = 16,
	Emission = 8,
	Light = 64,
	SizeOverLifeTime = 2,
	Noise = 1,
	RotationOverLifeTime = 32,
	TextureSheet = 128,
	ColorOverLifeTime = 4,
};
