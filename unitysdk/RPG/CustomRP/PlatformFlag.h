#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int PlatformFlag_TypeDefinitionIndex = 37651;

	enum class PlatformFlag : ::System::UInt64
	{
		None = 0,
		ForceDisableOC = 1,
		DisableSRPBatcher = 2,
		DummyOpaqueDepthDraw = 4,
		BuggyCpuSkinning = 8,
		SSBODynamicIndex = 16,
		DisableInputAttachmentDecal = 32,
		VulkanStencilTest = 64,
		RenderPassSplitInMaliVulkan = 128,
		BufferGLESUpdateTrick = 256,
		GLESBuggleDrawBeforeIndirectDraw = 512,
		VulkanRBAConfigFile = 1024,
		SharedVariableTrickGLES = 2048,
		DisableInputAttachmentDecalUseDepth = 4096,
		DisableVKStaticUBO = 8192,
		DisableDepthInputAttachmentForSoftParticles = 16384,
		DisableGrassGPUDriven = 32768,
		ForceShaderQualityLow = 65536,
		VulkanDynamicVertexStateConfigFile = 131072,
		DisableTexSDF = 262144,
		ForceEnableRenderPassSplitInMaliVulkanFollowQuality = 524288,
		DisableDepthTexCopy = 1048576,
		DisableVulkanIndirectDrawCount = 2097152,
		MaxSkinnedMeshCountGlobal = 4194304,
		CloseVkPreTransform = 8388608,
		DisableNewComputeSkinning = 16777216,
		ForceAdaUseTexture = 33554432,
		DisablePerDraw = 67108864,
		CloseVKShaderModuleCache = 134217728,
		CharAndroidLowQualityForMediumQuality = 268435456,
		DisableSkipDrawWhenLoading = 536870912,
		IndirectDrawVertexIDOffset = 1073741824,
		ForceForwardCharEmiss = 2147483648,
		AndroidVKTangent1BarrierPre = 4294967296,
		VulkanEnableDynamicRendering = 8589934592,
		VulkanDisableClearUIAttachmentOpt = 17179869184,
	};
}
