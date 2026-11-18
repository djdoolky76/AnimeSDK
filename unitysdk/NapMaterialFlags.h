#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapMaterialFlags_TypeDefinitionIndex = 26649;

enum class NapMaterialFlags : ::System::UInt32
{
	IsRampPropertiesDirty = 64,
	HasMatCapArray = 256,
	IsFaceShader = 8,
	LodNeedSwitchShader = 1024,
	SupportPerObjectShadow = 1,
	IsInstancing = 32,
	IsAvatarParticle = 512,
	SupportNapCB = 2,
	SupportCustomLightAxial = 2048,
	IsCharacterStandard = 16,
	IsUiShader = 128,
	IsCharacterShader = 4,
};
