#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_ShaderFeature_TypeDefinitionIndex = 27353;

	enum class ForwardRendererData_ShaderFeature : ::System::Int32
	{
		PerObjectShadow = 8,
		IsCharacterFace = 4,
		IsAvatarParticle = 1024,
		PropertyModeMaterial = 32768,
		IsSilhouette = 262144,
		SupportPartIDs = 33554432,
		HasMaterialID = 16,
		DisableCascadeShadow = 1048576,
		IsWeapon = 524288,
		IsTransparent = 128,
		IsShadowProxyShader = 16777216,
		LodNeedSwitchShader = 4194304,
		HasMatCapShader = 8192,
		IsUiShader = 4096,
		SupportCustomLightAxial = 8388608,
		IsCharacterEye = 32,
		SupportSimplify = 65536,
		SkipRenderingLayerMaskCollection = 2097152,
		SupportDitherWithOpt = 16384,
		IsInstancing = 512,
		SupportNapCB = 1,
		IsStencilShadowCaster = 2048,
		IsAvatarSimple = 256,
		IsCharacterShader = 2,
		HairOnlyDepthSwitch = 131072,
		IsCharacterStandard = 64,
	};
}
