#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRendererFlags_TypeDefinitionIndex = 26715;

enum class NapRendererFlags : ::System::UInt32
{
	IsAvatarParticle = 32,
	SupportPerObjectShadow = 2,
	PropertyModeMaterial = 256,
	SkipRenderingLayerMaskCollection = 8192,
	IsVisible = 2048,
	IsVisibleInCurrentCam = 16384,
	HasUiMaterial = 128,
	PerRendererSetterIllegal = 4,
	IsAlive = 4096,
	IsHairShadow = 64,
	DisableCascadeShadow = 512,
	HasShadowProxyMaterial = 32768,
	SupportPartIDs = 65536,
	IsInstancing = 8,
	SkipClearMpb = 16,
	SupportNapCB = 1,
};
