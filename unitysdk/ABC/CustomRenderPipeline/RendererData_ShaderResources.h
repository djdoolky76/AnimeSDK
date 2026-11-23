#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Shader; }

#define ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_SHADERRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::CustomRenderPipeline
{
	inline static constexpr unsigned int RendererData_ShaderResources_TypeDefinitionIndex = 16658;

	class RendererData_ShaderResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* gbufferLightingPS; // 0x10
		::UnityEngine::Shader* deferredDecalPS_PC; // 0x18
		::UnityEngine::Shader* deferredDecalPS_Mobile; // 0x20
		::UnityEngine::Shader* stencilDeferredPS; // 0x28
		::UnityEngine::Shader* copyDepthPS; // 0x30
		::UnityEngine::Shader* uberPostPS; // 0x38
		::UnityEngine::Shader* HK4EBloom; // 0x40
		::UnityEngine::Shader* screenSpaceShadowPS; // 0x48
		::UnityEngine::Shader* cameraMotionVectorsPS; // 0x50
		::UnityEngine::Shader* objectMotionVectorsPS; // 0x58
		::UnityEngine::Shader* temporalAAPS; // 0x60
		::UnityEngine::ComputeShader* dofCS; // 0x68
		::UnityEngine::Shader* dofCombinePS; // 0x70
		::UnityEngine::ComputeShader* motionBlurCS; // 0x78
		::UnityEngine::ComputeShader* colorGradingCS; // 0x80
		::UnityEngine::ComputeShader* giInitBufferShader; // 0x88
		::UnityEngine::ComputeShader* giProjectSkyShader; // 0x90
		::UnityEngine::ComputeShader* giRelightBrickshader; // 0x98
		::UnityEngine::ComputeShader* giRelightProbeShader; // 0xA0
		::UnityEngine::ComputeShader* giComputeVoxelShader; // 0xA8
		::UnityEngine::ComputeShader* giRelightVolumeShader; // 0xB0
		::UnityEngine::ComputeShader* giUpsampleSample; // 0xB8
		::UnityEngine::Shader* giLightingShader; // 0xC0
		::UnityEngine::ComputeShader* giAPVRelightProbeShader; // 0xC8
		::UnityEngine::ComputeShader* giAPVGenerateDataShader; // 0xD0
		::UnityEngine::Shader* giAPVLightingShader; // 0xD8
		::UnityEngine::Shader* interiorMaskShader; // 0xE0
		::UnityEngine::Shader* blendSSGIShader; // 0xE8
		::UnityEngine::Shader* historyValidatePS; // 0xF0
		::UnityEngine::Shader* bentNormalPS; // 0xF8
		::UnityEngine::ComputeShader* bentNormalCS; // 0x100
		::UnityEngine::Shader* ssgiPS; // 0x108
		::UnityEngine::ComputeShader* ssgiCS; // 0x110
		::UnityEngine::ComputeShader* ssgiProbeShader; // 0x118
		::UnityEngine::ComputeShader* volumetricFogGenerateShader; // 0x120
		::UnityEngine::Shader* volumetricFogApplyShader; // 0x128
		::UnityEngine::ComputeShader* lightCLusterBuildShader; // 0x130
		::UnityEngine::Shader* ssaoPS; // 0x138
		::UnityEngine::Shader* reflectionProbePS; // 0x140
		::UnityEngine::Shader* transmittanceLut; // 0x148
		::UnityEngine::Shader* multipleScatteringLut; // 0x150
		::UnityEngine::Shader* skyViewLut; // 0x158
		::UnityEngine::Shader* aerialPerspectiveLut; // 0x160
		::UnityEngine::Shader* ssrPS; // 0x168
		::UnityEngine::Shader* blitPS; // 0x170
		::UnityEngine::Shader* gaussianFilterPS; // 0x178
		::UnityEngine::ComputeShader* contactShadowsCS; // 0x180
		::UnityEngine::ComputeShader* ssprCS; // 0x188
		::UnityEngine::Shader* ssprPS; // 0x190
		::UnityEngine::Shader* lensFlarePS; // 0x198
		::UnityEngine::Shader* lightShaftPS; // 0x1A0
		::UnityEngine::Shader* radialBlurPS; // 0x1A8
		::UnityEngine::Shader* uiDownSampleBlurPS; // 0x1B0
		::UnityEngine::Shader* uiDefaultPS; // 0x1B8
		::UnityEngine::ComputeShader* capsuleAOCullingCS; // 0x1C0
		::UnityEngine::Shader* shadowMaskPS; // 0x1C8
		::UnityEngine::ComputeShader* shadowFilteringCS; // 0x1D0
		::UnityEngine::Shader* shadowMapDecompressPS; // 0x1D8
		::UnityEngine::Shader* dualShadowMapDecompressPS; // 0x1E0
		::UnityEngine::ComputeShader* buildHIZCS; // 0x1E8
		::UnityEngine::Shader* areaLightVisualizePS; // 0x1F0
		::UnityEngine::ComputeShader* grassCS; // 0x1F8
		::UnityEngine::ComputeShader* grass2CS; // 0x200
		::UnityEngine::ComputeShader* gpuDrivenTerrainOCCS; // 0x208
		::UnityEngine::ComputeShader* terrainVTUpdateCS; // 0x210
		::UnityEngine::ComputeShader* astcEncodeCS; // 0x218
		::UnityEngine::ComputeShader* astcEncodeLDSCS; // 0x220
		::UnityEngine::ComputeShader* bcEncodeCS; // 0x228
		::UnityEngine::ComputeShader* etc2EncodeCS; // 0x230
		::UnityEngine::ComputeShader* foliageWindCS; // 0x238
		::UnityEngine::ComputeShader* volumeWindCS; // 0x240
		::UnityEngine::Shader* volumeWindDebugViewPS; // 0x248
		::UnityEngine::Shader* foliageInteractPS; // 0x250
		::UnityEngine::Shader* waterInteractPS; // 0x258
		::UnityEngine::ComputeShader* shallowWaterInteractCS; // 0x260
		::UnityEngine::Shader* hizOCPS; // 0x268
		::UnityEngine::ComputeShader* GpuParticleCS; // 0x270
		::UnityEngine::ComputeShader* leafParticleSystemCS; // 0x278
		::UnityEngine::Shader* lowResTransparentPS; // 0x280
		::UnityEngine::ComputeShader* virtualShadowCS; // 0x288
		::UnityEngine::ComputeShader* gtaoCS; // 0x290
		::UnityEngine::Shader* characterMaskPS; // 0x298
		::UnityEngine::Shader* downSampleNormalPS; // 0x2A0
		::UnityEngine::Shader* heightfieldDeformationPS; // 0x2A8
		::UnityEngine::ComputeShader* heightfieldDeformationCS; // 0x2B0
		::UnityEngine::ComputeShader* superResolutionInputAdjustmentCS; // 0x2B8
		::UnityEngine::Shader* superResolutionGenMasksPS; // 0x2C0
		::UnityEngine::ComputeShader* fsr3PrepareInputsCS; // 0x2C8
		::UnityEngine::ComputeShader* fsr3LumaPyramidCS; // 0x2D0
		::UnityEngine::ComputeShader* fsr3ShadingChangePyramidCS; // 0x2D8
		::UnityEngine::ComputeShader* fsr3ShadingChangeCS; // 0x2E0
		::UnityEngine::ComputeShader* fsr3PrepareReactivityCS; // 0x2E8
		::UnityEngine::ComputeShader* fsr3LumaInstabilityCS; // 0x2F0
		::UnityEngine::ComputeShader* fsr3AccumulateCS; // 0x2F8
		::UnityEngine::ComputeShader* fsr3RcasCS; // 0x300
		::UnityEngine::ComputeShader* gpuHangCS; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CUSTOMRENDERPIPELINE_RENDERERDATA_SHADERRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
