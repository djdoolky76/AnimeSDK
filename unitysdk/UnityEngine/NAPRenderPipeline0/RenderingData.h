#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LightData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LightShaftQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPShaderQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostProcessingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSDOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSPRQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TAAQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TransparentDynamicShadingRateSetting.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Rendering/PerObjectData.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderingData_TypeDefinitionIndex = 5959;

	struct alignas(8) RenderingData
	{
		::UnityEngine::NAPRenderPipeline0::CameraData cameraData; // 0x10
		::UnityEngine::NAPRenderPipeline0::LightData lightData; // 0x498
		::UnityEngine::NAPRenderPipeline0::ShadowData shadowData; // 0x4AC
		::UnityEngine::NAPRenderPipeline0::PostProcessingData postProcessingData; // 0x510
		::System::Boolean supportsDynamicBatching; // 0x518
		::System::Boolean useOffScreenParticles; // 0x519
		::System::Boolean useOffScreenParticlesMSAA; // 0x51A
		::System::Boolean useFullResolutionParticlesVRS; // 0x51B
		::UnityEngine::NAPRenderPipeline0::TransparentDynamicShadingRateSetting transparentDynamicShadingRateSetting; // 0x51C
		::System::Boolean isTransparentMSAAJitterThisFrame; // 0x520
		::System::Boolean isBloomOn; // 0x521
		::System::Boolean isCapsuleAoOn; // 0x522
		::System::Boolean isContactShadowOn; // 0x523
		::System::Boolean isStencilShadowOn; // 0x524
		::System::Boolean isMotionBlurOn; // 0x525
		::System::Boolean isLensFlareOcclusionOn; // 0x526
		::System::Boolean isSceneMotionVectorOn; // 0x527
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode globalAntialiasingMode; // 0x528
		::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality mirrorReflectionQuality; // 0x52C
		::System::Single planarReflectionBlurAmount; // 0x530
		::System::Single planarReflectionLodSteps; // 0x534
		::System::Single planarReflectionMinSmoothness; // 0x538
		::System::Single planarReflectionSmoothnessFadeStart; // 0x53C
		::System::Single screenSpaceReflectionLodSteps; // 0x540
		::System::Single screenSpaceReflectionBlurAmount; // 0x544
		::System::Single screenSpaceReflectionMinSmoothness; // 0x548
		::System::Int32 screenSpaceReflectionRTSizeDownScale; // 0x54C
		::System::Single screenSpaceReflectionSmoothnessFadeStart; // 0x550
		::UnityEngine::NAPRenderPipeline0::SSPRQuality ssprQuality; // 0x554
		::System::Int32 ssprRTSizeDownScale; // 0x558
		::System::Boolean isssprBlur; // 0x55C
		::System::Byte _padding0[0x3];
		::System::Single ssprBlurAmount; // 0x560
		::System::Boolean isssprFillHole; // 0x564
		::System::Boolean useSsprTemporalFilter; // 0x565
		::System::Boolean useSsprFinalColorFilter; // 0x566
		::System::Boolean isUiBlurOn; // 0x567
		::System::Int32 uiBlurDownSample; // 0x568
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality fogQuality; // 0x56C
		::UnityEngine::NAPRenderPipeline0::LightShaftQuality lightShaftQuality; // 0x570
		::UnityEngine::NAPRenderPipeline0::SSAOQuality ssaoQuality; // 0x574
		::UnityEngine::Rendering::PerObjectData perObjectData; // 0x578
		::UnityEngine::NAPRenderPipeline0::TAAQuality taaQuality; // 0x57C
		::System::Boolean killAlphaInFinalBlit; // 0x580
		::System::Boolean isHDRDisplayOn; // 0x581
		::System::Boolean accelStructBuilt; // 0x582
		::System::Boolean postProcessingEnabled; // 0x583
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Single>* screenCullingRatio; // 0x588
		::Il2CppArray<::System::Single>* screenShadowCullingRatio; // 0x590
		::Il2CppArray<::Il2CppArray<::System::Single>*>* layerShadowCullingDistances; // 0x598
		::UnityEngine::NAPRenderPipeline0::NAPShaderQuality napShaderQuality; // 0x5A0
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality volumetricCloudQuality; // 0x5A4
		::UnityEngine::NAPRenderPipeline0::SSDOQuality ssdoQuality; // 0x5A8
		::System::Boolean useBakedDecal; // 0x5AC
	};
}
