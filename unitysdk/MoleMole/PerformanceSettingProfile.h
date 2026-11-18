#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_EntityCreate.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectMisc_ZKReward.h"
#include "unitysdk/MoleMole/ECrowdShadowFineness.h"
#include "unitysdk/MoleMole/FrameRateInterpolateType.h"
#include "unitysdk/MoleMole/InLevelNPCCrowdLevel.h"
#include "unitysdk/MoleMole/NapAnisotropicSamplingType.h"
#include "unitysdk/MoleMole/PerformanceSettingProfile_ENPCOmitLevel.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ENapGIQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPShaderQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSDOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TAAQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TransparentMatQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EWaterGenQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/EWaterInteractQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/GpuGrassShadowType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/RTXAOQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VolumetricCloudV2Quality.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x15ACF780)

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingProfile_TypeDefinitionIndex = 57996;

	class PerformanceSettingProfile : public ::System::Object
	{
	public:
		// static const ::System::Int32 k_MaxLayers = 0x20; // 0x0
		::Il2CppArray<::MoleMole::ECrowdShadowFineness>* CrowdShadowFineness; // 0x10
		::MoleMole::Config::ConfigViewObjectMisc_EntityCreate Vo_EntityCreate; // 0x18
		::Il2CppArray<::System::Single>* ScreenCullingRatio; // 0x38
		::Il2CppArray<::System::Single>* CrowdCameraLODDistances; // 0x40
		::Il2CppArray<::System::Single>* CrowdLODDistances; // 0x48
		::System::Boolean EnableAdaptiveStrategies; // 0x50
		::System::Boolean napSubpassOpt; // 0x51
		::System::Boolean ShadowAfterGBuffer; // 0x52
		::System::Boolean needExtraDownSampleForFrostedGlass; // 0x53
		::System::Single RTXGIResolutionScalePFScene; // 0x54
		::UnityEngine::NAPRenderPipeline0::SSDOQuality ssdoQuality; // 0x58
		::System::Single ScreenLengthCullingBias; // 0x5C
		::UnityEngine::Rendering::Universal::VolumetricCloudV2Quality VolumetricCloudV2Quality; // 0x60
		::System::Boolean DisableSceneGlare; // 0x64
		::System::Boolean UseSceneExtraSimpleMesh; // 0x65
		::System::Boolean WaterGen; // 0x66
		::System::Boolean WaterGenBeforeGbuffer; // 0x67
		::System::Single CapsuleAORenderScale; // 0x68
		::System::Boolean useFPTLLightCulling; // 0x6C
		::System::Boolean enableSceneV2RainRipple; // 0x6D
		::System::Boolean useBakedDecal; // 0x6E
		::System::Byte _padding0[0x1];
		::System::Single materialLODDistRatio; // 0x70
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQuality; // 0x74
		::System::Single FrontFaceCullingToleranceBias; // 0x78
		::System::Int32 MaxAnisotropicSamplingLevel; // 0x7C
		::UnityEngine::Vector4 SceneSampleTextureBias; // 0x80
		::System::UInt32 PLSSkipUpdateFrames; // 0x90
		::System::Single materialLODDistShadow; // 0x94
		::System::UInt32 PLSMaxShadowedLightCount; // 0x98
		::System::Boolean EnableForwardGBuffer; // 0x9C
		::System::Boolean ShadowHizCulling; // 0x9D
		::System::Boolean forceUseSMAAFor3DUICameraInLowMemoryDevice; // 0x9E
		::System::Boolean napSubpassOptMore; // 0x9F
		::System::Int32 gpuGrassMeshLodBias; // 0xA0
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality VolumetricCloudQuality; // 0xA4
		::System::Single oneLightPerPassOptScreenRatioSqr; // 0xA8
		::System::Boolean SeparateAfterGbufferPass; // 0xAC
		::System::Boolean GbufferPreZOpt; // 0xAD
		::System::Boolean UsePerobjectShadowProxy; // 0xAE
		::System::Boolean enableParticleLightCountOptimize; // 0xAF
		::System::Single gpuGrassDistanceCullingBias; // 0xB0
		::System::Single taauScale; // 0xB4
		::System::Single StreamingKeepDistance; // 0xB8
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQualityPFScene; // 0xBC
		::System::Single PowerCostThreshhold; // 0xC0
		::System::Int32 LightLoopThreadNum; // 0xC4
		::MoleMole::FrameRateInterpolateType FrameRateInterpolate; // 0xC8
		::System::Single PLSLocalLightCastShadowDistance; // 0xCC
		::System::Single LightLoopLogBase; // 0xD0
		::System::Int32 StreamingReduceLevel; // 0xD4
		::System::Single materialLODDistOutline; // 0xD8
		::System::Int32 SceneMaxFurLayer; // 0xDC
		::System::Boolean PLSEnable; // 0xE0
		::System::Boolean disableParallaxMapForDecal; // 0xE1
		::System::Boolean enableInteractiveLeaves; // 0xE2
		::System::Boolean UseExtraSimpleMesh; // 0xE3
		::System::Single StreamingBudget; // 0xE4
		::System::Single SceneEtherEffectObjectFadeDistance; // 0xE8
		::UnityEngine::Vector4 HizCullingParams; // 0xEC
		::System::Single FrontFaceCullingBias; // 0xFC
		::UnityEngine::Rendering::Universal::EWaterGenQuality WaterGenQualityPFScene; // 0x100
		::System::Int32 StreamingTextureMaster; // 0x104
		::UnityEngine::Vector2 RecommendRenderResolution; // 0x108
		::System::Boolean LightLoopInitOpt; // 0x110
		::System::Boolean StreamingMipmapsActive; // 0x111
		::System::Boolean DitherOpt; // 0x112
		::System::Boolean napDeferredOpt; // 0x113
		::System::Single materialLODDistCharacterSimplifyTransition; // 0x114
		::System::UInt32 PLSMaxStaticUpdatesPerFrame; // 0x118
		::System::Single RTXGIRayBudget; // 0x11C
		::System::Single RTXGIResolutionScale; // 0x120
		::MoleMole::InLevelNPCCrowdLevel InLevelNPCCrowd; // 0x124
		::UnityEngine::Rendering::Universal::LightLodQuality LightLodQuality; // 0x128
		::MoleMole::NapAnisotropicSamplingType AnisotropicSamplingType; // 0x12C
		::System::Boolean DisableStreamingMipmapsUseVisibility; // 0x130
		::System::Boolean LodGroupDisableCulled; // 0x131
		::System::Byte _padding1[0x2];
		::UnityEngine::NAPRenderPipeline0::ENapGIQuality NapGIQuality; // 0x134
		::System::Single EffectNoTickDistance; // 0x138
		::System::Boolean SampleIBLOpt; // 0x13C
		::System::Boolean DisableCapsuleAOInBattle; // 0x13D
		::System::Boolean forceUseBakedDecalForSpecialScene; // 0x13E
		::System::Boolean EnableSceneCrowd; // 0x13F
		::System::Boolean disableDecalHeightMap; // 0x140
		::System::Boolean HideSceneSmallObject; // 0x141
		::System::Boolean napPassOpt2; // 0x142
		::System::Boolean EnableForwardGBufferPFScene; // 0x143
		::MoleMole::PerformanceSettingProfile_ENPCOmitLevel NpcOmitLevel; // 0x144
		::System::Int32 RTXGIQualityPresetPFScene; // 0x148
		::UnityEngine::Rendering::Universal::RTXAOQuality rtxAOQuality; // 0x14C
		::System::Single CharacterSampleTextureBias; // 0x150
		::UnityEngine::NAPRenderPipeline0::SSAOQuality ssaoMaxQuality; // 0x154
		::System::Single PLSNoSkipDistance; // 0x158
		::System::Boolean DisableDistortion; // 0x15C
		::System::Boolean EnableLoopSubdivision; // 0x15D
		::System::Boolean LightLoopOpt; // 0x15E
		::System::Boolean NapPassOpt; // 0x15F
		::UnityEngine::NAPRenderPipeline0::TransparentMatQuality TransparentMatQuality; // 0x160
		::System::Single materialLODDistCharacterSimplify; // 0x164
		::MoleMole::Config::ConfigViewObjectMisc_ZKReward Vo_ZKReward; // 0x168
		::UnityEngine::Rendering::Universal::EWaterInteractQuality WaterInteractionQuality; // 0x174
		::System::Single PLSDynamicUpdateDistance; // 0x178
		::System::Single EffectHalfTickDistance; // 0x17C
		::System::Single decalFadeDistanceBias; // 0x180
		::System::Single SceneFurLayerCountScale; // 0x184
		::UnityEngine::NAPRenderPipeline0::NAPShaderQuality NAPShaderQuality; // 0x188
		::System::Single SceneMechanismCullDistanceBias; // 0x18C
		::UnityEngine::Rendering::Universal::GpuGrassShadowType gpuGrassShadowType; // 0x190
		::System::Int32 cpuQualityLevel; // 0x194
		::System::Boolean WaterGenPFScene; // 0x198
		::System::Boolean oneLightPerPassOpt; // 0x199
		::System::Boolean LightLoopAfterGbuffer; // 0x19A
		::System::Boolean DisableGbufferCB; // 0x19B
		::System::Int32 perObjectShadowResolution; // 0x19C
		::UnityEngine::Vector4 HizShadowCullingParams; // 0x1A0
		::System::Single materialLODDistMirrorReflection; // 0x1B0
		::System::Int32 RTXGIQualityPreset; // 0x1B4
		::System::Int32 ShadowSampleCount; // 0x1B8
		::System::Int32 perObjectShadowMaxCount; // 0x1BC
		::System::Single RTXGIRayBudgetPFScene; // 0x1C0
		::System::Int32 LightLoopLog2ClusterNum; // 0x1C4
		::UnityEngine::NAPRenderPipeline0::TAAQuality TAAQuality; // 0x1C8
		::System::Single LightFadeLodBias; // 0x1CC
		::System::UInt32 PLSAtlasResolution; // 0x1D0
		::System::Single LODBias; // 0x1D4
		::System::Single DiffuseOnlyDistance; // 0x1D8
		::System::Single RainDropCountScale; // 0x1DC
		::System::UInt32 PLSMaxDynamicUpdatesPerFrame; // 0x1E0
		::System::Boolean DisableDOF; // 0x1E4
		::System::Boolean OffScreenParticlesMSAA; // 0x1E5
		::System::Boolean EnableRefactorLayout; // 0x1E6
		::System::Boolean DisableMotionBlur; // 0x1E7

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPROFILE__CTOR_OFFSET))(this);
		}
	};
}
