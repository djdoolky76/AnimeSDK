#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int NapRenderEntityFlags_TypeDefinitionIndex = 27090;

enum class NapRenderEntityFlags : ::System::UInt32
{
	CollectRendererLayerEveryFrame = 512,
	IsVisibleInCurrentCam = 32768,
	IsFirstTimeCalculateRadian = 524288,
	HasRegularRenderer = 4194304,
	KeepOnRefresh = 1,
	IsAvatarParticle = 16,
	HasCharacterMaterial = 262144,
	ClipVerticesUnderClipPlane = 131072,
	NeedRenderRamp = 4,
	IsSimpleModel = 32,
	MainLightParamsOverriden = 2048,
	IsPreviewModel = 8192,
	IsAvatarParticleDirty = 16384,
	FixShadowCoverageOutOfFrustum = 8388608,
	HasValidMaterial = 67108864,
	HasNapCBRenderer = 2,
	IsValid = 1024,
	IgnoreDirectionalLightBlendWeight = 8,
	IsNapCbBound = 65536,
	IsRampPropertiesDirty = 64,
	HasUIMaterial = 128,
	IsVisible = 16777216,
	PerObjectShadowOn = 1,
	FixRed = 2097152,
	IsCurFrameVisible = 33554432,
	IsActive = 4096,
	UseCustomBlendedDirectionalLightSize = 1048576,
	DisableSphereCulling = 256,
};
